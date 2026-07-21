module;

#define RFL_YYJSON_USE_EXTERNAL_INLINE
#include "rfl/json.hpp"
#undef RFL_YYJSON_USE_EXTERNAL_INLINE

export module rfl.json;

export import rfl;

export namespace rfl::json {
using ::rfl::json::Parser;
using ::rfl::json::Reader;
using ::rfl::json::Writer;
using ::rfl::json::load;
using ::rfl::json::read;
using ::rfl::json::save;
using ::rfl::json::to_schema;
using ::rfl::json::write;
}
