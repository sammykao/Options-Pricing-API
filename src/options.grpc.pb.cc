// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: options.proto

#include "options.pb.h"
#include "options.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace options {

static const char* OptionsService_method_names[] = {
  "/options.OptionsService/PriceOptionScholes",
  "/options.OptionsService/PriceOptionHeston",
  "/options.OptionsService/PriceOptionVarianceGamma",
};

std::unique_ptr< OptionsService::Stub> OptionsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< OptionsService::Stub> stub(new OptionsService::Stub(channel, options));
  return stub;
}

OptionsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_PriceOptionScholes_(OptionsService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PriceOptionHeston_(OptionsService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PriceOptionVarianceGamma_(OptionsService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status OptionsService::Stub::PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::options::ScholesOptionPricingResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PriceOptionScholes_, context, request, response);
}

void OptionsService::Stub::async::PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionScholes_, context, request, response, std::move(f));
}

void OptionsService::Stub::async::PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionScholes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>* OptionsService::Stub::PrepareAsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::options::ScholesOptionPricingResponse, ::options::ScholesOptionPricingRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PriceOptionScholes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>* OptionsService::Stub::AsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPriceOptionScholesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OptionsService::Stub::PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::options::HestonOptionPricingResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PriceOptionHeston_, context, request, response);
}

void OptionsService::Stub::async::PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionHeston_, context, request, response, std::move(f));
}

void OptionsService::Stub::async::PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionHeston_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>* OptionsService::Stub::PrepareAsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::options::HestonOptionPricingResponse, ::options::HestonOptionPricingRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PriceOptionHeston_, context, request);
}

::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>* OptionsService::Stub::AsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPriceOptionHestonRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status OptionsService::Stub::PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::options::VarianceGammaOptionPricingResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PriceOptionVarianceGamma_, context, request, response);
}

void OptionsService::Stub::async::PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionVarianceGamma_, context, request, response, std::move(f));
}

void OptionsService::Stub::async::PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PriceOptionVarianceGamma_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>* OptionsService::Stub::PrepareAsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::options::VarianceGammaOptionPricingResponse, ::options::VarianceGammaOptionPricingRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PriceOptionVarianceGamma_, context, request);
}

::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>* OptionsService::Stub::AsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPriceOptionVarianceGammaRaw(context, request, cq);
  result->StartCall();
  return result;
}

OptionsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OptionsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OptionsService::Service, ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](OptionsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::options::ScholesOptionPricingRequest* req,
             ::options::ScholesOptionPricingResponse* resp) {
               return service->PriceOptionScholes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OptionsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OptionsService::Service, ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](OptionsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::options::HestonOptionPricingRequest* req,
             ::options::HestonOptionPricingResponse* resp) {
               return service->PriceOptionHeston(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OptionsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OptionsService::Service, ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](OptionsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::options::VarianceGammaOptionPricingRequest* req,
             ::options::VarianceGammaOptionPricingResponse* resp) {
               return service->PriceOptionVarianceGamma(ctx, req, resp);
             }, this)));
}

OptionsService::Service::~Service() {
}

::grpc::Status OptionsService::Service::PriceOptionScholes(::grpc::ServerContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OptionsService::Service::PriceOptionHeston(::grpc::ServerContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OptionsService::Service::PriceOptionVarianceGamma(::grpc::ServerContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace options

