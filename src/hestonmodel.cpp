#include "HestonModel.h"
#include <cmath>
#include <iostream>
using namespace std;

double HestonModel::CalculateOptionPrice(const HestonOptionPricingRequest* request) {
    double S0 = request->underlying_price();
    double X = request->strike_price();
    double T = request->time_to_expiration();
    double r = request->risk_free_interest_rate();
    double q = request->continuous_dividend_yield();
    double v0 = request->initial_volatility();

    alert();
    double d1 = (log(S0 / X) + (r - q + v0 / 2) * T) / (sqrt(v0 * T)) + sqrt(v0 * T) / 2;
    double d2 = d1 - sqrt(v0 * T);

    double call_option_price = S0 * exp(-q * T) * cdf(d1) - X * exp(-r * T) * cdf(d2);

    return call_option_price;
}

double cdf(double x) {
    return 0.5 * (1 + erf(x / sqrt(2)));
}

void HestonModel::alert() {
    std::cout << "Calculating Option Value using Heston Model\n";
}