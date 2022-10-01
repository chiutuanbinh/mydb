#include <iostream>
#include <string>
#include <vector>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "tkrzw_dbm_hash.h"
#include "my_db.grpc.pb.h"
#include "my_db.pb.h"
using namespace mydb;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::Status;
using grpc::StatusCode;

class MyDBImpl final : public MyDB::Service
{
public:
    MyDBImpl(std::string &dbFile)
    {
        dbm_.Open(dbFile, true);
    }
    Status Get(ServerContext *context, const EntryKey *request, EntryValue *response) override
    {
        std::string value;
        tkrzw::Status status = dbm_.Get(request->value(), &value);
        std::cout << status.GetCode() << std::endl;
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

    Status Set(ServerContext *context, const Entry *request, SetResp *response) override
    {
        tkrzw::Status status = dbm_.Set(request->entrykey().value(), request->entryvalue().value());
        if (status.IsOK())
        {
            return Status::OK;
        }
        Status gStatus(StatusCode::INTERNAL, status.GetMessage());
        return gStatus;
    }

private:
    tkrzw::HashDBM dbm_;
};

void runServer(const std::string &dbPath)
{
    std::string server_address("0.0.0.0:50051");
    std::string dbFile = "TMP.tkh";
    MyDBImpl service(dbFile);
    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}


int main(int argc, char **argv)
{
    runServer("xyz");
}