cc_library(
    name = "json",
    hdrs = ["json.h"],
)

cc_test(
    name = "json_test",
    srcs = ["json_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        ":json",
        "@gtest//:main",
    ],
)

cc_test(
    name = "noop_test",
    srcs = ["noop_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
    ],
)
