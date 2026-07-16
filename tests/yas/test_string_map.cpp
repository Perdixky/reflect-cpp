#include <map>
#include <memory>
#include <string>

#include "write_and_read.hpp"
#include <rfl_test/yas.hpp>
#include <rfl_test/rfl.hpp>
#include <rfl_test/json.hpp>


namespace test_string_map {

struct RootStruct {
  std::map<std::string, std::unique_ptr<std::string>> root;
};

TEST(yas, test_string_map) {
  RootStruct homer;
  homer.root.insert(
      std::make_pair("firstName", std::make_unique<std::string>("Homer")));
  homer.root.insert(
      std::make_pair("lastName", std::make_unique<std::string>("Simpson")));

  write_and_read(homer);
}
}  // namespace test_string_map
