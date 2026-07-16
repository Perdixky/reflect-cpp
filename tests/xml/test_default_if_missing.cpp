#include <cassert>
#include <string>
#include <vector>

#include "write_and_read.hpp"
#include <rfl_test/xml.hpp>
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_default_if_missing {

struct Person {
  std::string name;
  std::vector<std::string> children;
};

TEST(xml, test_default_if_missing) {
  const auto homer =
      Person{.name = "Homer",
             .children = std::vector<std::string>({"Bart", "Lisa", "Maggie"})};

  write_and_read<"Person", rfl::DefaultIfMissing>(homer);
}
}  // namespace test_default_if_missing
