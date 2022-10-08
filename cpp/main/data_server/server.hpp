#include <iostream>
#include <string>

#include <Poco/Util/Subsystem.h>
#include <Poco/Runnable.h>
#include <Poco/Thread.h>
#include <Poco/Logger.h>
#include <tkrzw_dbm_hash.h>
#include "my_db.grpc.pb.h"
#include "my_db.pb.h"

using Poco::Runnable;
using Poco::Thread;
using Poco::Util::Subsystem;
using Poco::Util::Application;
using Poco::Logger;
using std::string;
using grpc::Status;
using grpc::StatusCode;
using grpc::ServerContext;
using mydb::MyDB;
using mydb::Entry;
using mydb::EntryKey;
using mydb::EntryValue;
using mydb::SetResp;

class DServerHandler final : public MyDB::Service
{
public:
    DServerHandler(const std::string& dbFile);
    Status Get(ServerContext *context, const EntryKey *request, EntryValue *response) override;
    Status Set(ServerContext *context, const Entry *request, SetResp *response) override;
private:
    tkrzw::HashDBM dbm_;
};

class SyncDataServerEntry : public Runnable
{
public:
    SyncDataServerEntry();
    virtual void run();

private:
    DServerHandler handler_;
    Logger& logger_;
};

class SyncDataServer final : public Subsystem
{
public:
    SyncDataServer();
    ~SyncDataServer();
    void initialize(Application &app) override;
    void uninitialize() override;
    const char* name() const  override {
        return "SyncDataServer";
    };
private:
    SyncDataServerEntry entry_;
    Thread runner_;
    
};