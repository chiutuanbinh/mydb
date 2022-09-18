

load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = ["-std=c++17"],
    deps = [
        "//lib:tkrzw",
        "//lib:grpc",
        "//lib:poco",
    ]
)

cc_library(
    name = "route_guide_proto",
    srcs = glob(["include/*.cc"]),
    hdrs = glob(["include/*.h"]),
    includes = ["include"],
    copts = ["-std=c++17"],
    deps = [
        "//lib:grpc",
    ]
)

cc_binary(
    name = "server",
    srcs = ["server.cpp"],
    copts = ['-std=c++17'],
    deps = [
        "//lib:grpc",
        ":route_guide_proto"
    ]
)
cc_binary(
    name = "client",
    srcs = ["client.cpp"],
    includes = ["main/include/"],
    copts = ["-std=c++17"],
    deps = [
        "//lib:grpc"
    ]
)