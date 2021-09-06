load("@rules_cc//cc:defs.bzl", "cc_library")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "fizzbuzz",
    srcs = ["fizzbuzz.cc"],
    hdrs = ["fizzbuzz.h"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        "//main:fizzbuzz",
        "@com_google_absl//absl/strings",
        "@com_google_fruit//:fruit",
    ],
)

cc_library(
    name = "fizzbuzz_alt",
    srcs = ["fizzbuzz-alt.cc"],
    hdrs = ["fizzbuzz-alt.h"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        "//main:fizzbuzz",
        "@com_google_absl//absl/strings",
        "@com_google_fruit//:fruit",
    ],
)
