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

/** @class ModuleConfigV1

  
*/


class ModuleConfigV1 {
public:
  virtual ~ModuleConfigV1();
  /** The module serial number. */
  virtual uint64_t serialNumber() const = 0;
  /** The version number of the module. */
  virtual uint64_t moduleVersion() const = 0;
  /** The firmware version of the module. */
  virtual uint64_t firmwareVersion() const = 0;
};

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

/** @class ConfigV2

  
*/


class ConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
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
  virtual ~ConfigV2();
  /** The number of modules in a physical camera. */
  virtual uint32_t numberOfModules() const = 0;
  /** The number of rows per module. */
  virtual uint32_t numberOfRowsPerModule() const = 0;
  /** The number of columns per module. */
  virtual uint32_t numberOfColumnsPerModule() const = 0;
  /** The bias applied to the sensor in volts. */
  virtual uint32_t biasVoltage() const = 0;
  /** The gain mode set for the camera. */
  virtual Jungfrau::ConfigV2::GainMode gainMode() const = 0;
  /** The camera clock speed setting. */
  virtual Jungfrau::ConfigV2::SpeedMode speedMode() const = 0;
  /** Internal delay from receiving a trigger input until the start of an acquisiton in seconds. */
  virtual double triggerDelay() const = 0;
  /** The exposure time in seconds. */
  virtual double exposureTime() const = 0;
  /** The period between exposures of the camera. In triggered mode this should be smaller than the trigger period. */
  virtual double exposurePeriod() const = 0;
  /** Value of vb_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_ds() const = 0;
  /** Value of vb_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_comp() const = 0;
  /** Value of vb_pixbuf in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_pixbuf() const = 0;
  /** Value of vref_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_ds() const = 0;
  /** Value of vref_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_comp() const = 0;
  /** Value of vref_prech in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_prech() const = 0;
  /** Value of vin_com in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vin_com() const = 0;
  /** Value of vdd_prot in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vdd_prot() const = 0;
  /** Total size in bytes of the Frame object */
  virtual uint32_t frameSize() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV2::GainMode enval);
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV2::SpeedMode enval);

/** @class ConfigV3

  
*/


class ConfigV3 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };
  enum { MaxModulesPerDetector = 8 /**< Defines the maximum number of modules in a Jungfrau detector. */ };
  enum { MaxRowsPerModule = 512 /**< Defines the maximum number of rows in a Jungfrau module. */ };
  enum { MaxColumnsPerModule = 1024 /**< Defines the maximum number of columns in a Jungfrau module. */ };
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
  virtual ~ConfigV3();
  /** The number of modules in a physical camera. */
  virtual uint32_t numberOfModules() const = 0;
  /** The number of rows per module. */
  virtual uint32_t numberOfRowsPerModule() const = 0;
  /** The number of columns per module. */
  virtual uint32_t numberOfColumnsPerModule() const = 0;
  /** The bias applied to the sensor in volts. */
  virtual uint32_t biasVoltage() const = 0;
  /** The gain mode set for the camera. */
  virtual Jungfrau::ConfigV3::GainMode gainMode() const = 0;
  /** The camera clock speed setting. */
  virtual Jungfrau::ConfigV3::SpeedMode speedMode() const = 0;
  /** Internal delay from receiving a trigger input until the start of an acquisiton in seconds. */
  virtual double triggerDelay() const = 0;
  /** The exposure time in seconds. */
  virtual double exposureTime() const = 0;
  /** The period between exposures of the camera. In triggered mode this should be smaller than the trigger period. */
  virtual double exposurePeriod() const = 0;
  /** Value of vb_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_ds() const = 0;
  /** Value of vb_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_comp() const = 0;
  /** Value of vb_pixbuf in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_pixbuf() const = 0;
  /** Value of vref_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_ds() const = 0;
  /** Value of vref_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_comp() const = 0;
  /** Value of vref_prech in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_prech() const = 0;
  /** Value of vin_com in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vin_com() const = 0;
  /** Value of vdd_prot in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vdd_prot() const = 0;
  /** Module specific configuration information for each of the modules in the detector system. */
  virtual const Jungfrau::ModuleConfigV1& moduleConfig(uint32_t i0) const = 0;
  /** Total size in bytes of the Frame object */
  virtual uint32_t frameSize() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by moduleConfig() method. */
  virtual std::vector<int> moduleConfig_shape() const = 0;
};
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV3::GainMode enval);
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV3::SpeedMode enval);

/** @class ConfigV4

  
*/


class ConfigV4 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 4 /**< XTC type version number */ };
  enum { MaxModulesPerDetector = 32 /**< Defines the maximum number of modules in a Jungfrau detector. */ };
  enum { MaxRowsPerModule = 512 /**< Defines the maximum number of rows in a Jungfrau module. */ };
  enum { MaxColumnsPerModule = 1024 /**< Defines the maximum number of columns in a Jungfrau module. */ };
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
  virtual ~ConfigV4();
  /** The number of modules in a physical camera. */
  virtual uint32_t numberOfModules() const = 0;
  /** The number of rows per module. */
  virtual uint32_t numberOfRowsPerModule() const = 0;
  /** The number of columns per module. */
  virtual uint32_t numberOfColumnsPerModule() const = 0;
  /** The bias applied to the sensor in volts. */
  virtual uint32_t biasVoltage() const = 0;
  /** The gain mode set for the camera. */
  virtual Jungfrau::ConfigV4::GainMode gainMode() const = 0;
  /** The camera clock speed setting. */
  virtual Jungfrau::ConfigV4::SpeedMode speedMode() const = 0;
  /** Internal delay from receiving a trigger input until the start of an acquisiton in seconds. */
  virtual double triggerDelay() const = 0;
  /** The exposure time in seconds. */
  virtual double exposureTime() const = 0;
  /** The period between exposures of the camera. In triggered mode this should be smaller than the trigger period. */
  virtual double exposurePeriod() const = 0;
  /** Value of vb_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_ds() const = 0;
  /** Value of vb_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_comp() const = 0;
  /** Value of vb_pixbuf in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vb_pixbuf() const = 0;
  /** Value of vref_ds in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_ds() const = 0;
  /** Value of vref_comp in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_comp() const = 0;
  /** Value of vref_prech in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vref_prech() const = 0;
  /** Value of vin_com in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vin_com() const = 0;
  /** Value of vdd_prot in bits. 12bit on 0 to 2.5V (i.e. 2.5V = 4096). */
  virtual uint16_t vdd_prot() const = 0;
  /** Module specific configuration information for each of the modules in the detector system. */
  virtual const Jungfrau::ModuleConfigV1& moduleConfig(uint32_t i0) const = 0;
  /** Total size in bytes of the Frame object */
  virtual uint32_t frameSize() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by moduleConfig() method. */
  virtual std::vector<int> moduleConfig_shape() const = 0;
};
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV4::GainMode enval);
std::ostream& operator<<(std::ostream& str, Jungfrau::ConfigV4::SpeedMode enval);

/** @class ModuleInfoV1

  
*/


class ModuleInfoV1 {
public:
  virtual ~ModuleInfoV1();
  /** The camera timestamp associated with the detector frame in 100 ns ticks. */
  virtual uint64_t timestamp() const = 0;
  /** The actual exposure time of the image in 100 ns ticks. */
  virtual uint32_t exposureTime() const = 0;
  /** The unique module ID number. */
  virtual uint16_t moduleID() const = 0;
  /** The X coordinate in the complete detector system. */
  virtual uint16_t xCoord() const = 0;
  /** The Y coordinate in the complete detector system. */
  virtual uint16_t yCoord() const = 0;
  /** The Z coordinate in the complete detector system. */
  virtual uint16_t zCoord() const = 0;
};

/** @class ElementV1

  
*/

class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;

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

/** @class ElementV2

  
*/

class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;

class ElementV2 {
public:
  enum { TypeId = Pds::TypeId::Id_JungfrauElement /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~ElementV2();
  /** The internal frame counter number of the detector. */
  virtual uint64_t frameNumber() const = 0;
  /** The LCLS timing tick associated with the detector frame. */
  virtual uint32_t ticks() const = 0;
  /** The LCLS timing fiducial associated with the detector frame. */
  virtual uint32_t fiducials() const = 0;
  /** Information about each of the modules in the detector system. */
  virtual const Jungfrau::ModuleInfoV1& moduleInfo(uint32_t i0) const = 0;
  virtual ndarray<const uint16_t, 3> frame() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by moduleInfo() method. */
  virtual std::vector<int> moduleInfo_shape() const = 0;
};
} // namespace Jungfrau
} // namespace Psana
#endif // PSANA_JUNGFRAU_DDL_H
