#include "gtest/gtest.h"
#include "json.h"

using json = nlohmann::json;

TEST(JSONTest, ParseSample) {
  auto j = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
  EXPECT_EQ(j["happy"], true);
}
