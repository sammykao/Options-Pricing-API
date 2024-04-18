#ifndef HESTON_MODEL_H
#define HESTON_MODEL_H

#include "options.grpc.pb.h"
class HestonModel {
public:
    static double CalculateOptionPrice(const HestonOptionPricingRequest* request);

private:
    void alert();
    

};

#endif // HESTON_MODEL_H