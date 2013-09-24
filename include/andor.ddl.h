#ifndef PSANA_ANDOR_DDL_H
#define PSANA_ANDOR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Andor {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_AndorConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum EnumFanMode {
    ENUM_FAN_FULL = 0,
    ENUM_FAN_LOW = 1,
    ENUM_FAN_OFF = 2,
    ENUM_FAN_ACQOFF = 3,
    ENUM_FAN_NUM = 4,
  };
  virtual ~ConfigV1();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual Andor::ConfigV1::EnumFanMode fanMode() const = 0;
  virtual uint8_t baselineClamp() const = 0;
  virtual uint8_t highCapacity() const = 0;
  virtual uint8_t gainIndex() const = 0;
  virtual uint16_t readoutSpeedIndex() const = 0;
  virtual uint16_t exposureEventCode() const = 0;
  virtual uint32_t numDelayShots() const = 0;
  /** Total size in bytes of the Frame object */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};
std::ostream& operator<<(std::ostream& str, Andor::ConfigV1::EnumFanMode enval);

/** @class FrameV1

  
*/

class ConfigV1;

class FrameV1 {
public:
  enum { TypeId = Pds::TypeId::Id_AndorFrame /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~FrameV1();
  virtual uint32_t shotIdStart() const = 0;
  virtual float readoutTime() const = 0;
  virtual float temperature() const = 0;
  virtual ndarray<const uint16_t, 2> data() const = 0;
};
} // namespace Andor
} // namespace Psana
#endif // PSANA_ANDOR_DDL_H
