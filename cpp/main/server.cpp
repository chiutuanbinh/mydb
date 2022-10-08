#include <iostream>
#include <string>
#include <vector>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "Poco/Util/ServerApplication.h"
#include "Poco/AutoPtr.h"
#include "Poco/Util/IniFileConfiguration.h"
#include "tkrzw_dbm_hash.h"
#include "my_db.grpc.pb.h"
#include "my_db.pb.h"
#include "data_server/server.hpp"
using namespace mydb;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::Status;
using grpc::StatusCode;
using Poco::Util::Application;
using Poco::Util::Subsystem;

class MyApplication : public Poco::Util::ServerApplication
{
public:
    MyApplication() {}
    void initialize(Application &self) override
    {
        // logger().information(config_.getName());
        SyncDataServer *sds = new SyncDataServer();
        self.addSubsystem(sds);
        //TODO: RUN the GSyncServer in a thread to keep it from blocking the main thread
        Application::initialize(self);
        
    }
    void uninitialize() override
    {
    }
    void reinitialize(Application &self) override
    {
    }

private:
};

POCO_SERVER_MAIN(MyApplication)