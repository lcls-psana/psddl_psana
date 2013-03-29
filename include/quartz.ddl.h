#ifndef PSANA_QUARTZ_DDL_H
#define PSANA_QUARTZ_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/camera.ddl.h"
namespace Psana {
namespace Quartz {

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_QuartzConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { LUT_Size = 4096 };
  enum { Row_Pixels = 2048 };
  enum { Column_Pixels = 2048 };
  enum { Output_LUT_Size = 4096 };

  /** Image bit depth modes. */
  enum Depth {
    Eight_bit,
    Ten_bit,
  };
  enum Binning {
    x1,
    x2,
    x4,
  };
  enum Mirroring {
    None,
    HFlip,
    VFlip,
    HVFlip,
  };
  virtual ~ConfigV1();
  /** offset/pedestal setting for camera (before gain) */
  virtual uint16_t black_level() const = 0;
  /** camera gain setting in percentile [100-3200] = [1x-32x] */
  virtual uint16_t gain_percent() const = 0;
  /** bit-depth of pixel counts */
  virtual Quartz::ConfigV1::Depth output_resolution() const = 0;
  /** horizontal re-binning of output (consecutive rows summed) */
  virtual Quartz::ConfigV1::Binning horizontal_binning() const = 0;
  /** vertical re-binning of output (consecutive rows summed) */
  virtual Quartz::ConfigV1::Binning vertical_binning() const = 0;
  /** geometric transformation of the image */
  virtual Quartz::ConfigV1::Mirroring output_mirroring() const = 0;
  /** apply output lookup table corrections */
  virtual uint8_t output_lookup_table_enabled() const = 0;
  /** correct defective pixels internally */
  virtual uint8_t defect_pixel_correction_enabled() const = 0;
  virtual uint32_t number_of_defect_pixels() const = 0;
  virtual ndarray<const uint16_t, 1> output_lookup_table() const = 0;
  virtual ndarray<const Camera::FrameCoord, 1> defect_pixel_coordinates() const = 0;
  /** offset/pedestal value in pixel counts */
  virtual uint16_t output_offset() const = 0;
  /** bit-depth of pixel counts */
  virtual uint32_t output_resolution_bits() const = 0;
};
std::ostream& operator<<(std::ostream& str, Quartz::ConfigV1::Depth enval);
std::ostream& operator<<(std::ostream& str, Quartz::ConfigV1::Binning enval);
std::ostream& operator<<(std::ostream& str, Quartz::ConfigV1::Mirroring enval);
} // namespace Quartz
} // namespace Psana
#endif // PSANA_QUARTZ_DDL_H
