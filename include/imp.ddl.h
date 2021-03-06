#ifndef PSANA_IMP_DDL_H
#define PSANA_IMP_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Imp {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_ImpConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { MaxNumberOfSamples = 0x3ff };
  enum Registers {
    Range,
    Cal_range,
    Reset,
    Bias_data,
    Cal_data,
    BiasDac_data,
    Cal_strobe,
    NumberOfSamples,
    TrigDelay,
    Adc_delay,
    NumberOfRegisters,
  };
  virtual ~ConfigV1();
  virtual uint32_t range() const = 0;
  virtual uint32_t calRange() const = 0;
  virtual uint32_t reset() const = 0;
  virtual uint32_t biasData() const = 0;
  virtual uint32_t calData() const = 0;
  virtual uint32_t biasDacData() const = 0;
  virtual uint32_t calStrobe() const = 0;
  virtual uint32_t numberOfSamples() const = 0;
  virtual uint32_t trigDelay() const = 0;
  virtual uint32_t adcDelay() const = 0;
};
std::ostream& operator<<(std::ostream& str, Imp::ConfigV1::Registers enval);

/** @class Sample

  
*/


class Sample {
public:
  enum { channelsPerDevice = 4 };
  Sample(const uint16_t* arg__channels)
  {
    if (arg__channels) std::copy(arg__channels, arg__channels+(4), &_channels[0]);
  }
  Sample() {}
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const uint16_t, 1> channels() const { return make_ndarray(&_channels[0], 4); }
  static uint32_t _sizeof() { return ((((0+(2*(4)))+2)-1)/2)*2; }
private:
  uint16_t	_channels[4];
};

/** @class LaneStatus

  
*/


class LaneStatus {
public:
  LaneStatus(uint8_t arg__usLinkErrCount, uint8_t arg__usLinkDownCount, uint8_t arg__usCellErrCount, uint8_t arg__usRxCount, uint8_t arg__usLocLinked, uint8_t arg__usRemLinked, uint16_t arg__zeros, uint8_t arg__powersOkay)
    : _value(((arg__usLinkErrCount) & 0xf)|(((arg__usLinkDownCount) & 0xf)<<4)|(((arg__usCellErrCount) & 0xf)<<8)|(((arg__usRxCount) & 0xf)<<12)|(((arg__usLocLinked) & 0x1)<<16)|(((arg__usRemLinked) & 0x1)<<17)|(((arg__zeros) & 0x3ff)<<18)|(((arg__powersOkay) & 0xf)<<28))
  {
  }
  LaneStatus() {}
  uint8_t linkErrCount() const { return uint8_t(this->_value & 0xf); }
  uint8_t linkDownCount() const { return uint8_t((this->_value>>4) & 0xf); }
  uint8_t cellErrCount() const { return uint8_t((this->_value>>8) & 0xf); }
  uint8_t rxCount() const { return uint8_t((this->_value>>12) & 0xf); }
  uint8_t locLinked() const { return uint8_t((this->_value>>16) & 0x1); }
  uint8_t remLinked() const { return uint8_t((this->_value>>17) & 0x1); }
  uint16_t zeros() const { return uint16_t((this->_value>>18) & 0x3ff); }
  uint8_t powersOkay() const { return uint8_t((this->_value>>28) & 0xf); }
  static uint32_t _sizeof() { return 4; }
private:
  uint32_t	_value;
};

/** @class ElementV1

  
*/

class ConfigV1;

class ElementV1 {
public:
  enum { TypeId = Pds::TypeId::Id_ImpData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ElementV1();
  virtual uint8_t vc() const = 0;
  virtual uint8_t lane() const = 0;
  virtual uint32_t frameNumber() const = 0;
  virtual uint32_t range() const = 0;
  virtual const Imp::LaneStatus& laneStatus() const = 0;
  virtual ndarray<const Imp::Sample, 1> samples() const = 0;
};
} // namespace Imp
} // namespace Psana
#endif // PSANA_IMP_DDL_H
