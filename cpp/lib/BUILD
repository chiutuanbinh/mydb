
load("@rules_cc//cc:defs.bzl", "cc_library")
cc_library(
    name = "tkrzw",
    srcs = ["tkrzw/lib/libtkrzw.a"],
    hdrs = glob(["tkrzw/include/*"]),
    includes = ["tkrzw/include/"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "poco",
    srcs = glob(["poco/lib/*"]),
    hdrs = glob(["poco/include/*"],exclude_directories=0),
    includes = ["poco/include"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "grpc",
    srcs = glob(["grpc/lib/*"]),
    hdrs = glob(["grpc/include/*"],exclude_directories=0),
    includes = ["grpc/include"],
    visibility = ["//visibility:public"],
)