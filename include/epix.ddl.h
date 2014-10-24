#ifndef PSANA_EPIX_DDL_H
#define PSANA_EPIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/genericpgp.ddl.h"
namespace Psana {
namespace Epix {

/** @class AsicConfigV1

  
*/


class AsicConfigV1 {
public:
  virtual ~AsicConfigV1();
  virtual uint8_t monostPulser() const = 0;
  virtual uint8_t dummyTest() const = 0;
  virtual uint8_t dummyMask() const = 0;
  virtual uint16_t pulser() const = 0;
  virtual uint8_t pbit() const = 0;
  virtual uint8_t atest() const = 0;
  virtual uint8_t test() const = 0;
  virtual uint8_t sabTest() const = 0;
  virtual uint8_t hrTest() const = 0;
  virtual uint8_t digMon1() const = 0;
  virtual uint8_t digMon2() const = 0;
  virtual uint8_t pulserDac() const = 0;
  virtual uint8_t Dm1En() const = 0;
  virtual uint8_t Dm2En() const = 0;
  virtual uint8_t slvdSBit() const = 0;
  virtual uint8_t VRefDac() const = 0;
  virtual uint8_t TpsTComp() const = 0;
  virtual uint8_t TpsMux() const = 0;
  virtual uint8_t RoMonost() const = 0;
  virtual uint8_t TpsGr() const = 0;
  virtual uint8_t S2dGr() const = 0;
  virtual uint8_t PpOcbS2d() const = 0;
  virtual uint8_t Ocb() const = 0;
  virtual uint8_t Monost() const = 0;
  virtual uint8_t FastppEnable() const = 0;
  virtual uint8_t Preamp() const = 0;
  virtual uint8_t PixelCb() const = 0;
  virtual uint8_t S2dTComp() const = 0;
  virtual uint8_t FilterDac() const = 0;
  virtual uint8_t TC() const = 0;
  virtual uint8_t S2d() const = 0;
  virtual uint8_t S2dDacBias() const = 0;
  virtual uint8_t TpsTcDac() const = 0;
  virtual uint8_t TpsDac() const = 0;
  virtual uint8_t S2dTcDac() const = 0;
  virtual uint8_t S2dDac() const = 0;
  virtual uint8_t TestBe() const = 0;
  virtual uint8_t IsEn() const = 0;
  virtual uint8_t DelExec() const = 0;
  virtual uint8_t DelCckReg() const = 0;
  virtual uint16_t RowStartAddr() const = 0;
  virtual uint16_t RowStopAddr() const = 0;
  virtual uint8_t ColStartAddr() const = 0;
  virtual uint8_t ColStopAddr() const = 0;
  virtual uint16_t chipID() const = 0;
};

/** @class ConfigV1

  
*/


class ConfigV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EpixConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ConfigV1();
  virtual uint32_t version() const = 0;
  virtual uint32_t runTrigDelay() const = 0;
  virtual uint32_t daqTrigDelay() const = 0;
  virtual uint32_t dacSetting() const = 0;
  virtual uint8_t asicGR() const = 0;
  virtual uint8_t asicAcq() const = 0;
  virtual uint8_t asicR0() const = 0;
  virtual uint8_t asicPpmat() const = 0;
  virtual uint8_t asicPpbe() const = 0;
  virtual uint8_t asicRoClk() const = 0;
  virtual uint8_t asicGRControl() const = 0;
  virtual uint8_t asicAcqControl() const = 0;
  virtual uint8_t asicR0Control() const = 0;
  virtual uint8_t asicPpmatControl() const = 0;
  virtual uint8_t asicPpbeControl() const = 0;
  virtual uint8_t asicR0ClkControl() const = 0;
  virtual uint8_t prepulseR0En() const = 0;
  virtual uint32_t adcStreamMode() const = 0;
  virtual uint8_t testPatternEnable() const = 0;
  virtual uint32_t acqToAsicR0Delay() const = 0;
  virtual uint32_t asicR0ToAsicAcq() const = 0;
  virtual uint32_t asicAcqWidth() const = 0;
  virtual uint32_t asicAcqLToPPmatL() const = 0;
  virtual uint32_t asicRoClkHalfT() const = 0;
  virtual uint32_t adcReadsPerPixel() const = 0;
  virtual uint32_t adcClkHalfT() const = 0;
  virtual uint32_t asicR0Width() const = 0;
  virtual uint32_t adcPipelineDelay() const = 0;
  virtual uint32_t prepulseR0Width() const = 0;
  virtual uint32_t prepulseR0Delay() const = 0;
  virtual uint32_t digitalCardId0() const = 0;
  virtual uint32_t digitalCardId1() const = 0;
  virtual uint32_t analogCardId0() const = 0;
  virtual uint32_t analogCardId1() const = 0;
  virtual uint32_t lastRowExclusions() const = 0;
  virtual uint32_t numberOfAsicsPerRow() const = 0;
  virtual uint32_t numberOfAsicsPerColumn() const = 0;
  /** generally 2 x 2 */
  virtual uint32_t numberOfRowsPerAsic() const = 0;
  /** for epix100  352 */
  virtual uint32_t numberOfPixelsPerAsicRow() const = 0;
  /** for epix100 96*4 */
  virtual uint32_t baseClockFrequency() const = 0;
  virtual uint32_t asicMask() const = 0;
  virtual const Epix::AsicConfigV1& asics(uint32_t i0) const = 0;
  virtual ndarray<const uint32_t, 3> asicPixelTestArray() const = 0;
  virtual ndarray<const uint32_t, 3> asicPixelMaskArray() const = 0;
  /** Number of rows in a readout unit */
  virtual uint32_t numberOfRows() const = 0;
  /** Number of columns in a readout unit */
  virtual uint32_t numberOfColumns() const = 0;
  /** Number of columns in a readout unit */
  virtual uint32_t numberOfAsics() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by asics() method. */
  virtual std::vector<int> asics_shape() const = 0;
};

/** @class Asic10kConfigV1

  
*/


class Asic10kConfigV1 {
public:
  virtual ~Asic10kConfigV1();
  virtual uint8_t CompTH_DAC() const = 0;
  virtual uint8_t CompEn_0() const = 0;
  virtual uint8_t PulserSync() const = 0;
  virtual uint8_t dummyTest() const = 0;
  virtual uint8_t dummyMask() const = 0;
  virtual uint8_t dummyG() const = 0;
  virtual uint8_t dummyGA() const = 0;
  virtual uint16_t dummyUpper12bits() const = 0;
  virtual uint16_t pulser() const = 0;
  virtual uint8_t pbit() const = 0;
  virtual uint8_t atest() const = 0;
  virtual uint8_t test() const = 0;
  virtual uint8_t sabTest() const = 0;
  virtual uint8_t hrTest() const = 0;
  virtual uint8_t pulserR() const = 0;
  virtual uint8_t digMon1() const = 0;
  virtual uint8_t digMon2() const = 0;
  virtual uint8_t pulserDac() const = 0;
  virtual uint8_t monostPulser() const = 0;
  virtual uint8_t CompEn_1() const = 0;
  virtual uint8_t CompEn_2() const = 0;
  virtual uint8_t Dm1En() const = 0;
  virtual uint8_t Dm2En() const = 0;
  virtual uint8_t emph_bd() const = 0;
  virtual uint8_t emph_bc() const = 0;
  virtual uint8_t VRefDac() const = 0;
  virtual uint8_t vrefLow() const = 0;
  virtual uint8_t TpsTComp() const = 0;
  virtual uint8_t TpsMux() const = 0;
  virtual uint8_t RoMonost() const = 0;
  virtual uint8_t TpsGr() const = 0;
  virtual uint8_t S2dGr() const = 0;
  virtual uint8_t PpOcbS2d() const = 0;
  virtual uint8_t Ocb() const = 0;
  virtual uint8_t Monost() const = 0;
  virtual uint8_t FastppEnable() const = 0;
  virtual uint8_t Preamp() const = 0;
  virtual uint8_t PixelCb() const = 0;
  virtual uint8_t Vld1_b() const = 0;
  virtual uint8_t S2dTComp() const = 0;
  virtual uint8_t FilterDac() const = 0;
  virtual uint8_t testVDTransmitter() const = 0;
  virtual uint8_t TC() const = 0;
  virtual uint8_t S2d() const = 0;
  virtual uint8_t S2dDacBias() const = 0;
  virtual uint8_t TpsTcDac() const = 0;
  virtual uint8_t TpsDac() const = 0;
  virtual uint8_t S2dTcDac() const = 0;
  virtual uint8_t S2dDac() const = 0;
  virtual uint8_t TestBe() const = 0;
  virtual uint8_t IsEn() const = 0;
  virtual uint8_t DelExec() const = 0;
  virtual uint8_t DelCckReg() const = 0;
  virtual uint8_t RO_rst_en() const = 0;
  virtual uint8_t slvdSBit() const = 0;
  virtual uint8_t FELmode() const = 0;
  virtual uint8_t CompEnOn() const = 0;
  virtual uint16_t RowStartAddr() const = 0;
  virtual uint16_t RowStopAddr() const = 0;
  virtual uint8_t ColStartAddr() const = 0;
  virtual uint8_t ColStopAddr() const = 0;
  virtual uint16_t chipID() const = 0;
};

/** @class Config10KV1

  
*/


class Config10KV1 {
public:
  enum { TypeId = Pds::TypeId::Id_Epix10kConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~Config10KV1();
  virtual uint32_t version() const = 0;
  virtual uint32_t runTrigDelay() const = 0;
  virtual uint32_t daqTrigDelay() const = 0;
  virtual uint32_t dacSetting() const = 0;
  virtual uint8_t asicGR() const = 0;
  virtual uint8_t asicAcq() const = 0;
  virtual uint8_t asicR0() const = 0;
  virtual uint8_t asicPpmat() const = 0;
  virtual uint8_t asicPpbe() const = 0;
  virtual uint8_t asicRoClk() const = 0;
  virtual uint8_t asicGRControl() const = 0;
  virtual uint8_t asicAcqControl() const = 0;
  virtual uint8_t asicR0Control() const = 0;
  virtual uint8_t asicPpmatControl() const = 0;
  virtual uint8_t asicPpbeControl() const = 0;
  virtual uint8_t asicR0ClkControl() const = 0;
  virtual uint8_t prepulseR0En() const = 0;
  virtual uint32_t adcStreamMode() const = 0;
  virtual uint8_t testPatternEnable() const = 0;
  /** new */
  virtual uint8_t SyncMode() const = 0;
  /** new */
  virtual uint8_t R0Mode() const = 0;
  /** new */
  virtual uint32_t DoutPipelineDelay() const = 0;
  virtual uint32_t acqToAsicR0Delay() const = 0;
  virtual uint32_t asicR0ToAsicAcq() const = 0;
  virtual uint32_t asicAcqWidth() const = 0;
  virtual uint32_t asicAcqLToPPmatL() const = 0;
  virtual uint32_t asicRoClkHalfT() const = 0;
  virtual uint32_t adcReadsPerPixel() const = 0;
  virtual uint32_t adcClkHalfT() const = 0;
  virtual uint32_t asicR0Width() const = 0;
  virtual uint32_t adcPipelineDelay() const = 0;
  /** new */
  virtual uint16_t SyncWidth() const = 0;
  /** new */
  virtual uint16_t SyncDelay() const = 0;
  virtual uint32_t prepulseR0Width() const = 0;
  virtual uint32_t prepulseR0Delay() const = 0;
  virtual uint32_t digitalCardId0() const = 0;
  virtual uint32_t digitalCardId1() const = 0;
  virtual uint32_t analogCardId0() const = 0;
  virtual uint32_t analogCardId1() const = 0;
  virtual uint32_t lastRowExclusions() const = 0;
  virtual uint32_t numberOfAsicsPerRow() const = 0;
  virtual uint32_t numberOfAsicsPerColumn() const = 0;
  virtual uint32_t numberOfRowsPerAsic() const = 0;
  /** for epix10k  176 */
  virtual uint32_t numberOfPixelsPerAsicRow() const = 0;
  /** for epix10k 48*4 */
  virtual uint32_t baseClockFrequency() const = 0;
  virtual uint32_t asicMask() const = 0;
  virtual uint8_t scopeEnable() const = 0;
  virtual uint8_t scopeTrigEdge() const = 0;
  virtual uint8_t scopeTrigChan() const = 0;
  virtual uint8_t scopeArmMode() const = 0;
  virtual uint16_t scopeADCThreshold() const = 0;
  virtual uint16_t scopeTrigHoldoff() const = 0;
  virtual uint16_t scopeTrigOffset() const = 0;
  virtual uint16_t scopeTraceLength() const = 0;
  virtual uint16_t scopeADCsameplesToSkip() const = 0;
  virtual uint8_t scopeChanAwaveformSelect() const = 0;
  virtual uint8_t scopeChanBwaveformSelect() const = 0;
  virtual const Epix::Asic10kConfigV1& asics(uint32_t i0) const = 0;
  virtual ndarray<const uint16_t, 3> asicPixelConfigArray() const = 0;
  /** Number of rows in a readout unit */
  virtual uint32_t numberOfRows() const = 0;
  /** Number of columns in a readout unit */
  virtual uint32_t numberOfColumns() const = 0;
  /** Number of columns in a readout unit */
  virtual uint32_t numberOfAsics() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by asics() method. */
  virtual std::vector<int> asics_shape() const = 0;
};

/** @class Asic100aConfigV1

  
*/


class Asic100aConfigV1 {
public:
  virtual ~Asic100aConfigV1();
  virtual uint8_t pulserVsPixelOnDelay() const = 0;
  virtual uint8_t pulserSync() const = 0;
  virtual uint8_t dummyTest() const = 0;
  virtual uint8_t dummyMask() const = 0;
  virtual uint16_t testPulserLevel() const = 0;
  virtual uint8_t pulserCounterDirection() const = 0;
  virtual uint8_t automaticTestModeEnable() const = 0;
  virtual uint8_t testMode() const = 0;
  virtual uint8_t testModeWithDarkFrame() const = 0;
  virtual uint8_t highResolutionModeTest() const = 0;
  virtual uint8_t pulserReset() const = 0;
  virtual uint8_t digitalMonitorMux1() const = 0;
  virtual uint8_t digitalMonitorMux2() const = 0;
  virtual uint8_t testPulserCurrent() const = 0;
  virtual uint8_t testPointSystemOutputDynamicRange() const = 0;
  virtual uint8_t digitalMonitor1Enable() const = 0;
  virtual uint8_t digitalMonitor2Enable() const = 0;
  virtual uint8_t LVDS_ImpedenceMatchingEnable() const = 0;
  virtual uint8_t VRefBaselineDac() const = 0;
  virtual uint8_t extraRowsLowReferenceValue() const = 0;
  virtual uint8_t testPointSystemTemperatureCompensationEnable() const = 0;
  virtual uint8_t testPointSytemInputSelect() const = 0;
  virtual uint8_t programmableReadoutDelay() const = 0;
  virtual uint8_t outputDriverOutputDynamicRange0() const = 0;
  virtual uint8_t outputDriverOutputDynamicRange1() const = 0;
  virtual uint8_t balconyEnable() const = 0;
  virtual uint8_t balconyDriverCurrent() const = 0;
  virtual uint8_t fastPowerPulsingSpeed() const = 0;
  virtual uint8_t fastPowerPulsingEnable() const = 0;
  virtual uint8_t preamplifierCurrent() const = 0;
  virtual uint8_t pixelOutputBufferCurrent() const = 0;
  virtual uint8_t pixelBufferAndPreamplifierDrivingCapabilities() const = 0;
  virtual uint8_t outputDriverTemperatureCompensationEnable() const = 0;
  virtual uint8_t pixelFilterLevel() const = 0;
  virtual uint8_t bandGapReferenceTemperatureCompensationBits() const = 0;
  virtual uint8_t outputDriverDrivingCapabilitiesAndStability() const = 0;
  virtual uint8_t outputDriverDacReferenceBias() const = 0;
  virtual uint8_t testPointSystemTemperatureCompensationGain() const = 0;
  virtual uint8_t testPointSystemInputCommonMode() const = 0;
  virtual uint8_t outputDriverTemperatureCompensationGain0() const = 0;
  virtual uint8_t outputDriverInputCommonMode0() const = 0;
  virtual uint8_t testBackEnd() const = 0;
  virtual uint8_t interleavedReadOutEnable() const = 0;
  virtual uint8_t EXEC_DelayEnable() const = 0;
  virtual uint8_t CCK_RegDelayEnable() const = 0;
  virtual uint8_t syncPinEnable() const = 0;
  virtual uint16_t RowStartAddr() const = 0;
  virtual uint16_t RowStopAddr() const = 0;
  virtual uint8_t ColumnStartAddr() const = 0;
  virtual uint8_t ColumnStopAddr() const = 0;
  virtual uint16_t chipID() const = 0;
  virtual uint8_t outputDriverOutputDynamicRange2() const = 0;
  virtual uint8_t outputDriverOutputDynamicRange3() const = 0;
  virtual uint8_t outputDriverTemperatureCompensationGain1() const = 0;
  virtual uint8_t outputDriverInputCommonMode1() const = 0;
  virtual uint8_t outputDriverTemperatureCompensationGain2() const = 0;
  virtual uint8_t outputDriverInputCommonMode2() const = 0;
  virtual uint8_t outputDriverTemperatureCompensationGain3() const = 0;
  virtual uint8_t outputDriverInputCommonMode3() const = 0;
};

/** @class Config100aV1

  
*/


class Config100aV1 {
public:
  enum { TypeId = Pds::TypeId::Id_Epix100aConfig /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~Config100aV1();
  virtual uint32_t version() const = 0;
  virtual uint32_t runTrigDelay() const = 0;
  virtual uint32_t daqTrigDelay() const = 0;
  virtual uint32_t dacSetting() const = 0;
  virtual uint8_t asicGR() const = 0;
  virtual uint8_t asicAcq() const = 0;
  virtual uint8_t asicR0() const = 0;
  virtual uint8_t asicPpmat() const = 0;
  virtual uint8_t asicPpbe() const = 0;
  virtual uint8_t asicRoClk() const = 0;
  virtual uint8_t asicGRControl() const = 0;
  virtual uint8_t asicAcqControl() const = 0;
  virtual uint8_t asicR0Control() const = 0;
  virtual uint8_t asicPpmatControl() const = 0;
  virtual uint8_t asicPpbeControl() const = 0;
  virtual uint8_t asicR0ClkControl() const = 0;
  virtual uint8_t prepulseR0En() const = 0;
  virtual uint32_t adcStreamMode() const = 0;
  virtual uint8_t testPatternEnable() const = 0;
  virtual uint8_t SyncMode() const = 0;
  virtual uint8_t R0Mode() const = 0;
  virtual uint32_t acqToAsicR0Delay() const = 0;
  virtual uint32_t asicR0ToAsicAcq() const = 0;
  virtual uint32_t asicAcqWidth() const = 0;
  virtual uint32_t asicAcqLToPPmatL() const = 0;
  virtual uint32_t asicPPmatToReadout() const = 0;
  virtual uint32_t asicRoClkHalfT() const = 0;
  virtual uint32_t adcReadsPerPixel() const = 0;
  virtual uint32_t adcClkHalfT() const = 0;
  virtual uint32_t asicR0Width() const = 0;
  virtual uint32_t adcPipelineDelay() const = 0;
  virtual uint16_t SyncWidth() const = 0;
  virtual uint16_t SyncDelay() const = 0;
  virtual uint32_t prepulseR0Width() const = 0;
  virtual uint32_t prepulseR0Delay() const = 0;
  virtual uint32_t digitalCardId0() const = 0;
  virtual uint32_t digitalCardId1() const = 0;
  virtual uint32_t analogCardId0() const = 0;
  virtual uint32_t analogCardId1() const = 0;
  virtual uint32_t numberOfAsicsPerRow() const = 0;
  virtual uint32_t numberOfAsicsPerColumn() const = 0;
  virtual uint32_t numberOfRowsPerAsic() const = 0;
  virtual uint32_t numberOfReadableRowsPerAsic() const = 0;
  /** for epix100a  352 */
  virtual uint32_t numberOfPixelsPerAsicRow() const = 0;
  /** for epix100a 96*4 = 384 */
  virtual uint32_t calibrationRowCountPerASIC() const = 0;
  virtual uint32_t environmentalRowCountPerASIC() const = 0;
  virtual uint32_t baseClockFrequency() const = 0;
  virtual uint32_t asicMask() const = 0;
  virtual uint8_t scopeEnable() const = 0;
  virtual uint8_t scopeTrigEdge() const = 0;
  virtual uint8_t scopeTrigChan() const = 0;
  virtual uint8_t scopeArmMode() const = 0;
  virtual uint16_t scopeADCThreshold() const = 0;
  virtual uint16_t scopeTrigHoldoff() const = 0;
  virtual uint16_t scopeTrigOffset() const = 0;
  virtual uint16_t scopeTraceLength() const = 0;
  virtual uint16_t scopeADCsameplesToSkip() const = 0;
  virtual uint8_t scopeChanAwaveformSelect() const = 0;
  virtual uint8_t scopeChanBwaveformSelect() const = 0;
  virtual const Epix::Asic100aConfigV1& asics(uint32_t i0) const = 0;
  virtual ndarray<const uint16_t, 2> asicPixelConfigArray() const = 0;
  /** Calibration row config map is one row for every two calib rows */
  virtual ndarray<const uint8_t, 2> calibPixelConfigArray() const = 0;
  /** Number of pixel rows in a readout unit */
  virtual uint32_t numberOfRows() const = 0;
  /** Number of readable pixel rows in a readout unit */
  virtual uint32_t numberOfReadableRows() const = 0;
  /** Number of pixel columns in a readout unit */
  virtual uint32_t numberOfColumns() const = 0;
  /** Number of calibration rows in a readout unit */
  virtual uint32_t numberOfCalibrationRows() const = 0;
  /** Number of rows in a readout unit */
  virtual uint32_t numberOfEnvironmentalRows() const = 0;
  /** Number of columns in a readout unit */
  virtual uint32_t numberOfAsics() const = 0;
  /** Method which returns the shape (dimensions) of the data returned by asics() method. */
  virtual std::vector<int> asics_shape() const = 0;
};

/** @class ElementV1

  
*/

class ConfigV1;
class Config10KV1;

class ElementV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EpixElement /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~ElementV1();
  virtual uint8_t vc() const = 0;
  virtual uint8_t lane() const = 0;
  virtual uint16_t acqCount() const = 0;
  virtual uint32_t frameNumber() const = 0;
  virtual uint32_t ticks() const = 0;
  virtual uint32_t fiducials() const = 0;
  virtual ndarray<const uint16_t, 2> frame() const = 0;
  virtual ndarray<const uint16_t, 2> excludedRows() const = 0;
  virtual ndarray<const uint16_t, 1> temperatures() const = 0;
  virtual uint32_t lastWord() const = 0;
};

/** @class ElementV2

  
*/

class Config100aV1;

class ElementV2 {
public:
  enum { TypeId = Pds::TypeId::Id_EpixElement /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };
  virtual ~ElementV2();
  virtual uint8_t vc() const = 0;
  virtual uint8_t lane() const = 0;
  virtual uint16_t acqCount() const = 0;
  virtual uint32_t frameNumber() const = 0;
  virtual uint32_t ticks() const = 0;
  virtual uint32_t fiducials() const = 0;
  virtual ndarray<const uint16_t, 2> frame() const = 0;
  virtual ndarray<const uint16_t, 2> calibrationRows() const = 0;
  virtual ndarray<const uint16_t, 2> environmentalRows() const = 0;
  virtual ndarray<const uint16_t, 1> temperatures() const = 0;
  virtual uint32_t lastWord() const = 0;
};
} // namespace Epix
} // namespace Psana
#endif // PSANA_EPIX_DDL_H
