#include <iostream>
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/client_context.h>
#include <my_db.grpc.pb.h>
#include <my_db.pb.h>

int main(int argc, char **argv)
{
    std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    std::unique_ptr<mydb::MyDB::Stub> stub(mydb::MyDB::NewStub(channel));
    grpc::ClientContext ctx;
    mydb::EntryKey ek;
    mydb::EntryValue resp;
    ek.set_value("KK");
    grpc::Status status = stub->Get(&ctx, ek, &resp);
    std::cout << status.error_code() << ' ' << resp.value() << std::endl;
    mydb::Entry e;
    mydb::EntryValue ev;
    ev.set_value("THIS IS VALUE");
    e.mutable_entrykey()->CopyFrom(ek);
    e.mutable_entryvalue()->CopyFrom(ev);
    mydb::SetResp sr;
    std::cout << "YUP" << std::endl;
    grpc::ClientContext ctx2;
    status = stub->Set(&ctx2, e, &sr);
    std::cout << status.error_code() << ' ' << sr.code() << std::endl;

    grpc::ClientContext ctx3;
    status = stub->Get(&ctx3, ek, &resp);
    std::cout << status.error_code() << ' ' << resp.value() << std::endl;
    return 0;
}