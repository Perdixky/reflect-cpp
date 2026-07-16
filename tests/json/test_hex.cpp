#include <string>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_hex {

struct TestStruct {
  rfl::Hex<int> hex;
};

TEST(json, test_hex) {
  const auto test = TestStruct{.hex = 30};
  write_and_read(test, R"({"hex":"1e"})");
}
}  // namespace test_hex
