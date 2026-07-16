#include <string>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_binary {

struct TestStruct {
  rfl::Binary<uint8_t> binary;
};

TEST(json, test_binary) {
  const auto test = TestStruct{.binary = 30};
  write_and_read(test, R"({"binary":"00011110"})");
}
}  // namespace test_binary
