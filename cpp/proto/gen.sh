../lib/grpc/bin/protoc -I . --grpc_out=../main/include --plugin=protoc-gen-grpc=../lib/grpc/bin/grpc_cpp_plugin route_guide.proto
../lib/grpc/bin/protoc -I . --cpp_out=../main/include route_guide.proto