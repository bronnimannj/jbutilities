// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rankdf
Rcpp::DataFrame rankdf(Rcpp::DataFrame df);
RcppExport SEXP _jbutilities_rankdf(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(rankdf(df));
    return rcpp_result_gen;
END_RCPP
}
// ranker
Rcpp::NumericVector ranker(Rcpp::NumericVector values, Rcpp::DataFrame df, Rcpp::String method);
RcppExport SEXP _jbutilities_ranker(SEXP valuesSEXP, SEXP dfSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(ranker(values, df, method));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jbutilities_rankdf", (DL_FUNC) &_jbutilities_rankdf, 1},
    {"_jbutilities_ranker", (DL_FUNC) &_jbutilities_ranker, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_jbutilities(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
