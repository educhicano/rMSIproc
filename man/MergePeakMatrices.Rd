% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Process.R
\name{MergePeakMatrices}
\alias{MergePeakMatrices}
\title{MergePeakMatrices.}
\usage{
MergePeakMatrices(PeakMatrixList, binningTolerance = 100,
  binningFilter = 0.01)
}
\arguments{
\item{PeakMatrixList}{A list of various peak matrix objexts produced using rMSIproc.}

\item{binningTolerance}{the tolerance used to merge peaks to the same bin specified in ppm. It is recomanded to use the half of the peak width.}

\item{binningFilter}{the peaks bins non detected in at least the BinFitler*TotalNumberOfPixels spectra will be deleted.}
}
\value{
a intensity matrix where each row corresponds to an spectrum.
}
\description{
Merges a list containing various peak matrices in a single peak matrix.
The rMSIproc binning method is used to calculate the new masses.
}
