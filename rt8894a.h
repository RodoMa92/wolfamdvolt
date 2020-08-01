#ifndef __RT8894A_H
#define __RT8894A_H

#define RT8894A_I2C_AUTO_ZLL_VDD				0x00
#define RT8894A_I2C_PS_TH1_HYS1_VDD				0x01
#define RT8894A_I2C_PS_TH2_HYS2_VDD				0x02
#define RT8894A_I2C_PS0_OFS_VDD					0x03
#define RT8894A_I2C_PS0_FSW_LL_VDD				0x04
#define RT8894A_I2C_PS1_OFS_VDD					0x05
#define RT8894A_I2C_PS1_FSW_LL_VDD				0x06
#define RT8894A_I2C_PS2_OFS_VDD					0x07
#define RT8894A_I2C_PS2_FSW_LL_VDD				0x08
#define RT8894A_I2C_PS_PH_SEL_VDD				0x09
#define RT8894A_I2C_OVP_UVP_VDD					0x0A
#define RT8894A_I2C_OCP_VDD						0x0B
#define RT8894A_I2C_RSET_VDD					0x0C
#define RT8894A_I2C_QR_WIDTH_TH_VDD				0x0D
#define RT8894A_I2C_DVID_CHEAT_VDD				0x0E
#define RT8894A_I2C_CBG12_VDD					0x0F
#define RT8894A_I2C_CBG34_VDD					0x10
#define RT8894A_I2C_OFS_VDD						0x11
#define RT8894A_I2C_INI_OFS_VDD					0x12
#define RT8894A_I2C_FIX_VDD						0x13

#define RT8894A_I2C_AUTO_ZLL_NB					0x20
#define RT8894A_I2C_PS_TH1_HYS1_NB				0x21
#define RT8894A_I2C_PS_TH2_HYS2_NB				0x22
#define RT8894A_I2C_PS0_OFS_NB					0x23
#define RT8894A_I2C_PS0_FSW_LL_NB				0x24
#define RT8894A_I2C_PS1_OFS_NB					0x25
#define RT8894A_I2C_PS1_FSW_LL_NB				0x26
#define RT8894A_I2C_PS2_OFS_NB					0x27
#define RT8894A_I2C_PS2_FSW_LL_NB				0x28
#define RT8894A_I2C_PS_PH_SEL_NB				0x29
#define RT8894A_I2C_OVP_UVP_NB					0x2A
#define RT8894A_I2C_OCP_NB						0x2B
#define RT8894A_I2C_CBG_RSET_NB					0x2C
#define RT8894A_I2C_QR_WIDTH_TH_NB				0x2D
#define RT8894A_I2C_DVID_CHEAT_NB				0x2E
#define RT8894A_I2C_CBG12_NB					0x2F
#define RT8894A_I2C_OFS_NB						0x30
#define RT8894A_I2C_INI_OFS_NB					0x31
#define RT8894A_I2C_FIX_NB						0x32

#define RT8894A_I2C_READ_IDD					0x40
#define RT8894A_I2C_READ_IDDNB					0x41
#define RT8894A_I2C_READ_VDD					0x42
#define RT8894A_I2C_READ_VDDNB					0x43
#define RT8894A_I2C_READ_TZ_VDD					0x44
#define RT8894A_I2C_READ_PS						0x45
#define RT8894A_I2C_READ_PROD_ID				0x46
#define RT8894A_I2C_READ_PROD_REV				0x47
#define RT8894A_I2C_READ_CPU_PSI				0x48
#define RT8894A_I2C_READ_VR_PROC				0x49
#define RT8894A_I2C_OCP_OVP_UVP_EN				0x50
#define RT8894A_I2C_VRHOT_WDT_EN				0x51
#define RT8894A_I2C_VRHOTSHDN					0x52
#define RT8894A_I2C_LOCK_IND					0x53

#define RT8894A_UNLOCK_VALUE					0x5A
#define RT8894A_LOCK_VALUE						0xFF

uint32_t RT8894ADetect(AMDGPU *GPU, VRMController **VRMs);
uint32_t RT8894AGetVoltage(VRMController *VRM, float *VDDC);
uint32_t RT8894ASetVoltage(VRMController *VRM, float Voltage);
#endif
