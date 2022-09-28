#include <iostream>
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/client_context.h>
#include <my_db.grpc.pb.h>
#include <my_db.pb.h>

int main(int argc, char** argv) {
  std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
  std::unique_ptr<mydb::MyDB::Stub> stub(mydb::MyDB::NewStub(channel));
  grpc::ClientContext ctx;
  mydb::EntryKey ek;
  mydb::EntryValue resp;
  ek.set_v("KK");
  grpc::Status status = stub->Get(&ctx, ek, &resp);
  std::cout << status.error_code() << ' ' << resp.v() << std::endl;
  return 0;
}