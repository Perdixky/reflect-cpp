#include <gtest/gtest.h>

#include <array>
#include <optional>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/yaml.hpp>


namespace test_comment_optional_array {

struct VeryCoolYaml {
  rfl::Commented<std::optional<std::array<unsigned, 3>>> optionalArray =
      std::nullopt;
};

TEST(yaml, test_comment_optional_array) {
  const auto yaml = VeryCoolYaml{};
  write_and_read(yaml);
}

}  // namespace test_comment_optional_array
