
// *** Do not edit this file, it is auto-generated ***

#include <cstddef>
#include "psddl_psana/archon.ddl.h"
#include <iostream>
namespace Psana {
namespace Archon {

ConfigV1::~ConfigV1() {}

std::ostream& operator<<(std::ostream& str, Archon::ConfigV1::ReadoutMode enval) {
  const char* val;
  switch (enval) {
  case Archon::ConfigV1::Single:
    val = "Single";
    break;
  case Archon::ConfigV1::Continuous:
    val = "Continuous";
    break;
  case Archon::ConfigV1::Triggered:
    val = "Triggered";
    break;
  default:
    return str << "ReadoutMode(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace Archon
} // namespace Psana
