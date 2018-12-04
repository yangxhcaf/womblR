// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// GetRooti
arma::mat GetRooti(arma::mat const& Cov, arma::mat const& Eye);
RcppExport SEXP _womblR_GetRooti(SEXP CovSEXP, SEXP EyeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Cov(CovSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Eye(EyeSEXP);
    rcpp_result_gen = Rcpp::wrap(GetRooti(Cov, Eye));
    return rcpp_result_gen;
END_RCPP
}
// JointCovarianceCube
arma::cube JointCovarianceCube(arma::cube const& WAlphas, arma::vec const& Tau2, arma::mat const& EyeM, double Rho, int M, int Nu);
RcppExport SEXP _womblR_JointCovarianceCube(SEXP WAlphasSEXP, SEXP Tau2SEXP, SEXP EyeMSEXP, SEXP RhoSEXP, SEXP MSEXP, SEXP NuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube const& >::type WAlphas(WAlphasSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type Tau2(Tau2SEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type EyeM(EyeMSEXP);
    Rcpp::traits::input_parameter< double >::type Rho(RhoSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type Nu(NuSEXP);
    rcpp_result_gen = Rcpp::wrap(JointCovarianceCube(WAlphas, Tau2, EyeM, Rho, M, Nu));
    return rcpp_result_gen;
END_RCPP
}
// RootiLikelihoodCube
arma::cube RootiLikelihoodCube(arma::cube const& JointCovariances, arma::mat const& EyeM, int M, int Nu);
RcppExport SEXP _womblR_RootiLikelihoodCube(SEXP JointCovariancesSEXP, SEXP EyeMSEXP, SEXP MSEXP, SEXP NuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube const& >::type JointCovariances(JointCovariancesSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type EyeM(EyeMSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type Nu(NuSEXP);
    rcpp_result_gen = Rcpp::wrap(RootiLikelihoodCube(JointCovariances, EyeM, M, Nu));
    return rcpp_result_gen;
END_RCPP
}
// SIGMA
arma::mat SIGMA(double Phi, int TempCorInd, arma::mat const& TimeDist, int Nu);
RcppExport SEXP _womblR_SIGMA(SEXP PhiSEXP, SEXP TempCorIndSEXP, SEXP TimeDistSEXP, SEXP NuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< int >::type TempCorInd(TempCorIndSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type TimeDist(TimeDistSEXP);
    Rcpp::traits::input_parameter< int >::type Nu(NuSEXP);
    rcpp_result_gen = Rcpp::wrap(SIGMA(Phi, TempCorInd, TimeDist, Nu));
    return rcpp_result_gen;
END_RCPP
}
// WAlphaCube
arma::cube WAlphaCube(arma::vec const& Alpha, arma::colvec const& Z, arma::mat const& W, int M, int Nu, int WeightsInd);
RcppExport SEXP _womblR_WAlphaCube(SEXP AlphaSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP MSEXP, SEXP NuSEXP, SEXP WeightsIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type Alpha(AlphaSEXP);
    Rcpp::traits::input_parameter< arma::colvec const& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type Nu(NuSEXP);
    Rcpp::traits::input_parameter< int >::type WeightsInd(WeightsIndSEXP);
    rcpp_result_gen = Rcpp::wrap(WAlphaCube(Alpha, Z, W, M, Nu, WeightsInd));
    return rcpp_result_gen;
END_RCPP
}
// GetLogLik
arma::colvec GetLogLik(Rcpp::List DatObj_List, Rcpp::List Para_List, Rcpp::List DatAug_List, int NKeep);
RcppExport SEXP _womblR_GetLogLik(SEXP DatObj_ListSEXP, SEXP Para_ListSEXP, SEXP DatAug_ListSEXP, SEXP NKeepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Para_List(Para_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type DatAug_List(DatAug_ListSEXP);
    Rcpp::traits::input_parameter< int >::type NKeep(NKeepSEXP);
    rcpp_result_gen = Rcpp::wrap(GetLogLik(DatObj_List, Para_List, DatAug_List, NKeep));
    return rcpp_result_gen;
END_RCPP
}
// GetLogLikMean
double GetLogLikMean(Rcpp::List DatObj_List, Rcpp::List Para_List, Rcpp::List DatAug_List);
RcppExport SEXP _womblR_GetLogLikMean(SEXP DatObj_ListSEXP, SEXP Para_ListSEXP, SEXP DatAug_ListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Para_List(Para_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type DatAug_List(DatAug_ListSEXP);
    rcpp_result_gen = Rcpp::wrap(GetLogLikMean(DatObj_List, Para_List, DatAug_List));
    return rcpp_result_gen;
END_RCPP
}
// SamplePPD
arma::mat SamplePPD(Rcpp::List DatObj_List, Rcpp::List Para_List, int NKeep);
RcppExport SEXP _womblR_SamplePPD(SEXP DatObj_ListSEXP, SEXP Para_ListSEXP, SEXP NKeepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Para_List(Para_ListSEXP);
    Rcpp::traits::input_parameter< int >::type NKeep(NKeepSEXP);
    rcpp_result_gen = Rcpp::wrap(SamplePPD(DatObj_List, Para_List, NKeep));
    return rcpp_result_gen;
END_RCPP
}
// STBDwDM_Rcpp
Rcpp::List STBDwDM_Rcpp(Rcpp::List DatObj_List, Rcpp::List HyPara_List, Rcpp::List MetrObj_List, Rcpp::List Para_List, Rcpp::List DatAug_List, Rcpp::List McmcObj_List, arma::mat RawSamples, bool Interactive);
RcppExport SEXP _womblR_STBDwDM_Rcpp(SEXP DatObj_ListSEXP, SEXP HyPara_ListSEXP, SEXP MetrObj_ListSEXP, SEXP Para_ListSEXP, SEXP DatAug_ListSEXP, SEXP McmcObj_ListSEXP, SEXP RawSamplesSEXP, SEXP InteractiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type HyPara_List(HyPara_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type MetrObj_List(MetrObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Para_List(Para_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type DatAug_List(DatAug_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type McmcObj_List(McmcObj_ListSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type RawSamples(RawSamplesSEXP);
    Rcpp::traits::input_parameter< bool >::type Interactive(InteractiveSEXP);
    rcpp_result_gen = Rcpp::wrap(STBDwDM_Rcpp(DatObj_List, HyPara_List, MetrObj_List, Para_List, DatAug_List, McmcObj_List, RawSamples, Interactive));
    return rcpp_result_gen;
END_RCPP
}
// ThetaKrigging
arma::mat ThetaKrigging(Rcpp::List DatObj_List, Rcpp::List Para_List, int NKeep);
RcppExport SEXP _womblR_ThetaKrigging(SEXP DatObj_ListSEXP, SEXP Para_ListSEXP, SEXP NKeepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Para_List(Para_ListSEXP);
    Rcpp::traits::input_parameter< int >::type NKeep(NKeepSEXP);
    rcpp_result_gen = Rcpp::wrap(ThetaKrigging(DatObj_List, Para_List, NKeep));
    return rcpp_result_gen;
END_RCPP
}
// YKrigging
arma::mat YKrigging(Rcpp::List DatObj_List, arma::mat ThetaKrig, int NKeep);
RcppExport SEXP _womblR_YKrigging(SEXP DatObj_ListSEXP, SEXP ThetaKrigSEXP, SEXP NKeepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type DatObj_List(DatObj_ListSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ThetaKrig(ThetaKrigSEXP);
    Rcpp::traits::input_parameter< int >::type NKeep(NKeepSEXP);
    rcpp_result_gen = Rcpp::wrap(YKrigging(DatObj_List, ThetaKrig, NKeep));
    return rcpp_result_gen;
END_RCPP
}
// CholInv
arma::mat CholInv(arma::mat const& Cov);
RcppExport SEXP _womblR_CholInv(SEXP CovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type Cov(CovSEXP);
    rcpp_result_gen = Rcpp::wrap(CholInv(Cov));
    return rcpp_result_gen;
END_RCPP
}
// Inv3
arma::mat Inv3(arma::mat const& A);
RcppExport SEXP _womblR_Inv3(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(Inv3(A));
    return rcpp_result_gen;
END_RCPP
}
// makeSymm
arma::mat makeSymm(arma::mat const& A);
RcppExport SEXP _womblR_makeSymm(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(makeSymm(A));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_womblR_GetRooti", (DL_FUNC) &_womblR_GetRooti, 2},
    {"_womblR_JointCovarianceCube", (DL_FUNC) &_womblR_JointCovarianceCube, 6},
    {"_womblR_RootiLikelihoodCube", (DL_FUNC) &_womblR_RootiLikelihoodCube, 4},
    {"_womblR_SIGMA", (DL_FUNC) &_womblR_SIGMA, 4},
    {"_womblR_WAlphaCube", (DL_FUNC) &_womblR_WAlphaCube, 6},
    {"_womblR_GetLogLik", (DL_FUNC) &_womblR_GetLogLik, 4},
    {"_womblR_GetLogLikMean", (DL_FUNC) &_womblR_GetLogLikMean, 3},
    {"_womblR_SamplePPD", (DL_FUNC) &_womblR_SamplePPD, 3},
    {"_womblR_STBDwDM_Rcpp", (DL_FUNC) &_womblR_STBDwDM_Rcpp, 8},
    {"_womblR_ThetaKrigging", (DL_FUNC) &_womblR_ThetaKrigging, 3},
    {"_womblR_YKrigging", (DL_FUNC) &_womblR_YKrigging, 3},
    {"_womblR_CholInv", (DL_FUNC) &_womblR_CholInv, 1},
    {"_womblR_Inv3", (DL_FUNC) &_womblR_Inv3, 1},
    {"_womblR_makeSymm", (DL_FUNC) &_womblR_makeSymm, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_womblR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
