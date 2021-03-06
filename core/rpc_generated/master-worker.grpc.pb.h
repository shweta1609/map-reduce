// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: master-worker.proto
#ifndef GRPC_master_2dworker_2eproto__INCLUDED
#define GRPC_master_2dworker_2eproto__INCLUDED

#include "master-worker.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace masterworker {

// The greeting service definition.
class Worker final {
 public:
  static constexpr char const* service_full_name() {
    return "masterworker.Worker";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status StartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::masterworker::Filename* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>> AsyncStartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>>(AsyncStartMapperRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>> PrepareAsyncStartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>>(PrepareAsyncStartMapperRaw(context, request, cq));
    }
    virtual ::grpc::Status StartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::masterworker::Filename* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>> AsyncStartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>>(AsyncStartReducerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>> PrepareAsyncStartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>>(PrepareAsyncStartReducerRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void StartMapper(::grpc::ClientContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response, std::function<void(::grpc::Status)>) = 0;
      virtual void StartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>* AsyncStartMapperRaw(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>* PrepareAsyncStartMapperRaw(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>* AsyncStartReducerRaw(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::masterworker::Filename>* PrepareAsyncStartReducerRaw(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status StartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::masterworker::Filename* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>> AsyncStartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>>(AsyncStartMapperRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>> PrepareAsyncStartMapper(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>>(PrepareAsyncStartMapperRaw(context, request, cq));
    }
    ::grpc::Status StartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::masterworker::Filename* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>> AsyncStartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>>(AsyncStartReducerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>> PrepareAsyncStartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>>(PrepareAsyncStartReducerRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void StartMapper(::grpc::ClientContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response, std::function<void(::grpc::Status)>) override;
      void StartReducer(::grpc::ClientContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>* AsyncStartMapperRaw(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>* PrepareAsyncStartMapperRaw(::grpc::ClientContext* context, const ::masterworker::Filename& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>* AsyncStartReducerRaw(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::masterworker::Filename>* PrepareAsyncStartReducerRaw(::grpc::ClientContext* context, const ::masterworker::Filenames& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_StartMapper_;
    const ::grpc::internal::RpcMethod rpcmethod_StartReducer_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response);
    virtual ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StartMapper() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartMapper(::grpc::ServerContext* context, ::masterworker::Filename* request, ::grpc::ServerAsyncResponseWriter< ::masterworker::Filename>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StartReducer() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartReducer(::grpc::ServerContext* context, ::masterworker::Filenames* request, ::grpc::ServerAsyncResponseWriter< ::masterworker::Filename>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_StartMapper<WithAsyncMethod_StartReducer<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_StartMapper() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::masterworker::Filename, ::masterworker::Filename>(
          [this](::grpc::ServerContext* context,
                 const ::masterworker::Filename* request,
                 ::masterworker::Filename* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->StartMapper(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_StartReducer() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::masterworker::Filenames, ::masterworker::Filename>(
          [this](::grpc::ServerContext* context,
                 const ::masterworker::Filenames* request,
                 ::masterworker::Filename* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->StartReducer(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_StartMapper<ExperimentalWithCallbackMethod_StartReducer<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StartMapper() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StartReducer() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_StartMapper() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartMapper(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_StartReducer() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStartReducer(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_StartMapper() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->StartMapper(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartMapper(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_StartReducer() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->StartReducer(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void StartReducer(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_StartMapper : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_StartMapper() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::masterworker::Filename, ::masterworker::Filename>(std::bind(&WithStreamedUnaryMethod_StartMapper<BaseClass>::StreamedStartMapper, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_StartMapper() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status StartMapper(::grpc::ServerContext* context, const ::masterworker::Filename* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStartMapper(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::masterworker::Filename,::masterworker::Filename>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_StartReducer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_StartReducer() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::masterworker::Filenames, ::masterworker::Filename>(std::bind(&WithStreamedUnaryMethod_StartReducer<BaseClass>::StreamedStartReducer, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_StartReducer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status StartReducer(::grpc::ServerContext* context, const ::masterworker::Filenames* request, ::masterworker::Filename* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStartReducer(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::masterworker::Filenames,::masterworker::Filename>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_StartMapper<WithStreamedUnaryMethod_StartReducer<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_StartMapper<WithStreamedUnaryMethod_StartReducer<Service > > StreamedService;
};

}  // namespace masterworker


#endif  // GRPC_master_2dworker_2eproto__INCLUDED
