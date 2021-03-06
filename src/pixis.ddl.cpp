
// *** Do not edit this file, it is auto-generated ***

#include <cstddef>
#include "psddl_psana/pixis.ddl.h"
#include <iostream>
namespace Psana {
namespace Pixis {

ConfigV1::~ConfigV1() {}

std::ostream& operator<<(std::ostream& str, Pixis::ConfigV1::GainMode enval) {
  const char* val;
  switch (enval) {
  case Pixis::ConfigV1::Low:
    val = "Low";
    break;
  case Pixis::ConfigV1::Medium:
    val = "Medium";
    break;
  case Pixis::ConfigV1::High:
    val = "High";
    break;
  default:
    return str << "GainMode(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Pixis::ConfigV1::AdcMode enval) {
  const char* val;
  switch (enval) {
  case Pixis::ConfigV1::LowNoise:
    val = "LowNoise";
    break;
  case Pixis::ConfigV1::HighCapacity:
    val = "HighCapacity";
    break;
  default:
    return str << "AdcMode(" << int(enval) << ")";
  }
  return str << val;
}
std::ostream& operator<<(std::ostream& str, Pixis::ConfigV1::TriggerMode enval) {
  const char* val;
  switch (enval) {
  case Pixis::ConfigV1::Software:
    val = "Software";
    break;
  case Pixis::ConfigV1::External:
    val = "External";
    break;
  case Pixis::ConfigV1::ExternalWithCleaning:
    val = "ExternalWithCleaning";
    break;
  default:
    return str << "TriggerMode(" << int(enval) << ")";
  }
  return str << val;
}

FrameV1::~FrameV1() {}

} // namespace Pixis
} // namespace Psana
