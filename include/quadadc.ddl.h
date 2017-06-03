#ifndef PSANA_QUADADC_DDL_H
#define PSANA_QUADADC_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace QuadAdc {

/** @class ConfigV1

  QuadAdc Class
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_QuadAdcConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  virtual ~ConfigV1();
  /** Channel Mask. */
  virtual uint32_t chanMask() const = 0;
  /** Delay time. */
  virtual double delayTime() const = 0;
  /** Interleave Mode. */
  virtual uint32_t interleaveMode() const = 0;
  /** Number of samples. */
  virtual uint32_t nbrSamples() const = 0;
  /** Event Code. */
  virtual uint32_t evtCode() const = 0;
  /** Sample Rate. */
  virtual double sampleRate() const = 0;
};
} // namespace QuadAdc
} // namespace Psana
#endif // PSANA_QUADADC_DDL_H
