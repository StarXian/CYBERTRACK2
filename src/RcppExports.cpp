// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// myrunif
arma::vec myrunif(int d);
RcppExport SEXP _CYBERTRACK2_myrunif(SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(myrunif(d));
    return rcpp_result_gen;
END_RCPP
}
// rtmvnorm_gibbs
arma::mat rtmvnorm_gibbs(arma::vec mu, arma::mat omega, arma::vec init_state);
RcppExport SEXP _CYBERTRACK2_rtmvnorm_gibbs(SEXP muSEXP, SEXP omegaSEXP, SEXP init_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init_state(init_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(rtmvnorm_gibbs(mu, omega, init_state));
    return rcpp_result_gen;
END_RCPP
}
// softmax
arma::rowvec softmax(const arma::rowvec& x);
RcppExport SEXP _CYBERTRACK2_softmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(softmax(x));
    return rcpp_result_gen;
END_RCPP
}
// weighted_colMeans
arma::mat weighted_colMeans(Rcpp::List Y, Rcpp::List W, const double& tau, int L, int D);
RcppExport SEXP _CYBERTRACK2_weighted_colMeans(SEXP YSEXP, SEXP WSEXP, SEXP tauSEXP, SEXP LSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type W(WSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_colMeans(Y, W, tau, L, D));
    return rcpp_result_gen;
END_RCPP
}
// weighted_colMeans_fix
arma::mat weighted_colMeans_fix(Rcpp::List Y, Rcpp::List W, arma::mat premu, const double& tau, int L, int D, arma::uvec fix_id);
RcppExport SEXP _CYBERTRACK2_weighted_colMeans_fix(SEXP YSEXP, SEXP WSEXP, SEXP premuSEXP, SEXP tauSEXP, SEXP LSEXP, SEXP DSEXP, SEXP fix_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type premu(premuSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_colMeans_fix(Y, W, premu, tau, L, D, fix_id));
    return rcpp_result_gen;
END_RCPP
}
// simZ
Rcpp::List simZ(const arma::mat& z_pre, const arma::mat& mu, const arma::cube& invSigma, const int& L, const arma::mat& w);
RcppExport SEXP _CYBERTRACK2_simZ(SEXP z_preSEXP, SEXP muSEXP, SEXP invSigmaSEXP, SEXP LSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type z_pre(z_preSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type invSigma(invSigmaSEXP);
    Rcpp::traits::input_parameter< const int& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(simZ(z_pre, mu, invSigma, L, w));
    return rcpp_result_gen;
END_RCPP
}
// simW
arma::mat simW(arma::mat Y, arma::mat pi, arma::mat mu, arma::cube invSigma, int L, arma::mat minmax_id, int T);
RcppExport SEXP _CYBERTRACK2_simW(SEXP YSEXP, SEXP piSEXP, SEXP muSEXP, SEXP invSigmaSEXP, SEXP LSEXP, SEXP minmax_idSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type invSigma(invSigmaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type minmax_id(minmax_idSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(simW(Y, pi, mu, invSigma, L, minmax_id, T));
    return rcpp_result_gen;
END_RCPP
}
// calc_E
arma::mat calc_E(arma::mat Y, arma::mat pi, arma::mat mu, arma::cube invSigma, int L, arma::mat minmax_id, int T);
RcppExport SEXP _CYBERTRACK2_calc_E(SEXP YSEXP, SEXP piSEXP, SEXP muSEXP, SEXP invSigmaSEXP, SEXP LSEXP, SEXP minmax_idSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type invSigma(invSigmaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type minmax_id(minmax_idSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_E(Y, pi, mu, invSigma, L, minmax_id, T));
    return rcpp_result_gen;
END_RCPP
}
// calc_weight
double calc_weight(arma::rowvec x, arma::uvec fix_id);
RcppExport SEXP _CYBERTRACK2_calc_weight(SEXP xSEXP, SEXP fix_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_weight(x, fix_id));
    return rcpp_result_gen;
END_RCPP
}
// combine_list
arma::uvec combine_list(Rcpp::List x);
RcppExport SEXP _CYBERTRACK2_combine_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_list(x));
    return rcpp_result_gen;
END_RCPP
}
// rsample
arma::uvec rsample(arma::uvec x, int N, arma::vec prob);
RcppExport SEXP _CYBERTRACK2_rsample(SEXP xSEXP, SEXP NSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(rsample(x, N, prob));
    return rcpp_result_gen;
END_RCPP
}
// weighted_iterative_sampling
arma::uvec weighted_iterative_sampling(arma::mat Y, int L, int D, arma::mat Wini, double xi, arma::mat pi, const arma::mat mu, const arma::cube Sigma, arma::rowvec t_id, arma::uvec fix_id, int wis_iter);
RcppExport SEXP _CYBERTRACK2_weighted_iterative_sampling(SEXP YSEXP, SEXP LSEXP, SEXP DSEXP, SEXP WiniSEXP, SEXP xiSEXP, SEXP piSEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP t_idSEXP, SEXP fix_idSEXP, SEXP wis_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wini(WiniSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type t_id(t_idSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    Rcpp::traits::input_parameter< int >::type wis_iter(wis_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_iterative_sampling(Y, L, D, Wini, xi, pi, mu, Sigma, t_id, fix_id, wis_iter));
    return rcpp_result_gen;
END_RCPP
}
// pi_update
arma::rowvec pi_update(arma::mat W, arma::rowvec pre_pi, arma::vec minmax_id, double alpha, int L, int T);
RcppExport SEXP _CYBERTRACK2_pi_update(SEXP WSEXP, SEXP pre_piSEXP, SEXP minmax_idSEXP, SEXP alphaSEXP, SEXP LSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type pre_pi(pre_piSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type minmax_id(minmax_idSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(pi_update(W, pre_pi, minmax_id, alpha, L, T));
    return rcpp_result_gen;
END_RCPP
}
// alpha_update
double alpha_update(arma::mat W, double pre_alpha, arma::rowvec pre_pi, int L, arma::vec minmax_id);
RcppExport SEXP _CYBERTRACK2_alpha_update(SEXP WSEXP, SEXP pre_alphaSEXP, SEXP pre_piSEXP, SEXP LSEXP, SEXP minmax_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type pre_alpha(pre_alphaSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type pre_pi(pre_piSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type minmax_id(minmax_idSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_update(W, pre_alpha, pre_pi, L, minmax_id));
    return rcpp_result_gen;
END_RCPP
}
// sigma_update
arma::cube sigma_update(arma::mat mu, Rcpp::List Y, Rcpp::List W, int L, int D, double nu, double tau, arma::mat Lambda);
RcppExport SEXP _CYBERTRACK2_sigma_update(SEXP muSEXP, SEXP YSEXP, SEXP WSEXP, SEXP LSEXP, SEXP DSEXP, SEXP nuSEXP, SEXP tauSEXP, SEXP LambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_update(mu, Y, W, L, D, nu, tau, Lambda));
    return rcpp_result_gen;
END_RCPP
}
// sigma_update_fix
arma::cube sigma_update_fix(arma::mat mu, Rcpp::List Y, Rcpp::List W, arma::cube preSigma, int L, int D, double nu, double tau, arma::mat Lambda, arma::uvec fix_id);
RcppExport SEXP _CYBERTRACK2_sigma_update_fix(SEXP muSEXP, SEXP YSEXP, SEXP WSEXP, SEXP preSigmaSEXP, SEXP LSEXP, SEXP DSEXP, SEXP nuSEXP, SEXP tauSEXP, SEXP LambdaSEXP, SEXP fix_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type preSigma(preSigmaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_update_fix(mu, Y, W, preSigma, L, D, nu, tau, Lambda, fix_id));
    return rcpp_result_gen;
END_RCPP
}
// weighted_means
arma::vec weighted_means(int D, int L, int T, Rcpp::List pi, Rcpp::List t_id);
RcppExport SEXP _CYBERTRACK2_weighted_means(SEXP DSEXP, SEXP LSEXP, SEXP TSEXP, SEXP piSEXP, SEXP t_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type pi(piSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_id(t_idSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_means(D, L, T, pi, t_id));
    return rcpp_result_gen;
END_RCPP
}
// find_popular
arma::uvec find_popular(int P, Rcpp::List all_sample_pi, arma::uvec fix_id, Rcpp::List t_id);
RcppExport SEXP _CYBERTRACK2_find_popular(SEXP PSEXP, SEXP all_sample_piSEXP, SEXP fix_idSEXP, SEXP t_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type all_sample_pi(all_sample_piSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_id(t_idSEXP);
    rcpp_result_gen = Rcpp::wrap(find_popular(P, all_sample_pi, fix_id, t_id));
    return rcpp_result_gen;
END_RCPP
}
// fix
Rcpp::List fix(int P, Rcpp::List all_sample_pi, Rcpp::List pi, arma::uvec fix_id, Rcpp::List t_id);
RcppExport SEXP _CYBERTRACK2_fix(SEXP PSEXP, SEXP all_sample_piSEXP, SEXP piSEXP, SEXP fix_idSEXP, SEXP t_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type all_sample_pi(all_sample_piSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_id(t_idSEXP);
    rcpp_result_gen = Rcpp::wrap(fix(P, all_sample_pi, pi, fix_id, t_id));
    return rcpp_result_gen;
END_RCPP
}
// stochasticEM_fix
Rcpp::List stochasticEM_fix(Rcpp::List& Y, const int& L, const int& D, Rcpp::List Wini, Rcpp::List piini, arma::rowvec alphaini, const arma::mat& muini, const arma::cube& Sigmaini, const double& tau, const double& nu, const arma::mat& Lambda, const int& num_iter, Rcpp::List t_idini, Rcpp::List id, arma::uvec fix_id);
RcppExport SEXP _CYBERTRACK2_stochasticEM_fix(SEXP YSEXP, SEXP LSEXP, SEXP DSEXP, SEXP WiniSEXP, SEXP piiniSEXP, SEXP alphainiSEXP, SEXP muiniSEXP, SEXP SigmainiSEXP, SEXP tauSEXP, SEXP nuSEXP, SEXP LambdaSEXP, SEXP num_iterSEXP, SEXP t_idiniSEXP, SEXP idSEXP, SEXP fix_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int& >::type D(DSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Wini(WiniSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type piini(piiniSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type alphaini(alphainiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type muini(muiniSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Sigmaini(SigmainiSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const int& >::type num_iter(num_iterSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_idini(t_idiniSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type fix_id(fix_idSEXP);
    rcpp_result_gen = Rcpp::wrap(stochasticEM_fix(Y, L, D, Wini, piini, alphaini, muini, Sigmaini, tau, nu, Lambda, num_iter, t_idini, id, fix_id));
    return rcpp_result_gen;
END_RCPP
}
// stochasticEM
Rcpp::List stochasticEM(Rcpp::List& Y, const int& L, const int& D, Rcpp::List Wini, Rcpp::List piini, arma::rowvec alphaini, const arma::mat& muini, const arma::cube& Sigmaini, const double& tau, const double& nu, const arma::mat& Lambda, const int& num_iter, Rcpp::List t_id);
RcppExport SEXP _CYBERTRACK2_stochasticEM(SEXP YSEXP, SEXP LSEXP, SEXP DSEXP, SEXP WiniSEXP, SEXP piiniSEXP, SEXP alphainiSEXP, SEXP muiniSEXP, SEXP SigmainiSEXP, SEXP tauSEXP, SEXP nuSEXP, SEXP LambdaSEXP, SEXP num_iterSEXP, SEXP t_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int& >::type D(DSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Wini(WiniSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type piini(piiniSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type alphaini(alphainiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type muini(muiniSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Sigmaini(SigmainiSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const int& >::type num_iter(num_iterSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_id(t_idSEXP);
    rcpp_result_gen = Rcpp::wrap(stochasticEM(Y, L, D, Wini, piini, alphaini, muini, Sigmaini, tau, nu, Lambda, num_iter, t_id));
    return rcpp_result_gen;
END_RCPP
}
// cybertrack2
Rcpp::List cybertrack2(Rcpp::List& Y, const int& L, const int& D, int& P, Rcpp::List Wini, Rcpp::List piini, arma::rowvec alphaini, const arma::mat& muini, const arma::cube& Sigmaini, const double& tau, const double& nu, const double& xi, const arma::mat& Lambda, const int& num_iter, int num_iter_refine, int wis_iter, Rcpp::List t_id);
RcppExport SEXP _CYBERTRACK2_cybertrack2(SEXP YSEXP, SEXP LSEXP, SEXP DSEXP, SEXP PSEXP, SEXP WiniSEXP, SEXP piiniSEXP, SEXP alphainiSEXP, SEXP muiniSEXP, SEXP SigmainiSEXP, SEXP tauSEXP, SEXP nuSEXP, SEXP xiSEXP, SEXP LambdaSEXP, SEXP num_iterSEXP, SEXP num_iter_refineSEXP, SEXP wis_iterSEXP, SEXP t_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const int& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int& >::type P(PSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Wini(WiniSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type piini(piiniSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type alphaini(alphainiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type muini(muiniSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Sigmaini(SigmainiSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const double& >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const int& >::type num_iter(num_iterSEXP);
    Rcpp::traits::input_parameter< int >::type num_iter_refine(num_iter_refineSEXP);
    Rcpp::traits::input_parameter< int >::type wis_iter(wis_iterSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_id(t_idSEXP);
    rcpp_result_gen = Rcpp::wrap(cybertrack2(Y, L, D, P, Wini, piini, alphaini, muini, Sigmaini, tau, nu, xi, Lambda, num_iter, num_iter_refine, wis_iter, t_id));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CYBERTRACK2_myrunif", (DL_FUNC) &_CYBERTRACK2_myrunif, 1},
    {"_CYBERTRACK2_rtmvnorm_gibbs", (DL_FUNC) &_CYBERTRACK2_rtmvnorm_gibbs, 3},
    {"_CYBERTRACK2_softmax", (DL_FUNC) &_CYBERTRACK2_softmax, 1},
    {"_CYBERTRACK2_weighted_colMeans", (DL_FUNC) &_CYBERTRACK2_weighted_colMeans, 5},
    {"_CYBERTRACK2_weighted_colMeans_fix", (DL_FUNC) &_CYBERTRACK2_weighted_colMeans_fix, 7},
    {"_CYBERTRACK2_simZ", (DL_FUNC) &_CYBERTRACK2_simZ, 5},
    {"_CYBERTRACK2_simW", (DL_FUNC) &_CYBERTRACK2_simW, 7},
    {"_CYBERTRACK2_calc_E", (DL_FUNC) &_CYBERTRACK2_calc_E, 7},
    {"_CYBERTRACK2_calc_weight", (DL_FUNC) &_CYBERTRACK2_calc_weight, 2},
    {"_CYBERTRACK2_combine_list", (DL_FUNC) &_CYBERTRACK2_combine_list, 1},
    {"_CYBERTRACK2_rsample", (DL_FUNC) &_CYBERTRACK2_rsample, 3},
    {"_CYBERTRACK2_weighted_iterative_sampling", (DL_FUNC) &_CYBERTRACK2_weighted_iterative_sampling, 11},
    {"_CYBERTRACK2_pi_update", (DL_FUNC) &_CYBERTRACK2_pi_update, 6},
    {"_CYBERTRACK2_alpha_update", (DL_FUNC) &_CYBERTRACK2_alpha_update, 5},
    {"_CYBERTRACK2_sigma_update", (DL_FUNC) &_CYBERTRACK2_sigma_update, 8},
    {"_CYBERTRACK2_sigma_update_fix", (DL_FUNC) &_CYBERTRACK2_sigma_update_fix, 10},
    {"_CYBERTRACK2_weighted_means", (DL_FUNC) &_CYBERTRACK2_weighted_means, 5},
    {"_CYBERTRACK2_find_popular", (DL_FUNC) &_CYBERTRACK2_find_popular, 4},
    {"_CYBERTRACK2_fix", (DL_FUNC) &_CYBERTRACK2_fix, 5},
    {"_CYBERTRACK2_stochasticEM_fix", (DL_FUNC) &_CYBERTRACK2_stochasticEM_fix, 15},
    {"_CYBERTRACK2_stochasticEM", (DL_FUNC) &_CYBERTRACK2_stochasticEM, 13},
    {"_CYBERTRACK2_cybertrack2", (DL_FUNC) &_CYBERTRACK2_cybertrack2, 17},
    {NULL, NULL, 0}
};

RcppExport void R_init_CYBERTRACK2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
