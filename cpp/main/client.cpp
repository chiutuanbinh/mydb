#include <iostream>
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/client_context.h>
#include <my_db.grpc.pb.h>
#include <my_db.pb.h>

void foo(std::unique_ptr<mydb::MyDB::Stub> &stub){
    for (int i = 0; i < 10000; ++i){
        grpc::ClientContext ctx;
        mydb::EntryKey ek;
        ek.set_value(std::to_string(i));
        mydb::EntryValue ev;
        ev.set_value("v" + std::to_string(i));
        mydb::Entry e ;
        e.mutable_entrykey()->CopyFrom(ek);
        e.mutable_entryvalue()->CopyFrom(ev);
        mydb::EntryKey sr;
        grpc::Status status = stub->Set(&ctx, e, &sr);
    }

    for (int i = 0; i < 10000; ++i){
        grpc::ClientContext ctx;
        mydb::EntryKey ek;
        ek.set_value(std::to_string(i));
        mydb::Entry sr;
        grpc::Status status = stub->Get(&ctx, ek, &sr);
        std::cout << sr.entrykey().value() << std::endl;
    }

}

int main(int argc, char **argv)
{
    std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    std::unique_ptr<mydb::MyDB::Stub> stub(mydb::MyDB::NewStub(channel));
    foo(stub);
    return 0;
}