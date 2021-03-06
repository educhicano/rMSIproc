% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/LoadStorePeakMat.R
\name{StorePeakMatrix}
\alias{StorePeakMatrix}
\title{StorePeakMatrix.}
\usage{
StorePeakMatrix(data_path, data)
}
\arguments{
\item{data_path}{full path including filename where data must be stored.}

\item{data}{a List containing intensity, SNR and area matrices, the mass axis vector and a data.frame containing in each variable a normalization vector.}
}
\description{
Stores a binned peaks matrix to HDD.
Data is stored zip compressed, so it is recomeneded to specify the name with .zip extension.
}
