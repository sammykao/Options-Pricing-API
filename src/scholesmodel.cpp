#include "ScholesModel.h"
#include <iostream>
#include <cmath>
using namespace std;

double ScholesModel::CalculateOptionPrice(const ScholesOptionPricingRequest* request) {
    double S0 = request->underlying_price();
    double X = request->strike_price();
    double T = request->time_to_expiration();
    double r = request->risk_free_interest_rate();
    double sigma = request->volatility();
    alert();

    double d1 = (log(S0 / X) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);

    double call_option_price = S0 * cdf(d1) - X * exp(-r * T) * cdf(d2);

    return call_option_price;
}

double ScholesModel::cdf(double x) {
    return 0.5 * (1 + std::erf(x / std::sqrt(2)));
}
void ScholesModel::alert() {
    std::cout << "Calculating Option Value using Black-Scholes Model\n";
}
