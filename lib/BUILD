load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "fizzbuzz",
    srcs = glob(["*.cc"]),
    hdrs = glob(["*.h"]),
    visibility = [
        "//main:__pkg__",
        "//test:__pkg__",
    ],
)
