#include <iostream>
#include <string>
#include <vector>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "route_guide.grpc.pb.h"

using namespace routeguide;
using grpc::ServerBuilder;
using grpc::Status;
using grpc::ServerContext;
using grpc::Server;
std::string GetFeatureName(const Point& point, const std::vector<Feature>& featureList){
    for (const Feature& f: featureList){
        if (f.location().longitude() == point.longitude() && f.location().latitude() == point.latitude()){
            return f.name();
        }
    }
    return "";
}

class RouteGuideImpl final : public RouteGuide::Service{
public:
    RouteGuideImpl(const std::string& db){
    }
    Status GetFeature(ServerContext* context, const Point* point, Feature* feature) override{
        feature->set_name(GetFeatureName(*point, featureList_));
        feature->mutable_location()->CopyFrom(*point);
        return Status::OK;

    }
private:
    std::vector<Feature> featureList_;
    std::mutex mu_;
    std::vector<RouteNote> receivedNote_;
};


void runServer(const std::string& dbPath){
    std::string server_address("0.0.0.0:50051");
    RouteGuideImpl service(dbPath);
    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    
}

int main(int argc, char** argv) {
}