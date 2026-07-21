#ifndef RFL_INTERNAL_GETFAKEOBJECT_HPP_
#define RFL_INTERNAL_GETFAKEOBJECT_HPP_

namespace rfl {
namespace internal {

#if __GNUC__
#ifndef __clang__
#pragma GCC system_header
#endif
#endif

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 7631)
#endif

template <class T>
union wrapper {
  char dummy;
  T value;

  constexpr wrapper() noexcept : dummy() {}

  constexpr ~wrapper() noexcept {}

  static const wrapper<T> report_if_you_see_a_link_error_with_this_object;
};

template <class T>
inline constexpr wrapper<T>
    wrapper<T>::report_if_you_see_a_link_error_with_this_object{};

template <class T>
consteval const T& get_fake_object() noexcept {
  return wrapper<T>::report_if_you_see_a_link_error_with_this_object.value;
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif

}  // namespace internal
}  // namespace rfl

#endif
