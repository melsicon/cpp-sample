workspace(name = "de_melsicon_cpp_sample")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_absl",
    sha256 = "e95b919f4a4ceeaba8119eee2f2db2b2013feb248dd8187a87e12c08e9d9101d",
    strip_prefix = "abseil-cpp-6039dd95bb62e6072731929279e917c7be39369f",
    urls = ["https://github.com/abseil/abseil-cpp/archive/6039dd95bb62e6072731929279e917c7be39369f.tar.gz"],
)

http_archive(
    name = "com_google_googletest",
    sha256 = "4a50c2c3e8d8d332fa82b96390a9bfc7ab0e2a900dd7e301868c3886270c1cc8",
    strip_prefix = "googletest-955c7f837efad184ec63e771c42542d37545eaef",
    urls = ["https://github.com/google/googletest/archive/955c7f837efad184ec63e771c42542d37545eaef.tar.gz"],
)

http_archive(
    name = "com_github_nelhage_rules_boost",
    sha256 = "2d0b2eef7137730dbbb180397fe9c3d601f8f25950c43222cb3ee85256a21869",
    strip_prefix = "rules_boost-fce83babe3f6287bccb45d2df013a309fa3194b8",
    urls = ["https://github.com/nelhage/rules_boost/archive/fce83babe3f6287bccb45d2df013a309fa3194b8.tar.gz"],
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()

http_archive(
    name = "com_google_fruit",
    sha256 = "b35b9380f3affe0b3326f387505fa80f3584b0d0a270362df1f4ca9c39094eb5",
    strip_prefix = "fruit-3.6.0",
    urls = ["https://github.com/google/fruit/archive/refs/tags/v3.6.0.tar.gz"],
)
