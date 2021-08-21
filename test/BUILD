load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "fizzbuzz-test",
    size = "small",
    srcs = ["fizzbuzz-test.cc"],
    deps = [
        "//lib:fizzbuzz",
        "@com_google_googletest//:gtest_main",
    ],
)
