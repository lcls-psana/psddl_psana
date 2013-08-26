#ifndef PSANA_EPICS_DDL_H
#define PSANA_EPICS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
namespace Psana {
namespace Epics {
  enum {
    iXtcVersion = 1 /**<  */
  };
  enum {
    iMaxPvNameLength = 64 /**< Maximum size of PV name string. */
  };
  enum {
    MAX_STRING_SIZE = 40 /**< Maximum length of strings in EPICS. */
  };
  enum {
    MAX_UNITS_SIZE = 8 /**< Maximum lenght of units strings. */
  };
  enum {
    MAX_ENUM_STRING_SIZE = 26 /**< Maximum length of strings specifying ENUMs. */
  };
  enum {
    MAX_ENUM_STATES = 16 /**< Maximum number of different ENUM constants. */
  };

  /** Enum specifying type of DBR structures. */
  enum DbrTypes {
    DBR_STRING = 0,
    DBR_SHORT = 1,
    DBR_FLOAT = 2,
    DBR_ENUM = 3,
    DBR_CHAR = 4,
    DBR_LONG = 5,
    DBR_DOUBLE = 6,
    DBR_STS_STRING = 7,
    DBR_STS_SHORT = 8,
    DBR_STS_FLOAT = 9,
    DBR_STS_ENUM = 10,
    DBR_STS_CHAR = 11,
    DBR_STS_LONG = 12,
    DBR_STS_DOUBLE = 13,
    DBR_TIME_STRING = 14,
    DBR_TIME_INT = 15,
    DBR_TIME_SHORT = 15,
    DBR_TIME_FLOAT = 16,
    DBR_TIME_ENUM = 17,
    DBR_TIME_CHAR = 18,
    DBR_TIME_LONG = 19,
    DBR_TIME_DOUBLE = 20,
    DBR_GR_STRING = 21,
    DBR_GR_SHORT = 22,
    DBR_GR_FLOAT = 23,
    DBR_GR_ENUM = 24,
    DBR_GR_CHAR = 25,
    DBR_GR_LONG = 26,
    DBR_GR_DOUBLE = 27,
    DBR_CTRL_STRING = 28,
    DBR_CTRL_SHORT = 29,
    DBR_CTRL_FLOAT = 30,
    DBR_CTRL_ENUM = 31,
    DBR_CTRL_CHAR = 32,
    DBR_CTRL_LONG = 33,
    DBR_CTRL_DOUBLE = 34,
  };

/** @class epicsTimeStamp

  EPICS timestamp type, includes seconds and nanoseconds.
           EPICS epoch corresponds to 1990-01-01 00:00:00Z.
*/


class epicsTimeStamp {
public:
  epicsTimeStamp()
  {
  }
  epicsTimeStamp(uint32_t arg__secPastEpoch, uint32_t arg__nsec)
    : _secPastEpoch(arg__secPastEpoch), _nsec(arg__nsec)
  {
  }
  /** Seconds since Jan 1, 1990 00:00 UTC */
  uint32_t sec() const { return _secPastEpoch; }
  /** Nanoseconds within second. */
  uint32_t nsec() const { return _nsec; }
  static uint32_t _sizeof() { return 8; }
private:
  uint32_t	_secPastEpoch;	/**< Seconds since Jan 1, 1990 00:00 UTC */
  uint32_t	_nsec;	/**< Nanoseconds within second. */
};

/** @class dbr_time_string

  
*/


class dbr_time_string {
public:
  enum { DBR_TYPE_ID = DBR_TIME_STRING };
  dbr_time_string()
  {
  }
  dbr_time_string(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return ((((4+(Epics::epicsTimeStamp::_sizeof()))+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
};

/** @class dbr_time_short

  
*/


class dbr_time_short {
public:
  enum { DBR_TYPE_ID = DBR_TIME_SHORT };
  dbr_time_short()
  {
  }
  dbr_time_short(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp), RISC_pad(0)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return (((((4+(Epics::epicsTimeStamp::_sizeof()))+2)+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
  int16_t	RISC_pad;
};

/** @class dbr_time_float

  
*/


class dbr_time_float {
public:
  enum { DBR_TYPE_ID = DBR_TIME_FLOAT };
  dbr_time_float()
  {
  }
  dbr_time_float(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return ((((4+(Epics::epicsTimeStamp::_sizeof()))+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
};

/** @class dbr_time_enum

  
*/


class dbr_time_enum {
public:
  enum { DBR_TYPE_ID = DBR_TIME_ENUM };
  dbr_time_enum()
  {
  }
  dbr_time_enum(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp), RISC_pad(0)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return (((((4+(Epics::epicsTimeStamp::_sizeof()))+2)+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
  int16_t	RISC_pad;
};

/** @class dbr_time_char

  
*/


class dbr_time_char {
public:
  enum { DBR_TYPE_ID = DBR_TIME_CHAR };
  dbr_time_char()
  {
  }
  dbr_time_char(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp), RISC_pad1(0)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return ((((((4+(Epics::epicsTimeStamp::_sizeof()))+2)+1)+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
  int16_t	RISC_pad0;
  uint8_t	RISC_pad1;
};

/** @class dbr_time_long

  
*/


class dbr_time_long {
public:
  enum { DBR_TYPE_ID = DBR_TIME_LONG };
  dbr_time_long()
  {
  }
  dbr_time_long(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return ((((4+(Epics::epicsTimeStamp::_sizeof()))+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
};

/** @class dbr_time_double

  
*/


class dbr_time_double {
public:
  enum { DBR_TYPE_ID = DBR_TIME_DOUBLE };
  dbr_time_double()
  {
  }
  dbr_time_double(int16_t status, int16_t severity, const Epics::epicsTimeStamp& stamp)
    : _status(status), _severity(severity), _stamp(stamp), RISC_pad(0)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const Epics::epicsTimeStamp& stamp() const { return _stamp; }
  static uint32_t _sizeof() { return (((((4+(Epics::epicsTimeStamp::_sizeof()))+4)+4)-1)/4)*4; }
private:
  int16_t	_status;
  int16_t	_severity;
  Epics::epicsTimeStamp	_stamp;
  int32_t	RISC_pad;
};

/** @class dbr_sts_string

  
*/


class dbr_sts_string {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_STRING };
  dbr_sts_string()
  {
  }
  dbr_sts_string(int16_t status, int16_t severity)
    : _status(status), _severity(severity)
  {
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  static uint32_t _sizeof() { return 4; }
private:
  int16_t	_status;
  int16_t	_severity;
};

/** @class dbr_ctrl_short

  
*/


class dbr_ctrl_short {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_SHORT };
  dbr_ctrl_short()
  {
  }
  dbr_ctrl_short(int16_t status, int16_t severity, const char* units, int16_t upper_disp_limit, int16_t lower_disp_limit, int16_t upper_alarm_limit, int16_t upper_warning_limit, int16_t lower_warning_limit, int16_t lower_alarm_limit, int16_t upper_ctrl_limit, int16_t lower_ctrl_limit)
    : _status(status), _severity(severity), _upper_disp_limit(upper_disp_limit), _lower_disp_limit(lower_disp_limit), _upper_alarm_limit(upper_alarm_limit), _upper_warning_limit(upper_warning_limit), _lower_warning_limit(lower_warning_limit), _lower_alarm_limit(lower_alarm_limit), _upper_ctrl_limit(upper_ctrl_limit), _lower_ctrl_limit(lower_ctrl_limit)
  {
    if (units) std::copy(units, units+(8), &_units[0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const char* units() const { return _units; }
  int16_t upper_disp_limit() const { return _upper_disp_limit; }
  int16_t lower_disp_limit() const { return _lower_disp_limit; }
  int16_t upper_alarm_limit() const { return _upper_alarm_limit; }
  int16_t upper_warning_limit() const { return _upper_warning_limit; }
  int16_t lower_warning_limit() const { return _lower_warning_limit; }
  int16_t lower_alarm_limit() const { return _lower_alarm_limit; }
  int16_t upper_ctrl_limit() const { return _upper_ctrl_limit; }
  int16_t lower_ctrl_limit() const { return _lower_ctrl_limit; }
  static uint32_t _sizeof() { return ((((((((((((4+(1*(MAX_UNITS_SIZE)))+2)+2)+2)+2)+2)+2)+2)+2)+2)-1)/2)*2; }
  /** Method which returns the shape (dimensions) of the data returned by units() method. */
  std::vector<int> units_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  char	_units[MAX_UNITS_SIZE];
  int16_t	_upper_disp_limit;
  int16_t	_lower_disp_limit;
  int16_t	_upper_alarm_limit;
  int16_t	_upper_warning_limit;
  int16_t	_lower_warning_limit;
  int16_t	_lower_alarm_limit;
  int16_t	_upper_ctrl_limit;
  int16_t	_lower_ctrl_limit;
};

/** @class dbr_ctrl_float

  
*/


class dbr_ctrl_float {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_FLOAT };
  dbr_ctrl_float()
  {
  }
  dbr_ctrl_float(int16_t status, int16_t severity, int16_t precision, const char* units, float upper_disp_limit, float lower_disp_limit, float upper_alarm_limit, float upper_warning_limit, float lower_warning_limit, float lower_alarm_limit, float upper_ctrl_limit, float lower_ctrl_limit)
    : _status(status), _severity(severity), _precision(precision), RISC_pad(0), _upper_disp_limit(upper_disp_limit), _lower_disp_limit(lower_disp_limit), _upper_alarm_limit(upper_alarm_limit), _upper_warning_limit(upper_warning_limit), _lower_warning_limit(lower_warning_limit), _lower_alarm_limit(lower_alarm_limit), _upper_ctrl_limit(upper_ctrl_limit), _lower_ctrl_limit(lower_ctrl_limit)
  {
    if (units) std::copy(units, units+(8), &_units[0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  int16_t precision() const { return _precision; }
  const char* units() const { return _units; }
  float upper_disp_limit() const { return _upper_disp_limit; }
  float lower_disp_limit() const { return _lower_disp_limit; }
  float upper_alarm_limit() const { return _upper_alarm_limit; }
  float upper_warning_limit() const { return _upper_warning_limit; }
  float lower_warning_limit() const { return _lower_warning_limit; }
  float lower_alarm_limit() const { return _lower_alarm_limit; }
  float upper_ctrl_limit() const { return _upper_ctrl_limit; }
  float lower_ctrl_limit() const { return _lower_ctrl_limit; }
  static uint32_t _sizeof() { return ((((((((((((8+(1*(MAX_UNITS_SIZE)))+4)+4)+4)+4)+4)+4)+4)+4)+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by units() method. */
  std::vector<int> units_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  int16_t	_precision;
  int16_t	RISC_pad;
  char	_units[MAX_UNITS_SIZE];
  float	_upper_disp_limit;
  float	_lower_disp_limit;
  float	_upper_alarm_limit;
  float	_upper_warning_limit;
  float	_lower_warning_limit;
  float	_lower_alarm_limit;
  float	_upper_ctrl_limit;
  float	_lower_ctrl_limit;
};

/** @class dbr_ctrl_enum

  
*/


class dbr_ctrl_enum {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_ENUM };
  dbr_ctrl_enum()
  {
  }
  dbr_ctrl_enum(int16_t status, int16_t severity, int16_t no_str, const char* strings)
    : _status(status), _severity(severity), _no_str(no_str)
  {
    if (strings) std::copy(strings, strings+(416), &_strs[0][0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  int16_t no_str() const { return _no_str; }
  const char* strings(uint32_t i0) const { return _strs[i0]; }
  static uint32_t _sizeof() { return ((((6+(1*(MAX_ENUM_STATES)*(MAX_ENUM_STRING_SIZE)))+2)-1)/2)*2; }
  /** Method which returns the shape (dimensions) of the data returned by strings() method. */
  std::vector<int> strings_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  int16_t	_no_str;
  char	_strs[MAX_ENUM_STATES][MAX_ENUM_STRING_SIZE];
};

/** @class dbr_ctrl_char

  
*/


class dbr_ctrl_char {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_CHAR };
  dbr_ctrl_char()
  {
  }
  dbr_ctrl_char(int16_t status, int16_t severity, const char* units, uint8_t upper_disp_limit, uint8_t lower_disp_limit, uint8_t upper_alarm_limit, uint8_t upper_warning_limit, uint8_t lower_warning_limit, uint8_t lower_alarm_limit, uint8_t upper_ctrl_limit, uint8_t lower_ctrl_limit)
    : _status(status), _severity(severity), _upper_disp_limit(upper_disp_limit), _lower_disp_limit(lower_disp_limit), _upper_alarm_limit(upper_alarm_limit), _upper_warning_limit(upper_warning_limit), _lower_warning_limit(lower_warning_limit), _lower_alarm_limit(lower_alarm_limit), _upper_ctrl_limit(upper_ctrl_limit), _lower_ctrl_limit(lower_ctrl_limit), RISC_pad(0)
  {
    if (units) std::copy(units, units+(8), &_units[0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const char* units() const { return _units; }
  uint8_t upper_disp_limit() const { return _upper_disp_limit; }
  uint8_t lower_disp_limit() const { return _lower_disp_limit; }
  uint8_t upper_alarm_limit() const { return _upper_alarm_limit; }
  uint8_t upper_warning_limit() const { return _upper_warning_limit; }
  uint8_t lower_warning_limit() const { return _lower_warning_limit; }
  uint8_t lower_alarm_limit() const { return _lower_alarm_limit; }
  uint8_t upper_ctrl_limit() const { return _upper_ctrl_limit; }
  uint8_t lower_ctrl_limit() const { return _lower_ctrl_limit; }
  static uint32_t _sizeof() { return (((((((((((((4+(1*(MAX_UNITS_SIZE)))+1)+1)+1)+1)+1)+1)+1)+1)+1)+2)-1)/2)*2; }
  /** Method which returns the shape (dimensions) of the data returned by units() method. */
  std::vector<int> units_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  char	_units[MAX_UNITS_SIZE];
  uint8_t	_upper_disp_limit;
  uint8_t	_lower_disp_limit;
  uint8_t	_upper_alarm_limit;
  uint8_t	_upper_warning_limit;
  uint8_t	_lower_warning_limit;
  uint8_t	_lower_alarm_limit;
  uint8_t	_upper_ctrl_limit;
  uint8_t	_lower_ctrl_limit;
  uint8_t	RISC_pad;
};

/** @class dbr_ctrl_long

  
*/


class dbr_ctrl_long {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_LONG };
  dbr_ctrl_long()
  {
  }
  dbr_ctrl_long(int16_t status, int16_t severity, const char* units, int32_t upper_disp_limit, int32_t lower_disp_limit, int32_t upper_alarm_limit, int32_t upper_warning_limit, int32_t lower_warning_limit, int32_t lower_alarm_limit, int32_t upper_ctrl_limit, int32_t lower_ctrl_limit)
    : _status(status), _severity(severity), _upper_disp_limit(upper_disp_limit), _lower_disp_limit(lower_disp_limit), _upper_alarm_limit(upper_alarm_limit), _upper_warning_limit(upper_warning_limit), _lower_warning_limit(lower_warning_limit), _lower_alarm_limit(lower_alarm_limit), _upper_ctrl_limit(upper_ctrl_limit), _lower_ctrl_limit(lower_ctrl_limit)
  {
    if (units) std::copy(units, units+(8), &_units[0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  const char* units() const { return _units; }
  int32_t upper_disp_limit() const { return _upper_disp_limit; }
  int32_t lower_disp_limit() const { return _lower_disp_limit; }
  int32_t upper_alarm_limit() const { return _upper_alarm_limit; }
  int32_t upper_warning_limit() const { return _upper_warning_limit; }
  int32_t lower_warning_limit() const { return _lower_warning_limit; }
  int32_t lower_alarm_limit() const { return _lower_alarm_limit; }
  int32_t upper_ctrl_limit() const { return _upper_ctrl_limit; }
  int32_t lower_ctrl_limit() const { return _lower_ctrl_limit; }
  static uint32_t _sizeof() { return ((((((((((((4+(1*(MAX_UNITS_SIZE)))+4)+4)+4)+4)+4)+4)+4)+4)+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by units() method. */
  std::vector<int> units_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  char	_units[MAX_UNITS_SIZE];
  int32_t	_upper_disp_limit;
  int32_t	_lower_disp_limit;
  int32_t	_upper_alarm_limit;
  int32_t	_upper_warning_limit;
  int32_t	_lower_warning_limit;
  int32_t	_lower_alarm_limit;
  int32_t	_upper_ctrl_limit;
  int32_t	_lower_ctrl_limit;
};

/** @class dbr_ctrl_double

  
*/


class dbr_ctrl_double {
public:
  enum { DBR_TYPE_ID = DBR_CTRL_DOUBLE };
  dbr_ctrl_double()
  {
  }
  dbr_ctrl_double(int16_t status, int16_t severity, int16_t precision, const char* units, double upper_disp_limit, double lower_disp_limit, double upper_alarm_limit, double upper_warning_limit, double lower_warning_limit, double lower_alarm_limit, double upper_ctrl_limit, double lower_ctrl_limit)
    : _status(status), _severity(severity), _precision(precision), RISC_pad0(0), _upper_disp_limit(upper_disp_limit), _lower_disp_limit(lower_disp_limit), _upper_alarm_limit(upper_alarm_limit), _upper_warning_limit(upper_warning_limit), _lower_warning_limit(lower_warning_limit), _lower_alarm_limit(lower_alarm_limit), _upper_ctrl_limit(upper_ctrl_limit), _lower_ctrl_limit(lower_ctrl_limit)
  {
    if (units) std::copy(units, units+(8), &_units[0]);
  }
  int16_t status() const { return _status; }
  int16_t severity() const { return _severity; }
  int16_t precision() const { return _precision; }
  const char* units() const { return _units; }
  double upper_disp_limit() const { return _upper_disp_limit; }
  double lower_disp_limit() const { return _lower_disp_limit; }
  double upper_alarm_limit() const { return _upper_alarm_limit; }
  double upper_warning_limit() const { return _upper_warning_limit; }
  double lower_warning_limit() const { return _lower_warning_limit; }
  double lower_alarm_limit() const { return _lower_alarm_limit; }
  double upper_ctrl_limit() const { return _upper_ctrl_limit; }
  double lower_ctrl_limit() const { return _lower_ctrl_limit; }
  static uint32_t _sizeof() { return ((((((((((((8+(1*(MAX_UNITS_SIZE)))+8)+8)+8)+8)+8)+8)+8)+8)+8)-1)/8)*8; }
  /** Method which returns the shape (dimensions) of the data returned by units() method. */
  std::vector<int> units_shape() const;
private:
  int16_t	_status;
  int16_t	_severity;
  int16_t	_precision;
  int16_t	RISC_pad0;
  char	_units[MAX_UNITS_SIZE];
  double	_upper_disp_limit;
  double	_lower_disp_limit;
  double	_upper_alarm_limit;
  double	_upper_warning_limit;
  double	_lower_warning_limit;
  double	_lower_alarm_limit;
  double	_upper_ctrl_limit;
  double	_lower_ctrl_limit;
};

/** @class EpicsPvHeader

  Base class for EPICS data types stored in XTC files.
*/


class EpicsPvHeader {
public:
  virtual ~EpicsPvHeader();
  /** PV ID number assigned by DAQ. */
  virtual int16_t pvId() const = 0;
  /** DBR structure type. */
  virtual int16_t dbrType() const = 0;
  /** Number of elements in EPICS DBR structure */
  virtual int16_t numElements() const = 0;
  /** Returns 1 if PV is one of CTRL types, 0 otherwise. */
  virtual uint8_t isCtrl() const = 0;
  /** Returns 1 if PV is one of TIME types, 0 otherwise. */
  virtual uint8_t isTime() const = 0;
  /** Returns status value for the PV. */
  virtual uint16_t status() const = 0;
  /** Returns severity value for the PV. */
  virtual uint16_t severity() const = 0;
};

/** @class EpicsPvCtrlHeader

  Base class for all CTRL-type PV values.
*/


class EpicsPvCtrlHeader: public EpicsPvHeader {
public:
  virtual ~EpicsPvCtrlHeader();
  /** PV name. */
  virtual const char* pvName() const = 0;
};

/** @class EpicsPvTimeHeader

  Base class for all TIME-type PV values.
*/


class EpicsPvTimeHeader: public EpicsPvHeader {
public:
  virtual ~EpicsPvTimeHeader();
  /** EPICS timestamp value. */
  virtual Epics::epicsTimeStamp stamp() const = 0;
};

/** @class EpicsPvCtrlString

  
*/


class EpicsPvCtrlString: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlString();
  virtual const Epics::dbr_sts_string& dbr() const = 0;
  virtual const char* data(uint32_t i0) const = 0;
  virtual const char* value(uint32_t i) const = 0;
  /** Method which returns the shape (dimensions) of the data returned by data() method. */
  virtual std::vector<int> data_shape() const = 0;
};

/** @class EpicsPvCtrlShort

  
*/


class EpicsPvCtrlShort: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlShort();
  virtual const Epics::dbr_ctrl_short& dbr() const = 0;
  virtual ndarray<const int16_t, 1> data() const = 0;
  virtual int16_t value(uint32_t i) const = 0;
};

/** @class EpicsPvCtrlFloat

  
*/


class EpicsPvCtrlFloat: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlFloat();
  virtual const Epics::dbr_ctrl_float& dbr() const = 0;
  virtual ndarray<const float, 1> data() const = 0;
  virtual float value(uint32_t i) const = 0;
};

/** @class EpicsPvCtrlEnum

  
*/


class EpicsPvCtrlEnum: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlEnum();
  virtual const Epics::dbr_ctrl_enum& dbr() const = 0;
  virtual ndarray<const uint16_t, 1> data() const = 0;
  virtual uint16_t value(uint32_t i) const = 0;
};

/** @class EpicsPvCtrlChar

  
*/


class EpicsPvCtrlChar: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlChar();
  virtual const Epics::dbr_ctrl_char& dbr() const = 0;
  virtual ndarray<const uint8_t, 1> data() const = 0;
  virtual uint8_t value(uint32_t i) const = 0;
};

/** @class EpicsPvCtrlLong

  
*/


class EpicsPvCtrlLong: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlLong();
  virtual const Epics::dbr_ctrl_long& dbr() const = 0;
  virtual ndarray<const int32_t, 1> data() const = 0;
  virtual int32_t value(uint32_t i) const = 0;
};

/** @class EpicsPvCtrlDouble

  
*/


class EpicsPvCtrlDouble: public EpicsPvCtrlHeader {
public:
  virtual ~EpicsPvCtrlDouble();
  virtual const Epics::dbr_ctrl_double& dbr() const = 0;
  virtual ndarray<const double, 1> data() const = 0;
  virtual double value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeString

  
*/


class EpicsPvTimeString: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeString();
  virtual const Epics::dbr_time_string& dbr() const = 0;
  virtual const char* data(uint32_t i0) const = 0;
  virtual const char* value(uint32_t i) const = 0;
  /** Method which returns the shape (dimensions) of the data returned by data() method. */
  virtual std::vector<int> data_shape() const = 0;
};

/** @class EpicsPvTimeShort

  
*/


class EpicsPvTimeShort: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeShort();
  virtual const Epics::dbr_time_short& dbr() const = 0;
  virtual ndarray<const int16_t, 1> data() const = 0;
  virtual int16_t value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeFloat

  
*/


class EpicsPvTimeFloat: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeFloat();
  virtual const Epics::dbr_time_float& dbr() const = 0;
  virtual ndarray<const float, 1> data() const = 0;
  virtual float value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeEnum

  
*/


class EpicsPvTimeEnum: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeEnum();
  virtual const Epics::dbr_time_enum& dbr() const = 0;
  virtual ndarray<const uint16_t, 1> data() const = 0;
  virtual uint16_t value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeChar

  
*/


class EpicsPvTimeChar: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeChar();
  virtual const Epics::dbr_time_char& dbr() const = 0;
  virtual ndarray<const uint8_t, 1> data() const = 0;
  virtual uint8_t value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeLong

  
*/


class EpicsPvTimeLong: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeLong();
  virtual const Epics::dbr_time_long& dbr() const = 0;
  virtual ndarray<const int32_t, 1> data() const = 0;
  virtual int32_t value(uint32_t i) const = 0;
};

/** @class EpicsPvTimeDouble

  
*/


class EpicsPvTimeDouble: public EpicsPvTimeHeader {
public:
  virtual ~EpicsPvTimeDouble();
  virtual const Epics::dbr_time_double& dbr() const = 0;
  virtual ndarray<const double, 1> data() const = 0;
  virtual double value(uint32_t i) const = 0;
};

/** @class PvConfigV1

  
*/


class PvConfigV1 {
public:
  enum { iMaxPvDescLength = 64 };
  PvConfigV1(int16_t arg_iPvId, const char* arg_sPvDesc, float arg_fInterval)
    : iPvId(arg_iPvId), fInterval(arg_fInterval)
  {
    if (arg_sPvDesc) std::copy(arg_sPvDesc, arg_sPvDesc+(64), &sPvDesc[0]);
  }
  PvConfigV1() {}
  int16_t pvId() const { return iPvId; }
  const char* description() const { return sPvDesc; }
  float interval() const { return fInterval; }
  static uint32_t _sizeof() { return ((((((2+(1*(iMaxPvDescLength)))+2)+4)+4)-1)/4)*4; }
private:
  int16_t	iPvId;
  char	sPvDesc[iMaxPvDescLength];
  int16_t	_pad0;
  float	fInterval;
};

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EpicsConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  virtual int32_t numPv() const = 0;
  virtual ndarray<const Epics::PvConfigV1, 1> pvControls() const = 0;
};
} // namespace Epics
} // namespace Psana
#endif // PSANA_EPICS_DDL_H
