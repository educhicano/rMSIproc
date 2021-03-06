/*************************************************************************
 *     rMSIproc - R package for MSI data processing
 *     Copyright (C) 2014 Pere Rafols Soler
 * 
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************************/

#include <Rcpp.h>
#include <cmath>
#include "mtlabelfreealign.h"
using namespace Rcpp;

MTLabelFreeAlign::MTLabelFreeAlign(ImgProcDef imgRunInfo) : 
  ThreadingMsiProc( imgRunInfo.numOfThreads, true, imgRunInfo.fileNames, imgRunInfo.massChannels, imgRunInfo.numRows, imgRunInfo.dataType )
{
  alngObj = new LabelFreeAlign*[numOfThreadsDouble];
  for(int i = 0; i < numOfThreadsDouble; i++)
  {
    alngObj[i] = new LabelFreeAlign(imgRunInfo.mass, imgRunInfo.ref_spectrum, imgRunInfo.massChannels, imgRunInfo.bilinearMode, 
                                    &fftSharedMutex, imgRunInfo.AlignmentIterations, 
                                    imgRunInfo.RefLow, imgRunInfo.RefMid, imgRunInfo.RefHigh,
                                    imgRunInfo.AlignmentMaxShift,  imgRunInfo.OverSampling);
  }
  numOfPixels = 0;
  for( int i = 0; i < imgRunInfo.fileNames.length(); i++)
  {
    numOfPixels +=  imgRunInfo.numRows[i];
  }
  mLags  =  new LabelFreeAlign::TLags[numOfPixels]; 
}

MTLabelFreeAlign::~MTLabelFreeAlign()
{
  for(int i = 0; i < numOfThreadsDouble; i++)
  {
    delete alngObj[i];
  }
  delete[] alngObj;
  delete[] mLags;
}

List MTLabelFreeAlign::Run()
{
  //Run peak-picking and alignemt in mutli-threading
  runMSIProcessingCpp();

  //Retrun first iteration lags
  NumericVector LagsLow(numOfPixels);
  NumericVector LagsHigh(numOfPixels);
  for( int i = 0; i < numOfPixels; i++)
  {
    LagsLow[i] = mLags[i].lagLow;
    LagsHigh[i] = mLags[i].lagHigh;
  }
  
  return List::create( Named("LagLow") = LagsLow, Named("LagHigh") = LagsHigh);
}

void MTLabelFreeAlign::ProcessingFunction(int threadSlot)
{
  //Perform alignment of each spectrum in the current loaded cube
  int is = CubeFirstRowID[iCube[threadSlot]];
  for( int j = 0; j < cubes[threadSlot]->nrows; j++)
  {
    mLags[is] = alngObj[threadSlot]->AlignSpectrum( cubes[threadSlot]->data[j] );
    is++;
  }
}

// [[Rcpp::export]]
List FullImageAlign( StringVector fileNames, 
                                NumericVector mass, NumericVector refSpectrum, IntegerVector numRows,
                                String dataType, int numOfThreads, 
                                bool AlignmentBilinear = false, int AlignmentIterations = 3, int AlignmentMaxShiftPpm = 200,
                                double RefLow = 0.0, double RefMid = 0.5, double RefHigh = 1.0, int OverSampling = 2 )
{
  
  //Copy R data to C arrays
  double *massC = new double[mass.length()];
  double *refC = new double[refSpectrum.length()];
  int numRowsC[fileNames.length()];
  memcpy(massC, mass.begin(), sizeof(double)*mass.length());
  memcpy(refC, refSpectrum.begin(), sizeof(double)*refSpectrum.length());
  memcpy(numRowsC, numRows.begin(), sizeof(int)*fileNames.length());
  
  MTLabelFreeAlign::ImgProcDef myProcParams;
  myProcParams.mass = massC;
  myProcParams.dataType = dataType;
  myProcParams.fileNames = fileNames;
  myProcParams.massChannels = refSpectrum.length();
  myProcParams.bilinearMode = AlignmentBilinear;
  myProcParams.numOfThreads = numOfThreads;
  myProcParams.numRows = numRowsC; 
  myProcParams.AlignmentIterations = AlignmentIterations;
  myProcParams.AlignmentMaxShift = AlignmentMaxShiftPpm;
  myProcParams.ref_spectrum = refC;
  myProcParams.RefLow = RefLow;
  myProcParams.RefMid = RefMid;
  myProcParams.RefHigh = RefHigh;
  myProcParams.OverSampling = OverSampling;
  
  MTLabelFreeAlign myAlignment(myProcParams);
  delete[] massC;
  delete[] refC;
  return myAlignment.Run();
}
