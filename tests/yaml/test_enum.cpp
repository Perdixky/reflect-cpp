#include <cassert>

#include "write_and_read.hpp"
#include <rfl_test/yaml.hpp>
#include <rfl_test/rfl.hpp>


namespace test_enum {

enum class Color { red, green, blue, yellow };

struct Circle {
  float radius;
  Color color;
};

TEST(yaml, test_enum) {
  const auto circle = Circle{.radius = 2.0, .color = Color::green};

  write_and_read(circle);
}

}  // namespace test_enum
