load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "cpp-sample",
    srcs = glob(["*.cc"]),
    visibility = ["//visibility:public"],
    deps = ["//lib:fizzbuzz"],
)
