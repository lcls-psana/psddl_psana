#ifndef PSANA_CONTROL_DDL_H
#define PSANA_CONTROL_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "pdsdata/xtc/ClockTime.hh"
namespace Psana {
namespace ControlData {

/** @class PVControl

  
*/


class PVControl {
public:
  enum { NameSize = 32 /**< Length of the name array. */ };
  enum { NoArray = 0xFFFFFFFF /**< Special value used for _index when PV is not an array */ };
  PVControl()
  {
  }
  PVControl(const char* arg__name, uint32_t arg__index, double arg__value)
    : _index(arg__index), _value(arg__value)
  {
    if (arg__name) std::copy(arg__name, arg__name+(32), &_name[0]);
  }
  /** Name of the control. */
  const char* name() const { return _name; }
  /** Index of the control PV (for arrays) or NoArray. */
  uint32_t index() const { return _index; }
  /** Value for this control. */
  double value() const { return _value; }
  /** Returns true if the control is an array. */
  uint8_t array() const;
  static uint32_t _sizeof() { return ((((((0+(1*(32)))+4)+8)+4)-1)/4)*4; }
private:
  char	_name[32];	/**< Name of the control. */
  uint32_t	_index;	/**< Index of the control PV (for arrays) or NoArray. */
  double	_value;	/**< Value for this control. */
};

/** @class PVMonitor

  
*/


class PVMonitor {
public:
  enum { NameSize = 32 /**< Length of the name array. */ };
  enum { NoArray = 0xFFFFFFFF /**< Special value used for _index when PV is not an array */ };
  PVMonitor()
  {
  }
  PVMonitor(const char* arg__name, uint32_t arg__index, double arg__loValue, double arg__hiValue)
    : _index(arg__index), _loValue(arg__loValue), _hiValue(arg__hiValue)
  {
    if (arg__name) std::copy(arg__name, arg__name+(32), &_name[0]);
  }
  /** Name of the control. */
  const char* name() const { return _name; }
  /** Index of the control PV (for arrays) or NoArray. */
  uint32_t index() const { return _index; }
  /** Lowest value for this monitor. */
  double loValue() const { return _loValue; }
  /** Highest value for this monitor. */
  double hiValue() const { return _hiValue; }
  /** Returns true if the monitor is an array. */
  uint8_t array() const;
  static uint32_t _sizeof() { return (((((((0+(1*(32)))+4)+8)+8)+4)-1)/4)*4; }
private:
  char	_name[32];	/**< Name of the control. */
  uint32_t	_index;	/**< Index of the control PV (for arrays) or NoArray. */
  double	_loValue;	/**< Lowest value for this monitor. */
  double	_hiValue;	/**< Highest value for this monitor. */
};

/** @class PVLabel

  
*/


class PVLabel {
public:
  enum { NameSize = 32 /**< Length of the PV name array. */ };
  enum { ValueSize = 64 /**< Length of the value array. */ };
  PVLabel()
  {
  }
  PVLabel(const char* arg__name, const char* arg__value)
  {
    if (arg__name) std::copy(arg__name, arg__name+(32), &_name[0]);
    if (arg__value) std::copy(arg__value, arg__value+(64), &_value[0]);
  }
  /** PV name. */
  const char* name() const { return _name; }
  /** Label value. */
  const char* value() const { return _value; }
  static uint32_t _sizeof() { return (((((0+(1*(32)))+(1*(64)))+1)-1)/1)*1; }
private:
  char	_name[32];	/**< PV name. */
  char	_value[64];	/**< Label value. */
};

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_ControlConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  /** Maximum number of events per scan. */
  virtual uint32_t events() const = 0;
  /** returns true if the configuration uses duration control. */
  virtual uint8_t uses_duration() const = 0;
  /** returns true if the configuration uses events limit. */
  virtual uint8_t uses_events() const = 0;
  /** Maximum duration of the scan. */
  virtual const Pds::ClockTime& duration() const = 0;
  /** Number of PVControl objects in this configuration. */
  virtual uint32_t npvControls() const = 0;
  /** Number of PVMonitor objects in this configuration. */
  virtual uint32_t npvMonitors() const = 0;
  /** PVControl configuration objects */
  virtual ndarray<const ControlData::PVControl, 1> pvControls() const = 0;
  /** PVMonitor configuration objects */
  virtual ndarray<const ControlData::PVMonitor, 1> pvMonitors() const = 0;
};

/** @class ConfigV2

  
*/


class ConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_ControlConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~ConfigV2();
  /** Maximum number of events per scan. */
  virtual uint32_t events() const = 0;
  /** returns true if the configuration uses duration control. */
  virtual uint8_t uses_duration() const = 0;
  /** returns true if the configuration uses events limit. */
  virtual uint8_t uses_events() const = 0;
  /** Maximum duration of the scan. */
  virtual const Pds::ClockTime& duration() const = 0;
  /** Number of PVControl objects in this configuration. */
  virtual uint32_t npvControls() const = 0;
  /** Number of PVMonitor objects in this configuration. */
  virtual uint32_t npvMonitors() const = 0;
  /** Number of PVLabel objects in this configuration. */
  virtual uint32_t npvLabels() const = 0;
  /** PVControl configuration objects */
  virtual ndarray<const ControlData::PVControl, 1> pvControls() const = 0;
  /** PVMonitor configuration objects */
  virtual ndarray<const ControlData::PVMonitor, 1> pvMonitors() const = 0;
  /** PVLabel configuration objects */
  virtual ndarray<const ControlData::PVLabel, 1> pvLabels() const = 0;
};
} // namespace ControlData
} // namespace Psana
#endif // PSANA_CONTROL_DDL_H
