../lib/grpc/bin/protoc -I . --grpc_out=../main/proto --plugin=protoc-gen-grpc=../lib/grpc/bin/grpc_cpp_plugin my_db.proto
../lib/grpc/bin/protoc -I . --cpp_out=../main/proto my_db.proto