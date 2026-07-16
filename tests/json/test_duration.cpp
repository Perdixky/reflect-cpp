#include <chrono>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_duration {

struct TestStruct {
  std::chrono::seconds duration;
};

TEST(json, test_duration) {
  const auto test = TestStruct{.duration = std::chrono::seconds(10)};
  write_and_read(test, R"({"duration":{"count":10,"unit":"seconds"}})");
}
}  // namespace test_duration
