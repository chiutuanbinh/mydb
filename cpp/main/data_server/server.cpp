#include "server.hpp"
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
using grpc::ServerBuilder;
using grpc::Server;

DServerHandler::DServerHandler(const std::string& dbFile):dataModel_(new DataModel(dbFile)), logger_(Logger::get("DServerHandler"))
{
    
}

Status DServerHandler::Get(ServerContext *context, const EntryKey *request, Entry *response)
{
    std::string value;
    int res = dataModel_->get(request->value(), value);
    logger_.information(Poco::format("Get key %s", request->value()));
    if (res != 0){
        return Status(StatusCode::INTERNAL, "Internal error");
    }
    response->mutable_entrykey()->set_value(request->value());
    response->mutable_entryvalue()->set_value(value);
    return Status::OK;
}

Status DServerHandler::Set(ServerContext *context, const Entry *request, EntryKey *response)
{
    int res  = dataModel_->set(request->entrykey().value(), request->entryvalue().value());
    if (res != 0){
        return Status(StatusCode::INTERNAL, "Internal error");
    }
    response->set_value(request->entrykey().value());
    return Status::OK;
    
}

SyncDataServerEntry::SyncDataServerEntry():handler_("TMP.tkh"), logger_(Logger::get("SyncDataServerEntry")){

}


void SyncDataServerEntry::run(){
    std::string server_address("0.0.0.0:50051");
    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&handler_);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    logger_.information(Poco::format("Server listening on %s", server_address));
    server->Wait();
}

SyncDataServer::SyncDataServer(){
}   

void SyncDataServer::initialize(Application &app){
    runner_.start(entry_);
    runner_.join();
}
void SyncDataServer::uninitialize(){
    
}
