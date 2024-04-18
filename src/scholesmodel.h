#ifndef SCHOLES_MODEL_H
#define SCHOLES_MODEL_H

#include "options.grpc.pb.h"

class ScholesModel {
public:
    static double CalculateOptionPrice(const ScholesOptionPricingRequest* request);
private:

    void alert();
    static double cdf(double x);
};

#endif // SCHOLES_MODEL_H
