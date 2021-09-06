load("@rules_cc//cc:defs.bzl", "cc_test")
load("//:flags.bzl", "COMMON_COPTS")

cc_test(
    name = "fizzbuzz-test",
    size = "small",
    srcs = ["fizzbuzz-test.cc"],
    copts = COMMON_COPTS,
    deps = [
        "//lib:fizzbuzz",
        "//lib:fizzbuzz_alt",
        "@com_google_googletest//:gtest_main",
    ],
)
