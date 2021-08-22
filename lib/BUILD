load("@rules_cc//cc:defs.bzl", "cc_library")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "fizzbuzz",
    srcs = glob(["*.cc"]),
    hdrs = glob(["*.h"]),
    copts = COMMON_COPTS,
    visibility = [
        "//main:__pkg__",
        "//test:__pkg__",
    ],
)
