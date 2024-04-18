#include <grpcpp/grpcpp.h>
#include "options.grpc.pb.h"
#include "models/ScholesModel.h"
#include "models/HestonModel.h"
#include "models/VarianceGammaModel.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using options::OptionsService;
using options::ScholesOptionPricingRequest;
using options::ScholesOptionPricingResponse;
using options::HestonOptionPricingRequest;
using options::HestonOptionPricingResponse;
using options::VarianceGammaOptionPricingRequest;
using options::VarianceGammaOptionPricingResponse;

class OptionsServiceImpl final : public OptionsService::Service {
public:
    Status PriceOptionScholes(ServerContext* context, 
            const ScholesOptionPricingRequest* request, 
            ScholesOptionPricingResponse* response) override {

        double option_price = ScholesModel::CalculateOptionPrice(request);
        response->set_option_price(option_price);
        return Status::OK;
    }

    Status PriceOptionHeston(ServerContext* context, 
            const HestonOptionPricingRequest* request, 
            HestonOptionPricingResponse* response) override {
        
        double option_price = HestonModel::CalculateOptionPrice(request);
        response->set_option_price(option_price);
        return Status::OK;
    }

    Status PriceOptionVarianceGamma(ServerContext* context, 
            const VarianceGammaOptionPricingRequest* request, 
            VarianceGammaOptionPricingResponse* response) override {

        double option_price = VarianceGammaModel::CalculateOptionPrice(request);
        response->set_option_price(option_price);
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    OptionsServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
