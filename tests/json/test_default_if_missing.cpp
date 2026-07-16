#include <string>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_default_if_missing {

struct Person {
  std::string first_name;
  std::string last_name = "Simpson";
  std::string town;
};

TEST(json, test_default_if_missing) {
  auto homer = rfl::json::read<Person, rfl::DefaultIfMissing>(
                   R"({"first_name":"Homer"})")
                   .value();

  EXPECT_EQ(homer.first_name, "Homer");
  EXPECT_EQ(homer.last_name, "Simpson");
  EXPECT_EQ(homer.town, "");
}
}  // namespace test_default_if_missing
