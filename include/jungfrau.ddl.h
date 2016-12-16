#ifndef PSANA_JUNGFRAU_DDL_H
#define PSANA_JUNGFRAU_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Jungfrau {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum GainMode {
    Normal = 0,
    FixedGain1 = 1,
    FixedGain2 = 2,
    ForcedGain1 = 3,
    ForcedGain2 = 4,
    HighGain0 = 5,
  };
  enum SpeedMode {
    Quarter = 0,
    Half = 1,
  };
  virtual ~ConfigV1();
  /** The number of modules in a physical camera. */
  virtual uint32_t numberOfModules() const = 0;
  /** The number of rows per module. */
  virtual uint32_t numberOfRowsPerModule() const = 0;
  /** The number of columns per module. */
  virtual uint32_t numberOfColumnsPerModule() const = 0;
  /** The bias applied to the sensor in volts. */
  virtual uint32_t biasVoltage() const = 0;
  /** The gain mode set for the camera. */
  virtual Jungfrau::ConfigV1::GainMode gainMode() const = 0;
  /** The camera clock speed setting. */
  virtual Jungfrau::ConfigV1::SpeedMode speedMode() const = 0;
  /** Internal delay from receiving a trigger input until the start of an acquisiton in seconds. */
  virtual double triggerDelay() const = 0;
  /** The exposure time in seconds. */
  virtual double exposureTime() const = 0;
  /** Total size in bytes of the Frame object */
  virtual uint32_t frameSize() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV1::GainMode enval);
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV1::SpeedMode enval);

/** @class ElementV1

  
*/

class ConfigV1;

class ElementV1 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauElement /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ElementV1();
  /** The internal frame counter number of the detector. */
  virtual uint32_t frameNumber() const = 0;
  /** The LCLS timing tick associated with the detector frame. */
  virtual uint32_t ticks() const = 0;
  /** The LCLS timing fiducial associated with the detector frame. */
  virtual uint32_t fiducials() const = 0;
  virtual ndarray<const uint16_t, 3> frame() const = 0;
};
} // namespace Jungfrau
} // namespace Psana
#endif // PSANA_JUNGFRAU_DDL_H