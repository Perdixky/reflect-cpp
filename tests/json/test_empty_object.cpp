#include <string>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_empty_object {

struct Empty {};

TEST(json, test_empty_object) {
  const auto empty = Empty{};

  write_and_read(empty, R"({})");
}
}  // namespace test_empty_object
