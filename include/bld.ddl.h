#ifndef PSANA_BLD_DDL_H
#define PSANA_BLD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <iosfwd>
#include <cstring>
#include "ndarray/ndarray.h"
#include "pdsdata/xtc/TypeId.hh"
#include "psddl_psana/acqiris.ddl.h"
#include "psddl_psana/camera.ddl.h"
#include "psddl_psana/ipimb.ddl.h"
#include "psddl_psana/lusi.ddl.h"
#include "psddl_psana/pulnix.ddl.h"
namespace Psana {
namespace Bld {

/** @class BldDataFEEGasDetEnergy

  Four energy measurements from Front End Enclosure Gas Detector.
               PV names: GDET:FEE1:11:ENRC, GDET:FEE1:12:ENRC, GDET:FEE1:21:ENRC, GDET:FEE1:22:ENRC.
*/


class BldDataFEEGasDetEnergy {
public:
  enum { TypeId = Pds::TypeId::Id_FEEGasDetEnergy /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  BldDataFEEGasDetEnergy(double arg__f_11_ENRC, double arg__f_12_ENRC, double arg__f_21_ENRC, double arg__f_22_ENRC)
    : _f_11_ENRC(arg__f_11_ENRC), _f_12_ENRC(arg__f_12_ENRC), _f_21_ENRC(arg__f_21_ENRC), _f_22_ENRC(arg__f_22_ENRC)
  {
  }
  BldDataFEEGasDetEnergy() {}
  /** Value of GDET:FEE1:11:ENRC, in mJ. */
  double f_11_ENRC() const { return _f_11_ENRC; }
  /** Value of GDET:FEE1:12:ENRC, in mJ. */
  double f_12_ENRC() const { return _f_12_ENRC; }
  /** Value of GDET:FEE1:21:ENRC, in mJ. */
  double f_21_ENRC() const { return _f_21_ENRC; }
  /** Value of GDET:FEE1:22:ENRC, in mJ. */
  double f_22_ENRC() const { return _f_22_ENRC; }
  static uint32_t _sizeof() { return 32; }
private:
  double	_f_11_ENRC;	/**< Value of GDET:FEE1:11:ENRC, in mJ. */
  double	_f_12_ENRC;	/**< Value of GDET:FEE1:12:ENRC, in mJ. */
  double	_f_21_ENRC;	/**< Value of GDET:FEE1:21:ENRC, in mJ. */
  double	_f_22_ENRC;	/**< Value of GDET:FEE1:22:ENRC, in mJ. */
};

/** @class BldDataEBeamV0

  Beam parameters.
*/


class BldDataEBeamV0 {
public:
  enum { TypeId = Pds::TypeId::Id_EBeam /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };

  /** Constants defining bit mask for individual damage bits in value returned from damageMask() */
  enum DamageMask {
    EbeamChargeDamage = 0x001,
    EbeamL3EnergyDamage = 0x002,
    EbeamLTUPosXDamage = 0x004,
    EbeamLTUPosYDamage = 0x008,
    EbeamLTUAngXDamage = 0x010,
    EbeamLTUAngYDamage = 0x020,
  };
  BldDataEBeamV0(uint32_t arg__uDamageMask, double arg__fEbeamCharge, double arg__fEbeamL3Energy, double arg__fEbeamLTUPosX, double arg__fEbeamLTUPosY, double arg__fEbeamLTUAngX, double arg__fEbeamLTUAngY)
    : _uDamageMask(arg__uDamageMask), _fEbeamCharge(arg__fEbeamCharge), _fEbeamL3Energy(arg__fEbeamL3Energy), _fEbeamLTUPosX(arg__fEbeamLTUPosX), _fEbeamLTUPosY(arg__fEbeamLTUPosY), _fEbeamLTUAngX(arg__fEbeamLTUAngX), _fEbeamLTUAngY(arg__fEbeamLTUAngY)
  {
  }
  BldDataEBeamV0() {}
  /** Damage mask. */
  uint32_t damageMask() const { return _uDamageMask; }
  /** Beam charge in nC. */
  double ebeamCharge() const { return _fEbeamCharge; }
  /** Beam energy in MeV. */
  double ebeamL3Energy() const { return _fEbeamL3Energy; }
  /** LTU beam position in mm. */
  double ebeamLTUPosX() const { return _fEbeamLTUPosX; }
  /** LTU beam position in mm. */
  double ebeamLTUPosY() const { return _fEbeamLTUPosY; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngX() const { return _fEbeamLTUAngX; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngY() const { return _fEbeamLTUAngY; }
  static uint32_t _sizeof() { return 52; }
private:
  uint32_t	_uDamageMask;	/**< Damage mask. */
  double	_fEbeamCharge;	/**< Beam charge in nC. */
  double	_fEbeamL3Energy;	/**< Beam energy in MeV. */
  double	_fEbeamLTUPosX;	/**< LTU beam position in mm. */
  double	_fEbeamLTUPosY;	/**< LTU beam position in mm. */
  double	_fEbeamLTUAngX;	/**< LTU beam angle in mrad. */
  double	_fEbeamLTUAngY;	/**< LTU beam angle in mrad. */
};
std::ostream& operator<<(std::ostream& str, Bld::BldDataEBeamV0::DamageMask enval);

/** @class BldDataEBeamV1

  
*/


class BldDataEBeamV1 {
public:
  enum { TypeId = Pds::TypeId::Id_EBeam /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };

  /** Constants defining bit mask for individual damage bits in value returned from damageMask() */
  enum DamageMask {
    EbeamChargeDamage = 0x001,
    EbeamL3EnergyDamage = 0x002,
    EbeamLTUPosXDamage = 0x004,
    EbeamLTUPosYDamage = 0x008,
    EbeamLTUAngXDamage = 0x010,
    EbeamLTUAngYDamage = 0x020,
    EbeamPkCurrBC2Damage = 0x040,
  };
  BldDataEBeamV1(uint32_t arg__uDamageMask, double arg__fEbeamCharge, double arg__fEbeamL3Energy, double arg__fEbeamLTUPosX, double arg__fEbeamLTUPosY, double arg__fEbeamLTUAngX, double arg__fEbeamLTUAngY, double arg__fEbeamPkCurrBC2)
    : _uDamageMask(arg__uDamageMask), _fEbeamCharge(arg__fEbeamCharge), _fEbeamL3Energy(arg__fEbeamL3Energy), _fEbeamLTUPosX(arg__fEbeamLTUPosX), _fEbeamLTUPosY(arg__fEbeamLTUPosY), _fEbeamLTUAngX(arg__fEbeamLTUAngX), _fEbeamLTUAngY(arg__fEbeamLTUAngY), _fEbeamPkCurrBC2(arg__fEbeamPkCurrBC2)
  {
  }
  BldDataEBeamV1() {}
  /** Damage mask. */
  uint32_t damageMask() const { return _uDamageMask; }
  /** Beam charge in nC. */
  double ebeamCharge() const { return _fEbeamCharge; }
  /** Beam energy in MeV. */
  double ebeamL3Energy() const { return _fEbeamL3Energy; }
  /** LTU beam position in mm. */
  double ebeamLTUPosX() const { return _fEbeamLTUPosX; }
  /** LTU beam position in mm. */
  double ebeamLTUPosY() const { return _fEbeamLTUPosY; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngX() const { return _fEbeamLTUAngX; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngY() const { return _fEbeamLTUAngY; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC2() const { return _fEbeamPkCurrBC2; }
  static uint32_t _sizeof() { return 60; }
private:
  uint32_t	_uDamageMask;	/**< Damage mask. */
  double	_fEbeamCharge;	/**< Beam charge in nC. */
  double	_fEbeamL3Energy;	/**< Beam energy in MeV. */
  double	_fEbeamLTUPosX;	/**< LTU beam position in mm. */
  double	_fEbeamLTUPosY;	/**< LTU beam position in mm. */
  double	_fEbeamLTUAngX;	/**< LTU beam angle in mrad. */
  double	_fEbeamLTUAngY;	/**< LTU beam angle in mrad. */
  double	_fEbeamPkCurrBC2;	/**< Beam current in Amps. */
};
std::ostream& operator<<(std::ostream& str, Bld::BldDataEBeamV1::DamageMask enval);

/** @class BldDataEBeamV2

  
*/


class BldDataEBeamV2 {
public:
  enum { TypeId = Pds::TypeId::Id_EBeam /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 2 /**< XTC type version number */ };

  /** Constants defining bit mask for individual damage bits in value returned from damageMask() */
  enum DamageMask {
    EbeamChargeDamage = 0x001,
    EbeamL3EnergyDamage = 0x002,
    EbeamLTUPosXDamage = 0x004,
    EbeamLTUPosYDamage = 0x008,
    EbeamLTUAngXDamage = 0x010,
    EbeamLTUAngYDamage = 0x020,
    EbeamPkCurrBC2Damage = 0x040,
    EbeamEnergyBC2Damage = 0x080,
  };
  BldDataEBeamV2(uint32_t arg__uDamageMask, double arg__fEbeamCharge, double arg__fEbeamL3Energy, double arg__fEbeamLTUPosX, double arg__fEbeamLTUPosY, double arg__fEbeamLTUAngX, double arg__fEbeamLTUAngY, double arg__fEbeamPkCurrBC2, double arg__fEbeamEnergyBC2)
    : _uDamageMask(arg__uDamageMask), _fEbeamCharge(arg__fEbeamCharge), _fEbeamL3Energy(arg__fEbeamL3Energy), _fEbeamLTUPosX(arg__fEbeamLTUPosX), _fEbeamLTUPosY(arg__fEbeamLTUPosY), _fEbeamLTUAngX(arg__fEbeamLTUAngX), _fEbeamLTUAngY(arg__fEbeamLTUAngY), _fEbeamPkCurrBC2(arg__fEbeamPkCurrBC2), _fEbeamEnergyBC2(arg__fEbeamEnergyBC2)
  {
  }
  BldDataEBeamV2() {}
  /** Damage mask. */
  uint32_t damageMask() const { return _uDamageMask; }
  /** Beam charge in nC. */
  double ebeamCharge() const { return _fEbeamCharge; }
  /** Beam energy in MeV. */
  double ebeamL3Energy() const { return _fEbeamL3Energy; }
  /** LTU beam position in mm. */
  double ebeamLTUPosX() const { return _fEbeamLTUPosX; }
  /** LTU beam position in mm. */
  double ebeamLTUPosY() const { return _fEbeamLTUPosY; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngX() const { return _fEbeamLTUAngX; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngY() const { return _fEbeamLTUAngY; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC2() const { return _fEbeamPkCurrBC2; }
  /** Beam energy in MeV. */
  double ebeamEnergyBC2() const { return _fEbeamEnergyBC2; }
  static uint32_t _sizeof() { return 68; }
private:
  uint32_t	_uDamageMask;	/**< Damage mask. */
  double	_fEbeamCharge;	/**< Beam charge in nC. */
  double	_fEbeamL3Energy;	/**< Beam energy in MeV. */
  double	_fEbeamLTUPosX;	/**< LTU beam position in mm. */
  double	_fEbeamLTUPosY;	/**< LTU beam position in mm. */
  double	_fEbeamLTUAngX;	/**< LTU beam angle in mrad. */
  double	_fEbeamLTUAngY;	/**< LTU beam angle in mrad. */
  double	_fEbeamPkCurrBC2;	/**< Beam current in Amps. */
  double	_fEbeamEnergyBC2;	/**< Beam energy in MeV. */
};
std::ostream& operator<<(std::ostream& str, Bld::BldDataEBeamV2::DamageMask enval);

/** @class BldDataEBeamV3

  
*/


class BldDataEBeamV3 {
public:
  enum { TypeId = Pds::TypeId::Id_EBeam /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 3 /**< XTC type version number */ };

  /** Constants defining bit mask for individual damage bits in value returned from damageMask() */
  enum DamageMask {
    EbeamChargeDamage = 0x001,
    EbeamL3EnergyDamage = 0x002,
    EbeamLTUPosXDamage = 0x004,
    EbeamLTUPosYDamage = 0x008,
    EbeamLTUAngXDamage = 0x010,
    EbeamLTUAngYDamage = 0x020,
    EbeamPkCurrBC2Damage = 0x040,
    EbeamEnergyBC2Damage = 0x080,
    EbeamPkCurrBC1Damage = 0x100,
    EbeamEnergyBC1Damage = 0x200,
  };
  BldDataEBeamV3(uint32_t arg__uDamageMask, double arg__fEbeamCharge, double arg__fEbeamL3Energy, double arg__fEbeamLTUPosX, double arg__fEbeamLTUPosY, double arg__fEbeamLTUAngX, double arg__fEbeamLTUAngY, double arg__fEbeamPkCurrBC2, double arg__fEbeamEnergyBC2, double arg__fEbeamPkCurrBC1, double arg__fEbeamEnergyBC1)
    : _uDamageMask(arg__uDamageMask), _fEbeamCharge(arg__fEbeamCharge), _fEbeamL3Energy(arg__fEbeamL3Energy), _fEbeamLTUPosX(arg__fEbeamLTUPosX), _fEbeamLTUPosY(arg__fEbeamLTUPosY), _fEbeamLTUAngX(arg__fEbeamLTUAngX), _fEbeamLTUAngY(arg__fEbeamLTUAngY), _fEbeamPkCurrBC2(arg__fEbeamPkCurrBC2), _fEbeamEnergyBC2(arg__fEbeamEnergyBC2), _fEbeamPkCurrBC1(arg__fEbeamPkCurrBC1), _fEbeamEnergyBC1(arg__fEbeamEnergyBC1)
  {
  }
  BldDataEBeamV3() {}
  /** Damage mask. */
  uint32_t damageMask() const { return _uDamageMask; }
  /** Beam charge in nC. */
  double ebeamCharge() const { return _fEbeamCharge; }
  /** Beam energy in MeV. */
  double ebeamL3Energy() const { return _fEbeamL3Energy; }
  /** LTU beam position in mm. */
  double ebeamLTUPosX() const { return _fEbeamLTUPosX; }
  /** LTU beam position in mm. */
  double ebeamLTUPosY() const { return _fEbeamLTUPosY; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngX() const { return _fEbeamLTUAngX; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngY() const { return _fEbeamLTUAngY; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC2() const { return _fEbeamPkCurrBC2; }
  /** Beam position in mm (related to beam energy). */
  double ebeamEnergyBC2() const { return _fEbeamEnergyBC2; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC1() const { return _fEbeamPkCurrBC1; }
  /** Beam position in mm (related to beam energy). */
  double ebeamEnergyBC1() const { return _fEbeamEnergyBC1; }
  static uint32_t _sizeof() { return 84; }
private:
  uint32_t	_uDamageMask;	/**< Damage mask. */
  double	_fEbeamCharge;	/**< Beam charge in nC. */
  double	_fEbeamL3Energy;	/**< Beam energy in MeV. */
  double	_fEbeamLTUPosX;	/**< LTU beam position in mm. */
  double	_fEbeamLTUPosY;	/**< LTU beam position in mm. */
  double	_fEbeamLTUAngX;	/**< LTU beam angle in mrad. */
  double	_fEbeamLTUAngY;	/**< LTU beam angle in mrad. */
  double	_fEbeamPkCurrBC2;	/**< Beam current in Amps. */
  double	_fEbeamEnergyBC2;	/**< Beam position in mm (related to beam energy). */
  double	_fEbeamPkCurrBC1;	/**< Beam current in Amps. */
  double	_fEbeamEnergyBC1;	/**< Beam position in mm (related to beam energy). */
};
std::ostream& operator<<(std::ostream& str, Bld::BldDataEBeamV3::DamageMask enval);

/** @class BldDataEBeamV4

  
*/


class BldDataEBeamV4 {
public:
  enum { TypeId = Pds::TypeId::Id_EBeam /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 4 /**< XTC type version number */ };

  /** Constants defining bit mask for individual damage bits in value returned from damageMask() */
  enum DamageMask {
    EbeamChargeDamage = 0x001,
    EbeamL3EnergyDamage = 0x002,
    EbeamLTUPosXDamage = 0x004,
    EbeamLTUPosYDamage = 0x008,
    EbeamLTUAngXDamage = 0x010,
    EbeamLTUAngYDamage = 0x020,
    EbeamPkCurrBC2Damage = 0x040,
    EbeamEnergyBC2Damage = 0x080,
    EbeamPkCurrBC1Damage = 0x100,
    EbeamEnergyBC1Damage = 0x200,
    EbeamUndPosXDamage = 0x400,
    EbeamUndPosYDamage = 0x800,
    EbeamUndAngXDamage = 0x1000,
    EbeamUndAngYDamage = 0x2000,
  };
  BldDataEBeamV4(uint32_t arg__uDamageMask, double arg__fEbeamCharge, double arg__fEbeamL3Energy, double arg__fEbeamLTUPosX, double arg__fEbeamLTUPosY, double arg__fEbeamLTUAngX, double arg__fEbeamLTUAngY, double arg__fEbeamPkCurrBC2, double arg__fEbeamEnergyBC2, double arg__fEbeamPkCurrBC1, double arg__fEbeamEnergyBC1, double arg__fEbeamUndPosX, double arg__fEbeamUndPosY, double arg__fEbeamUndAngX, double arg__fEbeamUndAngY)
    : _uDamageMask(arg__uDamageMask), _fEbeamCharge(arg__fEbeamCharge), _fEbeamL3Energy(arg__fEbeamL3Energy), _fEbeamLTUPosX(arg__fEbeamLTUPosX), _fEbeamLTUPosY(arg__fEbeamLTUPosY), _fEbeamLTUAngX(arg__fEbeamLTUAngX), _fEbeamLTUAngY(arg__fEbeamLTUAngY), _fEbeamPkCurrBC2(arg__fEbeamPkCurrBC2), _fEbeamEnergyBC2(arg__fEbeamEnergyBC2), _fEbeamPkCurrBC1(arg__fEbeamPkCurrBC1), _fEbeamEnergyBC1(arg__fEbeamEnergyBC1), _fEbeamUndPosX(arg__fEbeamUndPosX), _fEbeamUndPosY(arg__fEbeamUndPosY), _fEbeamUndAngX(arg__fEbeamUndAngX), _fEbeamUndAngY(arg__fEbeamUndAngY)
  {
  }
  BldDataEBeamV4() {}
  /** Damage mask. */
  uint32_t damageMask() const { return _uDamageMask; }
  /** Beam charge in nC. */
  double ebeamCharge() const { return _fEbeamCharge; }
  /** Beam energy in MeV. */
  double ebeamL3Energy() const { return _fEbeamL3Energy; }
  /** LTU beam position (BPMS:LTU1:720 through 750) in mm. */
  double ebeamLTUPosX() const { return _fEbeamLTUPosX; }
  /** LTU beam position in mm. */
  double ebeamLTUPosY() const { return _fEbeamLTUPosY; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngX() const { return _fEbeamLTUAngX; }
  /** LTU beam angle in mrad. */
  double ebeamLTUAngY() const { return _fEbeamLTUAngY; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC2() const { return _fEbeamPkCurrBC2; }
  /** Beam position in mm (related to beam energy). */
  double ebeamEnergyBC2() const { return _fEbeamEnergyBC2; }
  /** Beam current in Amps. */
  double ebeamPkCurrBC1() const { return _fEbeamPkCurrBC1; }
  /** Beam position in mm (related to beam energy). */
  double ebeamEnergyBC1() const { return _fEbeamEnergyBC1; }
  /** Undulator launch feedback (BPMs U4 through U10) beam x-position in mm. */
  double ebeamUndPosX() const { return _fEbeamUndPosX; }
  /** Undulator launch feedback beam y-position in mm. */
  double ebeamUndPosY() const { return _fEbeamUndPosY; }
  /** Undulator launch feedback beam x-angle in mrad. */
  double ebeamUndAngX() const { return _fEbeamUndAngX; }
  /** Undulator launch feedback beam y-angle in mrad. */
  double ebeamUndAngY() const { return _fEbeamUndAngY; }
  static uint32_t _sizeof() { return 116; }
private:
  uint32_t	_uDamageMask;	/**< Damage mask. */
  double	_fEbeamCharge;	/**< Beam charge in nC. */
  double	_fEbeamL3Energy;	/**< Beam energy in MeV. */
  double	_fEbeamLTUPosX;	/**< LTU beam position (BPMS:LTU1:720 through 750) in mm. */
  double	_fEbeamLTUPosY;	/**< LTU beam position in mm. */
  double	_fEbeamLTUAngX;	/**< LTU beam angle in mrad. */
  double	_fEbeamLTUAngY;	/**< LTU beam angle in mrad. */
  double	_fEbeamPkCurrBC2;	/**< Beam current in Amps. */
  double	_fEbeamEnergyBC2;	/**< Beam position in mm (related to beam energy). */
  double	_fEbeamPkCurrBC1;	/**< Beam current in Amps. */
  double	_fEbeamEnergyBC1;	/**< Beam position in mm (related to beam energy). */
  double	_fEbeamUndPosX;	/**< Undulator launch feedback (BPMs U4 through U10) beam x-position in mm. */
  double	_fEbeamUndPosY;	/**< Undulator launch feedback beam y-position in mm. */
  double	_fEbeamUndAngX;	/**< Undulator launch feedback beam x-angle in mrad. */
  double	_fEbeamUndAngY;	/**< Undulator launch feedback beam y-angle in mrad. */
};
std::ostream& operator<<(std::ostream& str, Bld::BldDataEBeamV4::DamageMask enval);

/** @class BldDataPhaseCavity

  PV names: UND:R02:IOC:16:BAT:FitTime1, UND:R02:IOC:16:BAT:FitTime2, 
                UND:R02:IOC:16:BAT:Charge1,  UND:R02:IOC:16:BAT:Charge2
*/


class BldDataPhaseCavity {
public:
  enum { TypeId = Pds::TypeId::Id_PhaseCavity /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  BldDataPhaseCavity(double arg__fFitTime1, double arg__fFitTime2, double arg__fCharge1, double arg__fCharge2)
    : _fFitTime1(arg__fFitTime1), _fFitTime2(arg__fFitTime2), _fCharge1(arg__fCharge1), _fCharge2(arg__fCharge2)
  {
  }
  BldDataPhaseCavity() {}
  /** UND:R02:IOC:16:BAT:FitTime1 value in pico-seconds. */
  double fitTime1() const { return _fFitTime1; }
  /** UND:R02:IOC:16:BAT:FitTime2 value in pico-seconds. */
  double fitTime2() const { return _fFitTime2; }
  /** UND:R02:IOC:16:BAT:Charge1 value in pico-columbs. */
  double charge1() const { return _fCharge1; }
  /** UND:R02:IOC:16:BAT:Charge2 value in pico-columbs. */
  double charge2() const { return _fCharge2; }
  static uint32_t _sizeof() { return 32; }
private:
  double	_fFitTime1;	/**< UND:R02:IOC:16:BAT:FitTime1 value in pico-seconds. */
  double	_fFitTime2;	/**< UND:R02:IOC:16:BAT:FitTime2 value in pico-seconds. */
  double	_fCharge1;	/**< UND:R02:IOC:16:BAT:Charge1 value in pico-columbs. */
  double	_fCharge2;	/**< UND:R02:IOC:16:BAT:Charge2 value in pico-columbs. */
};

/** @class BldDataIpimbV0

  Combined structure which includes Ipimb.DataV1, Ipimb.ConfigV1, and 
            Lusi.IpmFexV1 objects.
*/


class BldDataIpimbV0 {
public:
  enum { TypeId = Pds::TypeId::Id_SharedIpimb /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  virtual ~BldDataIpimbV0();
  virtual const Ipimb::DataV1& ipimbData() const = 0;
  virtual const Ipimb::ConfigV1& ipimbConfig() const = 0;
  virtual const Lusi::IpmFexV1& ipmFexData() const = 0;
};

/** @class BldDataIpimbV1

  Combined structure which includes Ipimb.DataV2, Ipimb.ConfigV2, and 
            Lusi.IpmFexV1 objects.
*/


class BldDataIpimbV1 {
public:
  enum { TypeId = Pds::TypeId::Id_SharedIpimb /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~BldDataIpimbV1();
  virtual const Ipimb::DataV2& ipimbData() const = 0;
  virtual const Ipimb::ConfigV2& ipimbConfig() const = 0;
  virtual const Lusi::IpmFexV1& ipmFexData() const = 0;
};

/** @class BldDataPimV1

  Combined structure which includes Pulnix.TM6740ConfigV2, Lusi.PimImageConfigV1, and 
            Camera.FrameV1 objects.
*/


class BldDataPimV1 {
public:
  enum { TypeId = Pds::TypeId::Id_SharedPim /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~BldDataPimV1();
  virtual const Pulnix::TM6740ConfigV2& camConfig() const = 0;
  virtual const Lusi::PimImageConfigV1& pimConfig() const = 0;
  virtual const Camera::FrameV1& frame() const = 0;
};

/** @class BldDataGMDV0

  Gas Monitor Detector data.
*/


class BldDataGMDV0 {
public:
  enum { TypeId = Pds::TypeId::Id_GMD /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  virtual ~BldDataGMDV0();
  /** String describing gas type */
  virtual const char* gasType() const = 0;
  /** Pressure from Spinning Rotor Gauge */
  virtual double pressure() const = 0;
  /** Temp from PT100 */
  virtual double temperature() const = 0;
  /** Current from Keithley Electrometer */
  virtual double current() const = 0;
  /** HV Mesh Electron */
  virtual double hvMeshElectron() const = 0;
  /** HV Mesh Ion */
  virtual double hvMeshIon() const = 0;
  /** HV Mult Ion */
  virtual double hvMultIon() const = 0;
  /** Charge Q */
  virtual double chargeQ() const = 0;
  /** Photon Energy */
  virtual double photonEnergy() const = 0;
  /** Pulse Intensity derived from Electron Multiplier */
  virtual double multPulseIntensity() const = 0;
  /** Pulse Intensity derived from ION cup current */
  virtual double keithleyPulseIntensity() const = 0;
  /** Pulse Energy derived from Electron Multiplier */
  virtual double pulseEnergy() const = 0;
  /** Pulse Energy from FEE Gas Detector */
  virtual double pulseEnergyFEE() const = 0;
  /** Transmission derived from Electron Multiplier */
  virtual double transmission() const = 0;
  /** Transmission from FEE Gas Detector */
  virtual double transmissionFEE() const = 0;
};

/** @class BldDataGMDV1

  Gas Monitor Detector data.
*/


class BldDataGMDV1 {
public:
  enum { TypeId = Pds::TypeId::Id_GMD /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~BldDataGMDV1();
  /** Shot to shot pulse energy (mJ) */
  virtual double milliJoulesPerPulse() const = 0;
  /** Average pulse energy from ION cup current (mJ) */
  virtual double milliJoulesAverage() const = 0;
  /** Bg corrected waveform integrated within limits in raw A/D counts */
  virtual double correctedSumPerPulse() const = 0;
  /** Avg background value per sample in raw A/D counts */
  virtual double bgValuePerSample() const = 0;
  /** Shot by shot pulse energy in arbitrary units */
  virtual double relativeEnergyPerPulse() const = 0;
};

/** @class BldDataAcqADCV1

  Combined structure which includes Acqiris.ConfigV1 and 
            Acqiris.DataDescV1 objects.
*/


class BldDataAcqADCV1 {
public:
  enum { TypeId = Pds::TypeId::Id_SharedAcqADC /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 1 /**< XTC type version number */ };
  virtual ~BldDataAcqADCV1();
  virtual const Acqiris::ConfigV1& config() const = 0;
  virtual const Acqiris::DataDescV1& data() const = 0;
};

/** @class BldDataSpectrometerV0

  Structure which contains image projections for spectrometers.
*/


class BldDataSpectrometerV0 {
public:
  enum { TypeId = Pds::TypeId::Id_Spectrometer /**< XTC type ID value (from Pds::TypeId class) */ };
  enum { Version = 0 /**< XTC type version number */ };
  virtual ~BldDataSpectrometerV0();
  virtual ndarray<const uint32_t, 1> hproj() const = 0;
  virtual ndarray<const uint32_t, 1> vproj() const = 0;
};
} // namespace Bld
} // namespace Psana
#endif // PSANA_BLD_DDL_H
