#include "VarianceGammaModel.h"
#include <iostream>
#include <cmath>

double VarianceGammaModel::CalculateOptionPrice(const VarianceGammaOptionPricingRequest* request) {
    double S0 = request->underlying_price();
    double X = request->strike_price();
    double T = request->time_to_expiration();
    double r = request->risk_free_interest_rate();
    double mu = request->drift_rate();
    double lambda = request->jump_intensity();
    double theta = request->mean_reversion_parameter();
    double nu = request->volatility();

    alert();
    
    // Calculate d1 and d2
    double d1 = (log(S0 / X) + (mu + (theta / nu) + (lambda / (2 * nu))) * T) /
                sqrt((theta / nu) * T + (lambda / nu) * T);
    double d2 = d1 - sqrt((theta / nu) * T + (lambda / nu) * T);
    
    // Calculate option price
    double call_option_price = exp(-r * T) * (S0 * exp(mu + lambda * T + (theta / nu)) * cdf(d1) - X * cdf(d2));
    
    return call_option_price;
}

double VarianceGammaModel::cdf(double x) {
    return 0.5 * (1 + std::erf(x / std::sqrt(2)));
}

void VarianceGammaModel::alert() {
    std::cout << "Calculating Options Value using Variance Gamma Model\n";
}