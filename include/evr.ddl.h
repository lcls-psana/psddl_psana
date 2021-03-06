#ifndef PSANA_EVR_DDL_H
#define PSANA_EVR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "pdsdata/xtc/DetInfo.hh"
namespace Psana {
namespace EvrData {

/** @class PulseConfig

  
*/


class PulseConfig {
public:
  enum { Trigger_Shift = 0 };
  enum { Set_Shift = 8 };
  enum { Clear_Shift = 16 };
  enum { Polarity_Shift = 0 };
  enum { Map_Set_Ena_Shift = 1 };
  enum { Map_Reset_Ena_Shift = 2 };
  enum { Map_Trigger_Ena_Shift = 3 };
  PulseConfig(uint32_t pulse, int16_t trigger, int16_t set, int16_t clear, uint8_t polarity, uint8_t map_set_enable, uint8_t map_reset_enable, uint8_t map_trigger_enable, uint32_t prescale, uint32_t delay, uint32_t width)
    : _pulse(pulse), _input_control(((trigger+1) & 0xff)|(((set+1) & 0xff)<<8)|(((clear+1) & 0xff)<<16)), _output_control(((polarity) & 0x1)|(((map_set_enable) & 0x1)<<1)|(((map_reset_enable) & 0x1)<<2)|(((map_trigger_enable) & 0x1)<<3)), _prescale(prescale), _delay(delay), _width(width)
  {
  }
  PulseConfig() {}
  /** internal pulse generation channel */
  uint32_t pulse() const { return _pulse; }
  /** Pulse input control */
  uint32_t _input_control_value() const { return _input_control; }
private:
  int16_t bf_trigger() const { return int16_t(this->_input_control & 0xff); }
  int16_t bf_set() const { return int16_t((this->_input_control>>8) & 0xff); }
  int16_t bf_clear() const { return int16_t((this->_input_control>>16) & 0xff); }
public:
  /** Pulse output control */
  uint32_t _output_control_value() const { return _output_control; }
  uint8_t polarity() const { return uint8_t(this->_output_control & 0x1); }
  uint8_t map_set_enable() const { return uint8_t((this->_output_control>>1) & 0x1); }
  uint8_t map_reset_enable() const { return uint8_t((this->_output_control>>2) & 0x1); }
  uint8_t map_trigger_enable() const { return uint8_t((this->_output_control>>3) & 0x1); }
  /** pulse event prescale */
  uint32_t prescale() const { return _prescale; }
  /** delay in 119MHz clks */
  uint32_t delay() const { return _delay; }
  /** width in 119MHz clks */
  uint32_t width() const { return _width; }
  int16_t trigger() const;
  int16_t set() const;
  int16_t clear() const;
  static uint32_t _sizeof() { return 24; }
private:
  uint32_t	_pulse;	/**< internal pulse generation channel */
  uint32_t	_input_control;	/**< Pulse input control */
  uint32_t	_output_control;	/**< Pulse output control */
  uint32_t	_prescale;	/**< pulse event prescale */
  uint32_t	_delay;	/**< delay in 119MHz clks */
  uint32_t	_width;	/**< width in 119MHz clks */
};

/** @class PulseConfigV3

  
*/


class PulseConfigV3 {
public:
  PulseConfigV3(uint16_t arg__u16PulseId, uint16_t arg__u16Polarity, uint32_t arg__u32Prescale, uint32_t arg__u32Delay, uint32_t arg__u32Width)
    : _u16PulseId(arg__u16PulseId), _u16Polarity(arg__u16Polarity), _u32Prescale(arg__u32Prescale), _u32Delay(arg__u32Delay), _u32Width(arg__u32Width)
  {
  }
  PulseConfigV3() {}
  uint16_t pulseId() const { return _u16PulseId; }
  /** 0 -> positive polarity , 1 -> negative polarity */
  uint16_t polarity() const { return _u16Polarity; }
  /** Clock divider */
  uint32_t prescale() const { return _u32Prescale; }
  /** Delay in 119MHz clks */
  uint32_t delay() const { return _u32Delay; }
  /** Width in 119MHz clks */
  uint32_t width() const { return _u32Width; }
  static uint32_t _sizeof() { return 16; }
private:
  uint16_t	_u16PulseId;
  uint16_t	_u16Polarity;	/**< 0 -> positive polarity , 1 -> negative polarity */
  uint32_t	_u32Prescale;	/**< Clock divider */
  uint32_t	_u32Delay;	/**< Delay in 119MHz clks */
  uint32_t	_u32Width;	/**< Width in 119MHz clks */
};

/** @class EventCodeV3

  
*/


class EventCodeV3 {
public:
  EventCodeV3(uint16_t arg__u16Code, uint8_t arg__bf_isReadout, uint8_t arg__bf_isTerminator, uint32_t arg__u32MaskTrigger, uint32_t arg__u32MaskSet, uint32_t arg__u32MaskClear)
    : _u16Code(arg__u16Code), _u16MaskEventAttr(((arg__bf_isReadout) & 0x1)|(((arg__bf_isTerminator) & 0x1)<<1)), _u32MaskTrigger(arg__u32MaskTrigger), _u32MaskSet(arg__u32MaskSet), _u32MaskClear(arg__u32MaskClear)
  {
  }
  EventCodeV3() {}
  uint16_t code() const { return _u16Code; }
  uint8_t isReadout() const { return uint8_t(this->_u16MaskEventAttr & 0x1); }
  uint8_t isTerminator() const { return uint8_t((this->_u16MaskEventAttr>>1) & 0x1); }
  uint32_t maskTrigger() const { return _u32MaskTrigger; }
  uint32_t maskSet() const { return _u32MaskSet; }
  uint32_t maskClear() const { return _u32MaskClear; }
  static uint32_t _sizeof() { return 16; }
private:
  uint16_t	_u16Code;
  uint16_t	_u16MaskEventAttr;
  uint32_t	_u32MaskTrigger;
  uint32_t	_u32MaskSet;
  uint32_t	_u32MaskClear;
};

/** @class EventCodeV4

  
*/


class EventCodeV4 {
public:
  EventCodeV4(uint16_t arg__u16Code, uint8_t arg__bf_isReadout, uint8_t arg__bf_isTerminator, uint32_t arg__u32ReportDelay, uint32_t arg__u32ReportWidth, uint32_t arg__u32MaskTrigger, uint32_t arg__u32MaskSet, uint32_t arg__u32MaskClear)
    : _u16Code(arg__u16Code), _u16MaskEventAttr(((arg__bf_isReadout) & 0x1)|(((arg__bf_isTerminator) & 0x1)<<1)), _u32ReportDelay(arg__u32ReportDelay), _u32ReportWidth(arg__u32ReportWidth), _u32MaskTrigger(arg__u32MaskTrigger), _u32MaskSet(arg__u32MaskSet), _u32MaskClear(arg__u32MaskClear)
  {
  }
  EventCodeV4() {}
  uint16_t code() const { return _u16Code; }
  uint8_t isReadout() const { return uint8_t(this->_u16MaskEventAttr & 0x1); }
  uint8_t isTerminator() const { return uint8_t((this->_u16MaskEventAttr>>1) & 0x1); }
  uint32_t reportDelay() const { return _u32ReportDelay; }
  uint32_t reportWidth() const { return _u32ReportWidth; }
  uint32_t maskTrigger() const { return _u32MaskTrigger; }
  uint32_t maskSet() const { return _u32MaskSet; }
  uint32_t maskClear() const { return _u32MaskClear; }
  static uint32_t _sizeof() { return 24; }
private:
  uint16_t	_u16Code;
  uint16_t	_u16MaskEventAttr;
  uint32_t	_u32ReportDelay;
  uint32_t	_u32ReportWidth;
  uint32_t	_u32MaskTrigger;
  uint32_t	_u32MaskSet;
  uint32_t	_u32MaskClear;
};

/** @class EventCodeV5

  
*/


class EventCodeV5 {
public:
  enum { DescSize = 16 };
  EventCodeV5(uint16_t arg__u16Code, uint8_t arg__bf_isReadout, uint8_t arg__bf_isCommand, uint8_t arg__bf_isLatch, uint32_t arg__u32ReportDelay, uint32_t arg__u32ReportWidth, uint32_t arg__u32MaskTrigger, uint32_t arg__u32MaskSet, uint32_t arg__u32MaskClear, const char* arg__desc)
    : _u16Code(arg__u16Code), _u16MaskEventAttr(((arg__bf_isReadout) & 0x1)|(((arg__bf_isCommand) & 0x1)<<1)|(((arg__bf_isLatch) & 0x1)<<2)), _u32ReportDelay(arg__u32ReportDelay), _u32ReportWidth(arg__u32ReportWidth), _u32MaskTrigger(arg__u32MaskTrigger), _u32MaskSet(arg__u32MaskSet), _u32MaskClear(arg__u32MaskClear)
  {
    if (arg__desc) std::copy(arg__desc, arg__desc+(16), &_desc[0]);
  }
  EventCodeV5() {}
  uint16_t code() const { return _u16Code; }
  uint8_t isReadout() const { return uint8_t(this->_u16MaskEventAttr & 0x1); }
  uint8_t isCommand() const { return uint8_t((this->_u16MaskEventAttr>>1) & 0x1); }
  uint8_t isLatch() const { return uint8_t((this->_u16MaskEventAttr>>2) & 0x1); }
  uint32_t reportDelay() const { return _u32ReportDelay; }
  uint32_t reportWidth() const { return _u32ReportWidth; }
  uint32_t maskTrigger() const { return _u32MaskTrigger; }
  uint32_t maskSet() const { return _u32MaskSet; }
  uint32_t maskClear() const { return _u32MaskClear; }
  const char* desc() const { return _desc; }
  uint32_t releaseCode() const { return this->_u32ReportWidth; }
  static uint32_t _sizeof() { return ((((24+(1*(DescSize)))+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by desc() method. */
  std::vector<int> desc_shape() const;
private:
  uint16_t	_u16Code;
  uint16_t	_u16MaskEventAttr;
  uint32_t	_u32ReportDelay;
  uint32_t	_u32ReportWidth;
  uint32_t	_u32MaskTrigger;
  uint32_t	_u32MaskSet;
  uint32_t	_u32MaskClear;
  char	_desc[DescSize];
};

/** @class EventCodeV6

  
*/


class EventCodeV6 {
public:
  enum { DescSize = 16 };
  enum { MaxReadoutGroup = 7 };
  EventCodeV6(uint16_t arg__u16Code, uint8_t arg__bf_isReadout, uint8_t arg__bf_isCommand, uint8_t arg__bf_isLatch, uint32_t arg__u32ReportDelay, uint32_t arg__u32ReportWidth, uint32_t arg__u32MaskTrigger, uint32_t arg__u32MaskSet, uint32_t arg__u32MaskClear, const char* arg__desc, uint16_t arg__u16ReadGroup)
    : _u16Code(arg__u16Code), _u16MaskEventAttr(((arg__bf_isReadout) & 0x1)|(((arg__bf_isCommand) & 0x1)<<1)|(((arg__bf_isLatch) & 0x1)<<2)), _u32ReportDelay(arg__u32ReportDelay), _u32ReportWidth(arg__u32ReportWidth), _u32MaskTrigger(arg__u32MaskTrigger), _u32MaskSet(arg__u32MaskSet), _u32MaskClear(arg__u32MaskClear), _u16ReadGroup(arg__u16ReadGroup)
  {
    if (arg__desc) std::copy(arg__desc, arg__desc+(16), &_desc[0]);
  }
  EventCodeV6() {}
  uint16_t code() const { return _u16Code; }
  uint8_t isReadout() const { return uint8_t(this->_u16MaskEventAttr & 0x1); }
  uint8_t isCommand() const { return uint8_t((this->_u16MaskEventAttr>>1) & 0x1); }
  uint8_t isLatch() const { return uint8_t((this->_u16MaskEventAttr>>2) & 0x1); }
  uint32_t reportDelay() const { return _u32ReportDelay; }
  uint32_t reportWidth() const { return _u32ReportWidth; }
  uint32_t maskTrigger() const { return _u32MaskTrigger; }
  uint32_t maskSet() const { return _u32MaskSet; }
  uint32_t maskClear() const { return _u32MaskClear; }
  const char* desc() const { return _desc; }
  uint16_t readoutGroup() const { return _u16ReadGroup; }
  uint32_t releaseCode() const { return this->_u32ReportWidth; }
  static uint32_t _sizeof() { return (((((24+(1*(DescSize)))+2)+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by desc() method. */
  std::vector<int> desc_shape() const;
private:
  uint16_t	_u16Code;
  uint16_t	_u16MaskEventAttr;
  uint32_t	_u32ReportDelay;
  uint32_t	_u32ReportWidth;
  uint32_t	_u32MaskTrigger;
  uint32_t	_u32MaskSet;
  uint32_t	_u32MaskClear;
  char	_desc[DescSize];
  uint16_t	_u16ReadGroup;
};

/** @class SrcEventCode

  Describes configuration of self-contained event generator.
*/


class SrcEventCode {
public:
  enum { DescSize = 16 };
  enum { MaxReadoutGroup = 7 };
  SrcEventCode(uint16_t arg__u16Code, uint32_t arg__u32Period, uint32_t arg__u32MaskTriggerP, uint32_t arg__u32MaskTriggerR, const char* arg__desc, uint16_t arg__u16ReadGroup)
    : _u16Code(arg__u16Code), _u32Period(arg__u32Period), _u32MaskTriggerP(arg__u32MaskTriggerP), _u32MaskTriggerR(arg__u32MaskTriggerR), _u16ReadGroup(arg__u16ReadGroup)
  {
    if (arg__desc) std::copy(arg__desc, arg__desc+(16), &_desc[0]);
  }
  SrcEventCode() {}
  /** Assigned eventcode. */
  uint16_t code() const { return _u16Code; }
  /** Repetition period in 119 MHz counts or 0 for external source. */
  uint32_t period() const { return _u32Period; }
  /** Bit mask of persistent pulse triggers. */
  uint32_t maskTriggerP() const { return _u32MaskTriggerP; }
  /** Bit mask of running pulse triggers. */
  uint32_t maskTriggerR() const { return _u32MaskTriggerR; }
  /** Optional description. */
  const char* desc() const { return _desc; }
  /** Assigned readout group. */
  uint16_t readoutGroup() const { return _u16ReadGroup; }
  static uint32_t _sizeof() { return (((((16+(1*(DescSize)))+2)+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by desc() method. */
  std::vector<int> desc_shape() const;
private:
  uint16_t	_u16Code;	/**< Assigned eventcode. */
  uint16_t	_u16rsvd;
  uint32_t	_u32Period;	/**< Repetition period in 119 MHz counts or 0 for external source. */
  uint32_t	_u32MaskTriggerP;	/**< Bit mask of persistent pulse triggers. */
  uint32_t	_u32MaskTriggerR;	/**< Bit mask of running pulse triggers. */
  char	_desc[DescSize];	/**< Optional description. */
  uint16_t	_u16ReadGroup;	/**< Assigned readout group. */
};

/** @class OutputMap

  
*/


class OutputMap {
public:
  enum Source {
    Pulse,
    DBus,
    Prescaler,
    Force_High,
    Force_Low,
  };
  enum Conn {
    FrontPanel,
    UnivIO,
  };
  OutputMap(EvrData::OutputMap::Source arg__bf_source, uint8_t arg__bf_source_id, EvrData::OutputMap::Conn arg__bf_conn, uint8_t arg__bf_conn_id)
    : _v(((arg__bf_source) & 0xff)|(((arg__bf_source_id) & 0xff)<<8)|(((arg__bf_conn) & 0xff)<<16)|(((arg__bf_conn_id) & 0xff)<<24))
  {
  }
  OutputMap() {}
  uint32_t value() const { return _v; }
  EvrData::OutputMap::Source source() const { return Source(this->_v & 0xff); }
  uint8_t source_id() const { return uint8_t((this->_v>>8) & 0xff); }
  EvrData::OutputMap::Conn conn() const { return Conn((this->_v>>16) & 0xff); }
  uint8_t conn_id() const { return uint8_t((this->_v>>24) & 0xff); }
  /** Returns encoded source value. */
  uint32_t map() const;
  static uint32_t _sizeof() { return 4; }
private:
  uint32_t	_v;
};
std::ostream& operator<<(std::ostream& str, EvrData::OutputMap::Source enval);
std::ostream& operator<<(std::ostream& str, EvrData::OutputMap::Conn enval);

/** @class OutputMapV2

  
*/


class OutputMapV2 {
public:
  enum Source {
    Pulse,
    DBus,
    Prescaler,
    Force_High,
    Force_Low,
  };
  enum Conn {
    FrontPanel,
    UnivIO,
  };
  OutputMapV2(EvrData::OutputMapV2::Source arg__bf_source, uint8_t arg__bf_source_id, EvrData::OutputMapV2::Conn arg__bf_conn, uint8_t arg__bf_conn_id, uint8_t arg__bf_module)
    : _v(((arg__bf_source) & 0xf)|(((arg__bf_source_id) & 0xff)<<4)|(((arg__bf_conn) & 0xf)<<12)|(((arg__bf_conn_id) & 0xff)<<16)|(((arg__bf_module) & 0xff)<<24))
  {
  }
  OutputMapV2() {}
  uint32_t value() const { return _v; }
  EvrData::OutputMapV2::Source source() const { return Source(this->_v & 0xf); }
  uint8_t source_id() const { return uint8_t((this->_v>>4) & 0xff); }
  EvrData::OutputMapV2::Conn conn() const { return Conn((this->_v>>12) & 0xf); }
  uint8_t conn_id() const { return uint8_t((this->_v>>16) & 0xff); }
  uint8_t module() const { return uint8_t((this->_v>>24) & 0xff); }
  /** Returns encoded source value. */
  uint32_t map() const;
  static uint32_t _sizeof() { return 4; }
private:
  uint32_t	_v;
};
std::ostream& operator<<(std::ostream& str, EvrData::OutputMapV2::Source enval);
std::ostream& operator<<(std::ostream& str, EvrData::OutputMapV2::Conn enval);

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::PulseConfig, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMap, 1> output_maps() const = 0;
};

/** @class ConfigV2

  
*/


class ConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  enum { beamOn = 100 };
  enum { baseRate = 40 };
  enum { singleShot = 150 };
  enum RateCode {
    r120Hz,
    r60Hz,
    r30Hz,
    r10Hz,
    r5Hz,
    r1Hz,
    r0_5Hz,
    Single,
    NumberOfRates,
  };
  enum BeamCode {
    Off,
    On,
  };
  virtual ~ConfigV2();
  virtual uint32_t opcode() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::PulseConfig, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMap, 1> output_maps() const = 0;
  virtual EvrData::ConfigV2::BeamCode beam() const = 0;
  virtual EvrData::ConfigV2::RateCode rate() const = 0;
};
std::ostream& operator<<(std::ostream& str, EvrData::ConfigV2::RateCode enval);
std::ostream& operator<<(std::ostream& str, EvrData::ConfigV2::BeamCode enval);

/** @class ConfigV3

  
*/


class ConfigV3 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };
  virtual ~ConfigV3();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::EventCodeV3, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMap, 1> output_maps() const = 0;
};

/** @class ConfigV4

  
*/


class ConfigV4 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 4 /**< XTC type version number */ };
  virtual ~ConfigV4();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::EventCodeV4, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMap, 1> output_maps() const = 0;
};

/** @class SequencerEntry

  
*/


class SequencerEntry {
public:
  SequencerEntry(uint32_t eventcode, uint32_t delay)
    : _value(((delay) & 0xffffff)|(((eventcode) & 0xff)<<24))
  {
  }
  SequencerEntry() {}
  uint32_t delay() const { return uint32_t(this->_value & 0xffffff); }
  uint32_t eventcode() const { return uint32_t((this->_value>>24) & 0xff); }
  static uint32_t _sizeof() { return 4; }
private:
  uint32_t	_value;
};

/** @class SequencerConfigV1

  
*/


class SequencerConfigV1 {
public:
  enum Source {
    r120Hz,
    r60Hz,
    r30Hz,
    r10Hz,
    r5Hz,
    r1Hz,
    r0_5Hz,
    Disable,
  };
  virtual ~SequencerConfigV1();
  virtual EvrData::SequencerConfigV1::Source sync_source() const = 0;
  virtual EvrData::SequencerConfigV1::Source beam_source() const = 0;
  virtual uint32_t length() const = 0;
  virtual uint32_t cycles() const = 0;
  virtual ndarray<const EvrData::SequencerEntry, 1> entries() const = 0;
};
std::ostream& operator<<(std::ostream& str, EvrData::SequencerConfigV1::Source enval);

/** @class ConfigV5

  
*/


class ConfigV5 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 5 /**< XTC type version number */ };
  enum { MaxPulses = 32 };
  enum { EvrOutputs = 10 };
  virtual ~ConfigV5();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::EventCodeV5, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMap, 1> output_maps() const = 0;
  virtual const EvrData::SequencerConfigV1& seq_config() const = 0;
};

/** @class ConfigV6

  
*/


class ConfigV6 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 6 /**< XTC type version number */ };
  enum { MaxPulses = 256 /**< Maximum pulses in the system */ };
  enum { MaxOutputs = 256 /**< Maximum outputs in the system */ };
  virtual ~ConfigV6();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::EventCodeV5, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMapV2, 1> output_maps() const = 0;
  virtual const EvrData::SequencerConfigV1& seq_config() const = 0;
};

/** @class ConfigV7

  
*/


class ConfigV7 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 7 /**< XTC type version number */ };
  enum { MaxPulses = 256 /**< Maximum pulses in the system */ };
  enum { MaxOutputs = 256 /**< Maximum outputs in the system */ };
  virtual ~ConfigV7();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::EventCodeV6, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMapV2, 1> output_maps() const = 0;
  virtual const EvrData::SequencerConfigV1& seq_config() const = 0;
};

/** @class SrcConfigV1

  Describes configuration of self-contained event generator.
*/


class SrcConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EvsConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  enum { MaxPulses = 12 /**< Maximum pulses in the system */ };
  enum { MaxOutputs = 12 /**< Maximum outputs in the system */ };
  virtual ~SrcConfigV1();
  virtual uint32_t neventcodes() const = 0;
  virtual uint32_t npulses() const = 0;
  virtual uint32_t noutputs() const = 0;
  virtual ndarray<const EvrData::SrcEventCode, 1> eventcodes() const = 0;
  virtual ndarray<const EvrData::PulseConfigV3, 1> pulses() const = 0;
  virtual ndarray<const EvrData::OutputMapV2, 1> output_maps() const = 0;
};

/** @class FIFOEvent

  
*/


class FIFOEvent {
public:
  FIFOEvent(uint32_t arg__timestampHigh, uint32_t arg__timestampLow, uint32_t arg__eventCode)
    : _timestampHigh(arg__timestampHigh), _timestampLow(arg__timestampLow), _eventCode(arg__eventCode)
  {
  }
  FIFOEvent() {}
  /** 119 MHz timestamp (fiducial) */
  uint32_t timestampHigh() const { return _timestampHigh; }
  /** 360 Hz timestamp */
  uint32_t timestampLow() const { return _timestampLow; }
  /** event code (range 0-255) */
  uint32_t eventCode() const { return _eventCode; }
  static uint32_t _sizeof() { return 12; }
private:
  uint32_t	_timestampHigh;	/**< 119 MHz timestamp (fiducial) */
  uint32_t	_timestampLow;	/**< 360 Hz timestamp */
  uint32_t	_eventCode;	/**< event code (range 0-255) */
};

/** @class DataV3

  
*/


class DataV3 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };
  virtual ~DataV3();
  /** length of FIFOEvent list */
  virtual uint32_t numFifoEvents() const = 0;
  /** FIFOEvent list */
  virtual ndarray<const EvrData::FIFOEvent, 1> fifoEvents() const = 0;
};

/** @class DataV4

  
*/


class DataV4 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrData /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 4 /**< XTC type version number */ };
  virtual ~DataV4();
  /** length of FIFOEvent list */
  virtual uint32_t numFifoEvents() const = 0;
  /** FIFOEvent list */
  virtual ndarray<const EvrData::FIFOEvent, 1> fifoEvents() const = 0;
  /** Returns 1 if the opcode is present in the EVR FIFO, otherwise 0. */
  virtual uint8_t present(uint8_t opcode) const = 0;
};

/** @class IOChannel

  
*/


class IOChannel {
public:
  enum { NameLength = 12 };
  enum { MaxInfos = 8 };
  IOChannel(const char* arg__name, uint32_t arg__ninfo, const Pds::DetInfo* arg__info)
    : _ninfo(arg__ninfo)
  {
    if (arg__name) std::copy(arg__name, arg__name+(12), &_name[0]);
    if (arg__info) std::copy(arg__info, arg__info+(8), &_info[0]);
  }
  IOChannel() {}
  const char* name() const { return _name; }
  uint32_t ninfo() const { return _ninfo; }
  /**     Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const Pds::DetInfo, 1> infos() const { return make_ndarray(&_info[0], MaxInfos); }
  static uint32_t _sizeof() { return ((((((0+(1*(NameLength)))+4)+(8*(MaxInfos)))+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by name() method. */
  std::vector<int> name_shape() const;
private:
  char	_name[NameLength];
  uint32_t	_ninfo;
  Pds::DetInfo	_info[MaxInfos];
};

/** @class IOConfigV1

  
*/


class IOConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrIOConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~IOConfigV1();
  virtual uint16_t nchannels() const = 0;
  virtual ndarray<const EvrData::IOChannel, 1> channels() const = 0;
  virtual EvrData::OutputMap::Conn conn() const = 0;
};

/** @class IOChannelV2

  
*/


class IOChannelV2 {
public:
  enum { NameLength = 64 };
  enum { MaxInfos = 16 };
  IOChannelV2(const EvrData::OutputMapV2& arg__output, const char* arg__name, uint32_t arg__ninfo, const Pds::DetInfo* arg__info)
    : _output(arg__output), _ninfo(arg__ninfo)
  {
    if (arg__name) std::copy(arg__name, arg__name+(64), &_name[0]);
    if (arg__info) std::copy(arg__info, arg__info+(16), &_info[0]);
  }
  IOChannelV2() {}
  /** Output connector */
  const EvrData::OutputMapV2& output() const { return _output; }
  /** Name of channel */
  const char* name() const { return _name; }
  /** Number of Detectors connected */
  uint32_t ninfo() const { return _ninfo; }
  /** List of Detectors connected

    Note: this method returns ndarray instance which does not control lifetime
    of the data, do not use returned ndarray after this instance disappears. */
  ndarray<const Pds::DetInfo, 1> infos() const { return make_ndarray(&_info[0], MaxInfos); }
  static uint32_t _sizeof() { return (((((((0+(EvrData::OutputMapV2::_sizeof()))+(1*(NameLength)))+4)+(8*(MaxInfos)))+4)-1)/4)*4; }
  /** Method which returns the shape (dimensions) of the data returned by name() method. */
  std::vector<int> name_shape() const;
private:
  EvrData::OutputMapV2	_output;	/**< Output connector */
  char	_name[NameLength];	/**< Name of channel */
  uint32_t	_ninfo;	/**< Number of Detectors connected */
  Pds::DetInfo	_info[MaxInfos];	/**< List of Detectors connected */
};

/** @class IOConfigV2

  
*/


class IOConfigV2 {
public:
  enum { TypeId = Pds::TypeId::Id_EvrIOConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~IOConfigV2();
  /** Number of Configured output channels */
  virtual uint32_t nchannels() const = 0;
  /** List of Configured output channels */
  virtual ndarray<const EvrData::IOChannelV2, 1> channels() const = 0;
};
} // namespace EvrData
} // namespace Psana
#endif // PSANA_EVR_DDL_H
