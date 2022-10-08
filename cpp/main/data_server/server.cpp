#include "server.hpp"
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
using grpc::ServerBuilder;
using grpc::Server;

DServerHandler::DServerHandler(const std::string& dbFile)
{
    dbm_.Open(dbFile, true);
}

Status DServerHandler::Get(ServerContext *context, const EntryKey *request, EntryValue *response)
{
    std::string value;
    tkrzw::Status status = dbm_.Get(request->value(), &value);
    response->set_value(value);
    switch (status.GetCode())
    {
    case tkrzw::Status::Code::NOT_FOUND_ERROR:
    {
        Status gStatus(StatusCode::NOT_FOUND, status.GetMessage());
        return gStatus;
    }

    default:
        return Status::OK;
    }
}

Status DServerHandler::Set(ServerContext *context, const Entry *request, SetResp *response)
{
    tkrzw::Status status = dbm_.Set(request->entrykey().value(), request->entryvalue().value());
    if (status.IsOK())
    {
        return Status::OK;
    }
    Status gStatus(StatusCode::INTERNAL, status.GetMessage());
    return gStatus;
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
SyncDataServer::~SyncDataServer(){}

void SyncDataServer::initialize(Application &app){
    runner_.start(entry_);
    runner_.join();
}
void SyncDataServer::uninitialize(){
    
}
