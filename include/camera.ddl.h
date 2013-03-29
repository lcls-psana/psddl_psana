#ifndef PSANA_CAMERA_DDL_H
#define PSANA_CAMERA_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Camera {

/** @class FrameCoord

  Class representing the coordinates of pixels inside the camera frame.
*/


class FrameCoord {
public:
  FrameCoord()
  {
  }
  FrameCoord(uint16_t arg__column, uint16_t arg__row)
    : _column(arg__column), _row(arg__row)
  {
  }
  /** Column index (x value). */
  uint16_t column() const { return _column; }
  /** Row index (y value). */
  uint16_t row() const { return _row; }
  static uint32_t _sizeof()  { return 4; }
private:
  uint16_t	_column;	/**< Column index (x value). */
  uint16_t	_row;	/**< Row index (y value). */
};

/** @class FrameFccdConfigV1

  This class was never defined/implemented.
*/


class FrameFccdConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_FrameFccdConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~FrameFccdConfigV1();
};

/** @class FrameFexConfigV1

  Class containing configuration data for online frame feature extraction process.
*/


class FrameFexConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_FrameFexConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum Forwarding {
    NoFrame,
    FullFrame,
    RegionOfInterest,
  };
  enum Processing {
    NoProcessing,
    GssFullFrame,
    GssRegionOfInterest,
    GssThreshold,
  };
  virtual ~FrameFexConfigV1();
  /** frame forwarding policy */
  virtual Camera::FrameFexConfigV1::Forwarding forwarding() const = 0;
  /** Prescale of events with forwarded frames */
  virtual uint32_t forward_prescale() const = 0;
  /** algorithm to apply to frames to produce processed output */
  virtual Camera::FrameFexConfigV1::Processing processing() const = 0;
  /** Coordinate of start of rectangular region of interest (inclusive). */
  virtual const Camera::FrameCoord& roiBegin() const = 0;
  /** Coordinate of finish of rectangular region of interest (exclusive). */
  virtual const Camera::FrameCoord& roiEnd() const = 0;
  /** Pixel data threshold value to apply in processing. */
  virtual uint32_t threshold() const = 0;
  /** Count of masked pixels to exclude from processing. */
  virtual uint32_t number_of_masked_pixels() const = 0;
  /** Location of masked pixel coordinates. */
  virtual ndarray<const Camera::FrameCoord, 1> masked_pixel_coordinates() const = 0;
};
std::ostream& operator<<(std::ostream& str, Camera::FrameFexConfigV1::Forwarding enval);
std::ostream& operator<<(std::ostream& str, Camera::FrameFexConfigV1::Processing enval);

/** @class FrameV1

  
*/


class FrameV1 {
public:
  enum { TypeId = Pds::TypeId::Id_Frame /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~FrameV1();
  /** Number of pixels in a row. */
  virtual uint32_t width() const = 0;
  /** Number of pixels in a column. */
  virtual uint32_t height() const = 0;
  /** Number of bits per pixel. */
  virtual uint32_t depth() const = 0;
  /** Fixed offset/pedestal value of pixel data. */
  virtual uint32_t offset() const = 0;
  /** Pixel data as array of bytes, method is for internal use only, use data8() or 
            data16() for access to the data. */
  virtual ndarray<const uint8_t, 1> _int_pixel_data() const = 0;
  /** Returns pixel data array when stored data type is 8-bit (depth() is less than 9).
                If data type is 16-bit then empty array is returned, use data16() method in this case. */
  virtual ndarray<const uint8_t, 2> data8() const = 0;
  /** Returns pixel data array when stored data type is 16-bit (depth() is greater than 8).
                If data type is 8-bit then empty array is returned, use data8() method in this case. */
  virtual ndarray<const uint16_t, 2> data16() const = 0;
};

/** @class TwoDGaussianV1

  
*/


class TwoDGaussianV1 {
public:
  enum { TypeId = Pds::TypeId::Id_TwoDGaussian /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~TwoDGaussianV1();
  virtual uint64_t integral() const = 0;
  virtual double xmean() const = 0;
  virtual double ymean() const = 0;
  virtual double major_axis_width() const = 0;
  virtual double minor_axis_width() const = 0;
  virtual double major_axis_tilt() const = 0;
};
} // namespace Camera
} // namespace Psana
#endif // PSANA_CAMERA_DDL_H
