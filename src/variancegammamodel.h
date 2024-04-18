#ifndef VARIANCE_GAMMA_MODEL_H
#define VARIANCE_GAMMA_MODEL_H

#include "options.grpc.pb.h"

class VarianceGammaModel {
public:
    static double CalculateOptionPrice(const VarianceGammaOptionPricingRequest* request);
private:
    double cdf(double x);
    void alert();
};

#endif // VARIANCE_GAMMA_MODEL_H