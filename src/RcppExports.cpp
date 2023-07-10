// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// r_sample_seeds
Rcpp::IntegerVector r_sample_seeds(int n, unsigned int seed);
RcppExport SEXP _EGAnet_r_sample_seeds(SEXP nSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(r_sample_seeds(n, seed));
    return rcpp_result_gen;
END_RCPP
}
// r_random_uniform
Rcpp::NumericVector r_random_uniform(int n, double min, double max, unsigned int seed);
RcppExport SEXP _EGAnet_r_random_uniform(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(r_random_uniform(n, min, max, seed));
    return rcpp_result_gen;
END_RCPP
}
// r_sample_without_replacement
Rcpp::IntegerVector r_sample_without_replacement(Rcpp::IntegerVector arr, unsigned int seed);
RcppExport SEXP _EGAnet_r_sample_without_replacement(SEXP arrSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type arr(arrSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(r_sample_without_replacement(arr, seed));
    return rcpp_result_gen;
END_RCPP
}
// r_sample_with_replacement
Rcpp::IntegerVector r_sample_with_replacement(int n, unsigned int seed);
RcppExport SEXP _EGAnet_r_sample_with_replacement(SEXP nSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(r_sample_with_replacement(n, seed));
    return rcpp_result_gen;
END_RCPP
}
