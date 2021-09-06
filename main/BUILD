load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "fizzbuzz",
    hdrs = ["fizzbuzz.h"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
)

cc_library(
    name = "main",
    srcs = ["main.cc"],
    hdrs = ["main.h"],
    copts = COMMON_COPTS,
    deps = [
        ":fizzbuzz",
        "@com_google_fruit//:fruit",
    ],
)

cc_binary(
    name = "cpp-sample",
    srcs = ["cpp-sample.cc"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        ":main",
        "//lib:fizzbuzz",
        "@com_google_fruit//:fruit",
    ],
)

cc_binary(
    name = "cpp-sample-alt",
    srcs = ["cpp-sample-alt.cc"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        ":main",
        "//lib:fizzbuzz_alt",
        "@com_google_fruit//:fruit",
    ],
)
