load("@rules_cc//cc:defs.bzl", "cc_binary")
load("//:flags.bzl", "COMMON_COPTS")

cc_binary(
    name = "cpp-sample",
    srcs = glob(["*.cc"]),
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = ["//lib:fizzbuzz"],
)
