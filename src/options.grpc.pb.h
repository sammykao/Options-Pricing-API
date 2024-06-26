// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: options.proto
#ifndef GRPC_options_2eproto__INCLUDED
#define GRPC_options_2eproto__INCLUDED

#include "options.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace options {

class OptionsService final {
 public:
  static constexpr char const* service_full_name() {
    return "options.OptionsService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::options::ScholesOptionPricingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>> AsyncPriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>>(AsyncPriceOptionScholesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>> PrepareAsyncPriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>>(PrepareAsyncPriceOptionScholesRaw(context, request, cq));
    }
    virtual ::grpc::Status PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::options::HestonOptionPricingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>> AsyncPriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>>(AsyncPriceOptionHestonRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>> PrepareAsyncPriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>>(PrepareAsyncPriceOptionHestonRaw(context, request, cq));
    }
    virtual ::grpc::Status PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::options::VarianceGammaOptionPricingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>> AsyncPriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>>(AsyncPriceOptionVarianceGammaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>> PrepareAsyncPriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>>(PrepareAsyncPriceOptionVarianceGammaRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>* AsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::ScholesOptionPricingResponse>* PrepareAsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>* AsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::HestonOptionPricingResponse>* PrepareAsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>* AsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::options::VarianceGammaOptionPricingResponse>* PrepareAsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::options::ScholesOptionPricingResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>> AsyncPriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>>(AsyncPriceOptionScholesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>> PrepareAsyncPriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>>(PrepareAsyncPriceOptionScholesRaw(context, request, cq));
    }
    ::grpc::Status PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::options::HestonOptionPricingResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>> AsyncPriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>>(AsyncPriceOptionHestonRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>> PrepareAsyncPriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>>(PrepareAsyncPriceOptionHestonRaw(context, request, cq));
    }
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::options::VarianceGammaOptionPricingResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>> AsyncPriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>>(AsyncPriceOptionVarianceGammaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>> PrepareAsyncPriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>>(PrepareAsyncPriceOptionVarianceGammaRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, std::function<void(::grpc::Status)>) override;
      void PriceOptionScholes(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, std::function<void(::grpc::Status)>) override;
      void PriceOptionHeston(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, std::function<void(::grpc::Status)>) override;
      void PriceOptionVarianceGamma(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>* AsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::options::ScholesOptionPricingResponse>* PrepareAsyncPriceOptionScholesRaw(::grpc::ClientContext* context, const ::options::ScholesOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>* AsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::options::HestonOptionPricingResponse>* PrepareAsyncPriceOptionHestonRaw(::grpc::ClientContext* context, const ::options::HestonOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>* AsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::options::VarianceGammaOptionPricingResponse>* PrepareAsyncPriceOptionVarianceGammaRaw(::grpc::ClientContext* context, const ::options::VarianceGammaOptionPricingRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_PriceOptionScholes_;
    const ::grpc::internal::RpcMethod rpcmethod_PriceOptionHeston_;
    const ::grpc::internal::RpcMethod rpcmethod_PriceOptionVarianceGamma_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status PriceOptionScholes(::grpc::ServerContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response);
    virtual ::grpc::Status PriceOptionHeston(::grpc::ServerContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response);
    virtual ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionScholes(::grpc::ServerContext* context, ::options::ScholesOptionPricingRequest* request, ::grpc::ServerAsyncResponseWriter< ::options::ScholesOptionPricingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionHeston(::grpc::ServerContext* context, ::options::HestonOptionPricingRequest* request, ::grpc::ServerAsyncResponseWriter< ::options::HestonOptionPricingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionVarianceGamma(::grpc::ServerContext* context, ::options::VarianceGammaOptionPricingRequest* request, ::grpc::ServerAsyncResponseWriter< ::options::VarianceGammaOptionPricingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_PriceOptionScholes<WithAsyncMethod_PriceOptionHeston<WithAsyncMethod_PriceOptionVarianceGamma<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::options::ScholesOptionPricingRequest* request, ::options::ScholesOptionPricingResponse* response) { return this->PriceOptionScholes(context, request, response); }));}
    void SetMessageAllocatorFor_PriceOptionScholes(
        ::grpc::MessageAllocator< ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionScholes(
      ::grpc::CallbackServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::options::HestonOptionPricingRequest* request, ::options::HestonOptionPricingResponse* response) { return this->PriceOptionHeston(context, request, response); }));}
    void SetMessageAllocatorFor_PriceOptionHeston(
        ::grpc::MessageAllocator< ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionHeston(
      ::grpc::CallbackServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::options::VarianceGammaOptionPricingRequest* request, ::options::VarianceGammaOptionPricingResponse* response) { return this->PriceOptionVarianceGamma(context, request, response); }));}
    void SetMessageAllocatorFor_PriceOptionVarianceGamma(
        ::grpc::MessageAllocator< ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionVarianceGamma(
      ::grpc::CallbackServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_PriceOptionScholes<WithCallbackMethod_PriceOptionHeston<WithCallbackMethod_PriceOptionVarianceGamma<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionScholes(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionHeston(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPriceOptionVarianceGamma(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PriceOptionScholes(context, request, response); }));
    }
    ~WithRawCallbackMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionScholes(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PriceOptionHeston(context, request, response); }));
    }
    ~WithRawCallbackMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionHeston(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PriceOptionVarianceGamma(context, request, response); }));
    }
    ~WithRawCallbackMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PriceOptionVarianceGamma(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PriceOptionScholes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PriceOptionScholes() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::options::ScholesOptionPricingRequest, ::options::ScholesOptionPricingResponse>* streamer) {
                       return this->StreamedPriceOptionScholes(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PriceOptionScholes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PriceOptionScholes(::grpc::ServerContext* /*context*/, const ::options::ScholesOptionPricingRequest* /*request*/, ::options::ScholesOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPriceOptionScholes(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::options::ScholesOptionPricingRequest,::options::ScholesOptionPricingResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PriceOptionHeston : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PriceOptionHeston() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::options::HestonOptionPricingRequest, ::options::HestonOptionPricingResponse>* streamer) {
                       return this->StreamedPriceOptionHeston(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PriceOptionHeston() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PriceOptionHeston(::grpc::ServerContext* /*context*/, const ::options::HestonOptionPricingRequest* /*request*/, ::options::HestonOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPriceOptionHeston(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::options::HestonOptionPricingRequest,::options::HestonOptionPricingResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PriceOptionVarianceGamma : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PriceOptionVarianceGamma() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::options::VarianceGammaOptionPricingRequest, ::options::VarianceGammaOptionPricingResponse>* streamer) {
                       return this->StreamedPriceOptionVarianceGamma(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PriceOptionVarianceGamma() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PriceOptionVarianceGamma(::grpc::ServerContext* /*context*/, const ::options::VarianceGammaOptionPricingRequest* /*request*/, ::options::VarianceGammaOptionPricingResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPriceOptionVarianceGamma(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::options::VarianceGammaOptionPricingRequest,::options::VarianceGammaOptionPricingResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_PriceOptionScholes<WithStreamedUnaryMethod_PriceOptionHeston<WithStreamedUnaryMethod_PriceOptionVarianceGamma<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_PriceOptionScholes<WithStreamedUnaryMethod_PriceOptionHeston<WithStreamedUnaryMethod_PriceOptionVarianceGamma<Service > > > StreamedService;
};

}  // namespace options


#endif  // GRPC_options_2eproto__INCLUDED
