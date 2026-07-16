#include <string>
#include <vector>

#include "write_and_read.hpp"
#include <optional>

#include <rfl_test/capnproto.hpp>
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_optional_fields {

struct Person {
  std::string first_name;
  std::string last_name = "Simpson";
  std::optional<std::vector<Person>> children;
};

TEST(capnproto, test_optional_fields) {
  const auto bart = Person{.first_name = "Bart"};

  const auto lisa = Person{.first_name = "Lisa"};

  const auto maggie = Person{.first_name = "Maggie"};

  const auto homer =
      Person{.first_name = "Homer",
             .children = std::vector<Person>({bart, lisa, maggie})};

  write_and_read(homer);
}
}  // namespace test_optional_fields
