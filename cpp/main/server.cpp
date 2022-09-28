#include <iostream>
#include <string>
#include <vector>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "tkrzw_dbm_hash.h"
#include "my_db.grpc.pb.h"
#include "my_db.pb.h"
using namespace mydb;
using grpc::ServerBuilder;
using grpc::Status;
using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::Server;

class DBM{
public:
    DBM(std::string &db_file){
        dbm_.Open(db_file, true).OrDie();
    }
    int set(std::string &k, std::string &v){
        tkrzw::Status status = dbm_.Set(k, v);
        if (!status.IsOK()){
            return -1;
        }
        return 0;
    }
    std::string get(std::string &k){
        std::string v = dbm_.GetSimple(k);
        return v;
    }
    ~DBM(){
        dbm_.Close().OrDie();
    }
private:
    tkrzw::HashDBM dbm_;

};

class MyDBImpl final : public MyDB::Service{
public:
    MyDBImpl(std::string &dbFile): dbm_(dbFile){

    }
    Status Get(ServerContext* context, const EntryKey* request, EntryValue* response) override{
        response->set_v("xyz");
        std::cout << request->v() << std::endl;
        return Status::OK;
    }

private:
    DBM dbm_;

};


void runServer(const std::string& dbPath){
    std::string server_address("0.0.0.0:50051");
    std::string dbFile="TMP.tkh";
    MyDBImpl service(dbFile);
    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main(int argc, char** argv) {
    runServer("xyz");
}