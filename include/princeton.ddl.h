#ifndef PSANA_PRINCETON_DDL_H
#define PSANA_PRINCETON_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Princeton {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual uint32_t readoutSpeedIndex() const = 0;
  virtual uint16_t readoutEventCode() const = 0;
  virtual uint16_t delayMode() const = 0;
  /** Total size in bytes of the Frame object including header and pixel data, 
            this returns the size of FrameV1 object, do not use this config type with FrameV2 */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};

/** @class ConfigV2

  
*/


class ConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~ConfigV2();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual uint16_t gainIndex() const = 0;
  virtual uint16_t readoutSpeedIndex() const = 0;
  virtual uint16_t readoutEventCode() const = 0;
  virtual uint16_t delayMode() const = 0;
  /** Total size in bytes of the Frame object including header and pixel data, 
            this returns the size of FrameV1 object, do not use this config type with FrameV2 */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};

/** @class ConfigV3

  
*/


class ConfigV3 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };
  virtual ~ConfigV3();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual uint8_t gainIndex() const = 0;
  virtual uint8_t readoutSpeedIndex() const = 0;
  virtual uint16_t exposureEventCode() const = 0;
  virtual uint32_t numDelayShots() const = 0;
  /** Total size in bytes of the Frame object including header and pixel data, 
            this returns the size of FrameV1 object, do not use this config type with FrameV2 */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};

/** @class ConfigV4

  
*/


class ConfigV4 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 4 /**< XTC type version number */ };
  virtual ~ConfigV4();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual uint32_t maskedHeight() const = 0;
  virtual uint32_t kineticHeight() const = 0;
  virtual float vsSpeed() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual uint8_t gainIndex() const = 0;
  virtual uint8_t readoutSpeedIndex() const = 0;
  virtual uint16_t exposureEventCode() const = 0;
  virtual uint32_t numDelayShots() const = 0;
  /** Total size in bytes of the Frame object including header and pixel data, 
            this returns the size of FrameV1 object, do not use this config type with FrameV2 */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};

/** @class ConfigV5

  
*/


class ConfigV5 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 5 /**< XTC type version number */ };
  virtual ~ConfigV5();
  virtual uint32_t width() const = 0;
  virtual uint32_t height() const = 0;
  virtual uint32_t orgX() const = 0;
  virtual uint32_t orgY() const = 0;
  virtual uint32_t binX() const = 0;
  virtual uint32_t binY() const = 0;
  virtual float exposureTime() const = 0;
  virtual float coolingTemp() const = 0;
  virtual uint16_t gainIndex() const = 0;
  virtual uint16_t readoutSpeedIndex() const = 0;
  virtual uint32_t maskedHeight() const = 0;
  virtual uint32_t kineticHeight() const = 0;
  virtual float vsSpeed() const = 0;
  virtual int16_t infoReportInterval() const = 0;
  virtual uint16_t exposureEventCode() const = 0;
  virtual uint32_t numDelayShots() const = 0;
  /** Total size in bytes of the Frame object including header and pixel data, 
            this returns the size of FrameV2 object, do not use this config type with FrameV1 */
  virtual uint32_t frameSize() const = 0;
  /** calculate frame X size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsX() const = 0;
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixelsY() const = 0;
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  virtual uint32_t numPixels() const = 0;
};

/** @class FrameV1

  
*/

class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;
class ConfigV5;

class FrameV1 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonFrame /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~FrameV1();
  virtual uint32_t shotIdStart() const = 0;
  virtual float readoutTime() const = 0;
  virtual ndarray<const uint16_t, 2> data() const = 0;
};

/** @class FrameV2

  
*/

class ConfigV1;
class ConfigV2;
class ConfigV3;
class ConfigV4;
class ConfigV5;

class FrameV2 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonFrame /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~FrameV2();
  virtual uint32_t shotIdStart() const = 0;
  virtual float readoutTime() const = 0;
  virtual float temperature() const = 0;
  virtual ndarray<const uint16_t, 2> data() const = 0;
};

/** @class InfoV1

  
*/


class InfoV1 {
public:
  enum { TypeId = Pds::TypeId::Id_PrincetonInfo /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  InfoV1(float arg__fTemperature)
    : _fTemperature(arg__fTemperature)
  {
  }
  float temperature() const { return _fTemperature; }
  static uint32_t _sizeof() { return 4; }
private:
  float	_fTemperature;
};
} // namespace Princeton
} // namespace Psana
#endif // PSANA_PRINCETON_DDL_H
