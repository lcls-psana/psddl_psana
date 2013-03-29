
// *** Do not edit this file, it is auto-generated ***

#include <cstddef>
#include "psddl_psana/opal1k.ddl.h"
#include <iostream>
namespace Psana {
namespace Opal1k {

ConfigV1::~ConfigV1() {}

std::ostream& operator<<(std::ostream& str, Opal1k::ConfigV1::Depth enval) {
  const char* val;
  switch (enval) {
  case Opal1k::ConfigV1::Eight_bit:
    val = "Eight_bit";
    break;
  case Opal1k::ConfigV1::Ten_bit:
    val = "Ten_bit";
    break;
  case Opal1k::ConfigV1::Twelve_bit:
    val = "Twelve_bit";
    break;
  default:
    return str << "Depth(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Opal1k::ConfigV1::Binning enval) {
  const char* val;
  switch (enval) {
  case Opal1k::ConfigV1::x1:
    val = "x1";
    break;
  case Opal1k::ConfigV1::x2:
    val = "x2";
    break;
  case Opal1k::ConfigV1::x4:
    val = "x4";
    break;
  case Opal1k::ConfigV1::x8:
    val = "x8";
    break;
  default:
    return str << "Binning(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Opal1k::ConfigV1::Mirroring enval) {
  const char* val;
  switch (enval) {
  case Opal1k::ConfigV1::None:
    val = "None";
    break;
  case Opal1k::ConfigV1::HFlip:
    val = "HFlip";
    break;
  case Opal1k::ConfigV1::VFlip:
    val = "VFlip";
    break;
  case Opal1k::ConfigV1::HVFlip:
    val = "HVFlip";
    break;
  default:
    return str << "Mirroring(" << int(enval) << ")";
  }
  return str << val;
}
} // namespace Opal1k
} // namespace Psana
