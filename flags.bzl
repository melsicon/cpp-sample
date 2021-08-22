"""Common Compiler Flags"""

COMMON_COPTS = select({
    "@bazel_tools//src/conditions:windows_msvc": ["/std:c++17"],
    "//conditions:default": ["-std=c++17"],
})
