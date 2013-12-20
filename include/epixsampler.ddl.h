#ifndef PSANA_EPIXSAMPLER_DDL_H
#define PSANA_EPIXSAMPLER_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace EpixSampler {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EpixSamplerConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  virtual uint32_t version() const = 0;
  virtual uint32_t runTrigDelay() const = 0;
  virtual uint32_t daqTrigDelay() const = 0;
  virtual uint32_t daqSetting() const = 0;
  virtual uint32_t adcClkHalfT() const = 0;
  virtual uint32_t adcPipelineDelay() const = 0;
  virtual uint32_t digitalCardId0() const = 0;
  virtual uint32_t digitalCardId1() const = 0;
  virtual uint32_t analogCardId0() const = 0;
  virtual uint32_t analogCardId1() const = 0;
  virtual uint32_t numberOfChannels() const = 0;
  virtual uint32_t samplesPerChannel() const = 0;
  virtual uint32_t baseClockFrequency() const = 0;
  virtual uint8_t testPatternEnable() const = 0;
  virtual double sampleInterval_sec() const = 0;
};

/** @class ElementV1

  
*/

class ConfigV1;

class ElementV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EpixSamplerElement /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ElementV1();
  virtual uint8_t vc() const = 0;
  virtual uint8_t lane() const = 0;
  virtual uint16_t acqCount() const = 0;
  virtual uint32_t frameNumber() const = 0;
  virtual uint32_t ticks() const = 0;
  virtual uint32_t fiducials() const = 0;
  virtual ndarray<const uint16_t, 2> frame() const = 0;
  virtual ndarray<const uint16_t, 1> temperatures() const = 0;
  virtual uint32_t lastWord() const = 0;
};
} // namespace EpixSampler
} // namespace Psana
#endif // PSANA_EPIXSAMPLER_DDL_H