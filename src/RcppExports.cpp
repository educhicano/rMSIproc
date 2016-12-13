// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// NoiseEstimationFFTCosWin
NumericVector NoiseEstimationFFTCosWin(NumericVector x, int filWinSize);
RcppExport SEXP rMSIproc_NoiseEstimationFFTCosWin(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTCosWin(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTExpWin
NumericVector NoiseEstimationFFTExpWin(NumericVector x, int filWinSize);
RcppExport SEXP rMSIproc_NoiseEstimationFFTExpWin(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTExpWin(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTCosWinMat
NumericMatrix NoiseEstimationFFTCosWinMat(NumericMatrix x, int filWinSize);
RcppExport SEXP rMSIproc_NoiseEstimationFFTCosWinMat(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTCosWinMat(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// NoiseEstimationFFTExpWinMat
NumericMatrix NoiseEstimationFFTExpWinMat(NumericMatrix x, int filWinSize);
RcppExport SEXP rMSIproc_NoiseEstimationFFTExpWinMat(SEXP xSEXP, SEXP filWinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type filWinSize(filWinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(NoiseEstimationFFTExpWinMat(x, filWinSize));
    return rcpp_result_gen;
END_RCPP
}
// LoadPeakMatrixC
List LoadPeakMatrixC(String path);
RcppExport SEXP rMSIproc_LoadPeakMatrixC(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(LoadPeakMatrixC(path));
    return rcpp_result_gen;
END_RCPP
}
// StorePeakMatrixC
void StorePeakMatrixC(String path, List mat);
RcppExport SEXP rMSIproc_StorePeakMatrixC(SEXP pathSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type path(pathSEXP);
    Rcpp::traits::input_parameter< List >::type mat(matSEXP);
    StorePeakMatrixC(path, mat);
    return R_NilValue;
END_RCPP
}
// FullImageProcess
List FullImageProcess(String basePath, StringVector fileNames, NumericVector mass, NumericVector refSpectrum, IntegerVector numRows, String dataType, int numOfThreads, int AlignmentIterations, double SNR, int WinSize, int InterpolationUpSampling, int SmoothingKernelSize, bool doBinning, double binningTolerance, double binningFilter);
RcppExport SEXP rMSIproc_FullImageProcess(SEXP basePathSEXP, SEXP fileNamesSEXP, SEXP massSEXP, SEXP refSpectrumSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP numOfThreadsSEXP, SEXP AlignmentIterationsSEXP, SEXP SNRSEXP, SEXP WinSizeSEXP, SEXP InterpolationUpSamplingSEXP, SEXP SmoothingKernelSizeSEXP, SEXP doBinningSEXP, SEXP binningToleranceSEXP, SEXP binningFilterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type basePath(basePathSEXP);
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type refSpectrum(refSpectrumSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type numOfThreads(numOfThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type AlignmentIterations(AlignmentIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type SNR(SNRSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    Rcpp::traits::input_parameter< int >::type InterpolationUpSampling(InterpolationUpSamplingSEXP);
    Rcpp::traits::input_parameter< int >::type SmoothingKernelSize(SmoothingKernelSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type doBinning(doBinningSEXP);
    Rcpp::traits::input_parameter< double >::type binningTolerance(binningToleranceSEXP);
    Rcpp::traits::input_parameter< double >::type binningFilter(binningFilterSEXP);
    rcpp_result_gen = Rcpp::wrap(FullImageProcess(basePath, fileNames, mass, refSpectrum, numRows, dataType, numOfThreads, AlignmentIterations, SNR, WinSize, InterpolationUpSampling, SmoothingKernelSize, doBinning, binningTolerance, binningFilter));
    return rcpp_result_gen;
END_RCPP
}
// DetectPeaks_C
NumericMatrix DetectPeaks_C(NumericVector mass, NumericVector intensity, double SNR, int WinSize);
RcppExport SEXP rMSIproc_DetectPeaks_C(SEXP massSEXP, SEXP intensitySEXP, SEXP SNRSEXP, SEXP WinSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intensity(intensitySEXP);
    Rcpp::traits::input_parameter< double >::type SNR(SNRSEXP);
    Rcpp::traits::input_parameter< int >::type WinSize(WinSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(DetectPeaks_C(mass, intensity, SNR, WinSize));
    return rcpp_result_gen;
END_RCPP
}
// PrintrMSIObjectInfo
void PrintrMSIObjectInfo(String basePath, StringVector fileNames, int massChannels, IntegerVector numRows, String dataType);
RcppExport SEXP rMSIproc_PrintrMSIObjectInfo(SEXP basePathSEXP, SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type basePath(basePathSEXP);
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    PrintrMSIObjectInfo(basePath, fileNames, massChannels, numRows, dataType);
    return R_NilValue;
END_RCPP
}
// LoadrMSIDataCube
NumericMatrix LoadrMSIDataCube(String basePath, StringVector fileNames, int massChannels, IntegerVector numRows, String dataType, int cubeSel);
RcppExport SEXP rMSIproc_LoadrMSIDataCube(SEXP basePathSEXP, SEXP fileNamesSEXP, SEXP massChannelsSEXP, SEXP numRowsSEXP, SEXP dataTypeSEXP, SEXP cubeSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type basePath(basePathSEXP);
    Rcpp::traits::input_parameter< StringVector >::type fileNames(fileNamesSEXP);
    Rcpp::traits::input_parameter< int >::type massChannels(massChannelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numRows(numRowsSEXP);
    Rcpp::traits::input_parameter< String >::type dataType(dataTypeSEXP);
    Rcpp::traits::input_parameter< int >::type cubeSel(cubeSelSEXP);
    rcpp_result_gen = Rcpp::wrap(LoadrMSIDataCube(basePath, fileNames, massChannels, numRows, dataType, cubeSel));
    return rcpp_result_gen;
END_RCPP
}
// Smoothing_SavitzkyGolay
NumericVector Smoothing_SavitzkyGolay(NumericVector x, int sgSize);
RcppExport SEXP rMSIproc_Smoothing_SavitzkyGolay(SEXP xSEXP, SEXP sgSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type sgSize(sgSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(Smoothing_SavitzkyGolay(x, sgSize));
    return rcpp_result_gen;
END_RCPP
}
