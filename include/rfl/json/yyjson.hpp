#ifndef RFL_JSON_YYJSON_HPP_
#define RFL_JSON_YYJSON_HPP_

// Keep yyjson's normal internal-linkage inline functions for header users.
// Module interfaces opt into external inline linkage before including this wrapper.
#if defined(RFL_YYJSON_USE_EXTERNAL_INLINE) && !defined(yyjson_api_inline)
#define yyjson_api_inline yyjson_inline
#define RFL_JSON_UNDEFINE_YYJSON_API_INLINE
#endif

#if __has_include(<yyjson.h>)
#define RFL_YYJSON_HEADER <yyjson.h>
#else
#define RFL_YYJSON_HEADER "../thirdparty/yyjson.h"
#endif

#include RFL_YYJSON_HEADER

#undef RFL_YYJSON_HEADER

#ifdef RFL_JSON_UNDEFINE_YYJSON_API_INLINE
#undef yyjson_api_inline
#undef RFL_JSON_UNDEFINE_YYJSON_API_INLINE
#endif

#endif
