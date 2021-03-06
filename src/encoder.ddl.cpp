
// *** Do not edit this file, it is auto-generated ***

#include <cstddef>
#include "psddl_psana/encoder.ddl.h"
#include <iostream>
namespace Psana {
namespace Encoder {

ConfigV1::~ConfigV1() {}

std::ostream& operator<<(std::ostream& str, Encoder::ConfigV1::count_mode_type enval) {
  const char* val;
  switch (enval) {
  case Encoder::ConfigV1::WRAP_FULL:
    val = "WRAP_FULL";
    break;
  case Encoder::ConfigV1::LIMIT:
    val = "LIMIT";
    break;
  case Encoder::ConfigV1::HALT:
    val = "HALT";
    break;
  case Encoder::ConfigV1::WRAP_PRESET:
    val = "WRAP_PRESET";
    break;
  case Encoder::ConfigV1::COUNT_END:
    val = "COUNT_END";
    break;
  default:
    return str << "count_mode_type(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Encoder::ConfigV1::quad_mode enval) {
  const char* val;
  switch (enval) {
  case Encoder::ConfigV1::CLOCK_DIR:
    val = "CLOCK_DIR";
    break;
  case Encoder::ConfigV1::X1:
    val = "X1";
    break;
  case Encoder::ConfigV1::X2:
    val = "X2";
    break;
  case Encoder::ConfigV1::X4:
    val = "X4";
    break;
  case Encoder::ConfigV1::QUAD_END:
    val = "QUAD_END";
    break;
  default:
    return str << "quad_mode(" << int(enval) << ")";
  }
  return str << val;
}

ConfigV2::~ConfigV2() {}

std::ostream& operator<<(std::ostream& str, Encoder::ConfigV2::count_mode_type enval) {
  const char* val;
  switch (enval) {
  case Encoder::ConfigV2::WRAP_FULL:
    val = "WRAP_FULL";
    break;
  case Encoder::ConfigV2::LIMIT:
    val = "LIMIT";
    break;
  case Encoder::ConfigV2::HALT:
    val = "HALT";
    break;
  case Encoder::ConfigV2::WRAP_PRESET:
    val = "WRAP_PRESET";
    break;
  case Encoder::ConfigV2::COUNT_END:
    val = "COUNT_END";
    break;
  default:
    return str << "count_mode_type(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Encoder::ConfigV2::quad_mode enval) {
  const char* val;
  switch (enval) {
  case Encoder::ConfigV2::CLOCK_DIR:
    val = "CLOCK_DIR";
    break;
  case Encoder::ConfigV2::X1:
    val = "X1";
    break;
  case Encoder::ConfigV2::X2:
    val = "X2";
    break;
  case Encoder::ConfigV2::X4:
    val = "X4";
    break;
  case Encoder::ConfigV2::QUAD_END:
    val = "QUAD_END";
    break;
  default:
    return str << "quad_mode(" << int(enval) << ")";
  }
  return str << val;
}

DataV1::~DataV1() {}


DataV2::~DataV2() {}

} // namespace Encoder
} // namespace Psana
