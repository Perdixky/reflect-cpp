#include <iostream>
#include <string>
#include <vector>

#include "write_and_read.hpp"
#include <rfl_test/rfl.hpp>
#include <rfl_test/yas.hpp>


namespace test_enum {

enum class Color { red, green, blue, yellow };

struct Circle {
  double radius;
  Color color;
};

TEST(yas, test_enum) {
  const auto circle = Circle{.radius = 5.0, .color = Color::green};
  write_and_read(circle);
}
}  // namespace test_enum
