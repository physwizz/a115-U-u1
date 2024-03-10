// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2020 MediaTek Inc.
 */


/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_PMIC_REG_6366_gs_suspend_32kless_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x1E, 0xA, 0xA,/* TOP_CON */
	0x22, 0x1F00, 0x1F00,/* TEST_CON0 */
	0x2E, 0x1, 0x1,/* SMT_CON0 */
	0x10C, 0x18, 0x18,/* TOP_CKPDN_CON0 */
	0x112, 0x4, 0x4,/* TOP_CKPDN_CON1 */
	0x118, 0x8, 0x8,/* TOP_CKSEL_CON0 */
	0x11E, 0xF00, 0x0,/* TOP_CKSEL_CON1 */
	0x134, 0xABF0, 0x3B0,/* TOP_CLK_CON0 */
	0x408, 0x1, 0x1,/* RG_SPI_CON0 */
	0x51A, 0xFF, 0x7F,/* SCK_TOP_CKPDN_CON0 */
	0x788, 0x3FF8, 0x6D8,/* DCXO_CW00 */
	0x790, 0x1, 0x0,/* DCXO_CW02 */
	0x7A2, 0x3F00, 0x1B00,/* DCXO_CW11 */
	0x7AC, 0x1000, 0x1000,/* DCXO_CW14 */
	0x7B0, 0x3CFF, 0x1455,/* DCXO_CW16 */
	0xC0C, 0x5FF, 0x1E4,/* BM_TOP_CKPDN_CON0 */
	0xC1E, 0x3, 0x3,/* BM_TOP_CKHWEN_CON0 */
	0xD08, 0x301, 0x301,/* FGADC_CON0 */
	0xD0E, 0x30F, 0x308,/* FGADC_CON3 */
	0xD44, 0xFFFF, 0x1F,/* FGADC_SON_CON0 */
	0xD46, 0x3FF, 0x14,/* FGADC_SON_CON1 */
	0xD48, 0x3FF, 0xFF,/* FGADC_SON_CON2 */
	0xD4A, 0xFF, 0x3,/* FGADC_SON_CON3 */
	0xD4C, 0xFFFF, 0x1F,/* FGADC_SOFF_CON0 */
	0xD4E, 0x3FF, 0x14,/* FGADC_SOFF_CON1 */
	0xD50, 0x3FF, 0xFF,/* FGADC_SOFF_CON2 */
	0xD96, 0x1FFF, 0x400,/* FGADC_GAIN_CON0 */
	0xF2C, 0x1, 0x0,/* BIF_CON18 */
	0xF8C, 0x1FFF, 0xAAA,/* HK_TOP_CLK_CON0 */
	0xF8E, 0x1, 0x1,/* HK_TOP_CLK_CON1 */
	0x1188, 0xE03F, 0x14,/* AUXADC_CON0 */
	0x11B4, 0x100, 0x0,/* AUXADC_CON20 */
	0x123A, 0x8000, 0x8000,/* AUXADC_MDRT_0 */
	0x1248, 0x3F9, 0x51,/* AUXADC_NAG_0 */
	0x1260, 0x154, 0x0,/* AUXADC_DCM_CON */
	0x130C, 0x1F, 0x0,/* BUCK_TOP_CLK_CON0 */
	0x1312, 0xF, 0xF,/* BUCK_TOP_CLK_HWEN_CON0 */
	0x1334, 0x100, 0x0,/* BUCK_TOP_K_CON0 */
	0x1388, 0x3, 0x0,/* BUCK_VPROC11_CON0 */
	0x1390, 0x2, 0x0,/* BUCK_VPROC11_OP_EN */
	0x13A2, 0x20, 0x20,/* BUCK_VPROC11_DBG2 */
	0x1408, 0x3, 0x0,/* BUCK_VPROC12_CON0 */
	0x1410, 0x2, 0x0,/* BUCK_VPROC12_OP_EN */
	0x1422, 0x20, 0x20,/* BUCK_VPROC12_DBG2 */
	0x1488, 0x3, 0x1,/* BUCK_VCORE_CON0 */
	0x1490, 0x3, 0x3,/* BUCK_VCORE_OP_EN */
	0x1496, 0x2, 0x2,/* BUCK_VCORE_OP_CFG */
	0x14A2, 0x20, 0x0,/* BUCK_VCORE_DBG2 */
	0x1508, 0x3, 0x0,/* BUCK_VGPU_CON0 */
	0x1510, 0x2, 0x0,/* BUCK_VGPU_OP_EN */
	0x1522, 0x20, 0x20,/* BUCK_VGPU_DBG2 */
	0x1588, 0x3, 0x1,/* BUCK_VMODEM_CON0 */
	0x1590, 0x3, 0x3,/* BUCK_VMODEM_OP_EN */
	0x1596, 0x2, 0x2,/* BUCK_VMODEM_OP_CFG */
	0x15A2, 0x20, 0x0,/* BUCK_VMODEM_DBG2 */
	0x1608, 0x1, 0x1,/* BUCK_VDRAM1_CON0 */
	0x1610, 0x2, 0x2,/* BUCK_VDRAM1_OP_EN */
	0x1616, 0x2, 0x2,/* BUCK_VDRAM1_OP_CFG */
	0x1622, 0x20, 0x0,/* BUCK_VDRAM1_DBG2 */
	0x1688, 0x1, 0x1,/* BUCK_VS1_CON0 */
	0x1690, 0x3, 0x3,/* BUCK_VS1_OP_EN */
	0x1696, 0x2, 0x2,/* BUCK_VS1_OP_CFG */
	0x16A2, 0x20, 0x0,/* BUCK_VS1_DBG2 */
	0x1708, 0x1, 0x1,/* BUCK_VS2_CON0 */
	0x1710, 0x2, 0x2,/* BUCK_VS2_OP_EN */
	0x1716, 0x2, 0x2,/* BUCK_VS2_OP_CFG */
	0x1722, 0x20, 0x0,/* BUCK_VS2_DBG2 */
	0x1788, 0x1, 0x0,/* BUCK_VPA_CON0 */
	0x1A0E, 0x3, 0x3,/* TOP_TOP_CKHWEN_CON0 */
	0x1A10, 0x1, 0x1,/* LDO_TOP_CLK_DCM_CON0 */
	0x1A12, 0x1, 0x0,/* LDO_TOP_CLK_VFE28_CON0 */
	0x1A14, 0x1, 0x0,/* LDO_TOP_CLK_VXO22_CON0 */
	0x1A16, 0x1, 0x0,/* LDO_TOP_CLK_VRF18_CON0 */
	0x1A18, 0x1, 0x0,/* LDO_TOP_CLK_VRF12_CON0 */
	0x1A1A, 0x1, 0x0,/* LDO_TOP_CLK_VEFUSE_CON0 */
	0x1A1C, 0x1, 0x0,/* LDO_TOP_CLK_VCN33_CON0 */
	0x1A1E, 0x1, 0x0,/* LDO_TOP_CLK_VCN28_CON0 */
	0x1A20, 0x1, 0x0,/* LDO_TOP_CLK_VCN18_CON0 */
	0x1A22, 0x1, 0x0,/* LDO_TOP_CLK_VM18_CON0 */
	0x1A24, 0x1, 0x0,/* LDO_TOP_CLK_VMDDR_CON0 */
	0x1A26, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_CORE_CON0 */
	0x1A2C, 0x1, 0x0,/* LDO_TOP_CLK_VA12_CON0 */
	0x1A2E, 0x1, 0x0,/* LDO_TOP_CLK_VAUX18_CON0 */
	0x1A30, 0x1, 0x0,/* LDO_TOP_CLK_VAUD28_CON0 */
	0x1A32, 0x1, 0x0,/* LDO_TOP_CLK_VIO28_CON0 */
	0x1A34, 0x1, 0x0,/* LDO_TOP_CLK_VIO18_CON0 */
	0x1A36, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC11_CON0 */
	0x1A38, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC12_CON0 */
	0x1A3A, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_OTHERS_CON0 */
	0x1A3C, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_GPU_CON0 */
	0x1A3E, 0x1, 0x0,/* LDO_TOP_CLK_VDRAM2_CON0 */
	0x1A40, 0x1, 0x0,/* LDO_TOP_CLK_VMC_CON0 */
	0x1A42, 0x1, 0x0,/* LDO_TOP_CLK_VMCH_CON0 */
	0x1A44, 0x1, 0x0,/* LDO_TOP_CLK_VEMC_CON0 */
	0x1A46, 0x1, 0x0,/* LDO_TOP_CLK_VSIM1_CON0 */
	0x1A48, 0x1, 0x0,/* LDO_TOP_CLK_VSIM2_CON0 */
	0x1A4A, 0x1, 0x0,/* LDO_TOP_CLK_VIBR_CON0 */
	0x1A4C, 0x1, 0x0,/* LDO_TOP_CLK_VUSB_CON0 */
	0x1A4E, 0x1, 0x0,/* LDO_TOP_CLK_VBIF28_CON0 */
	0x1A8A, 0x2, 0x2,/* LDO_VXO22_OP_EN */
	0x1A90, 0x2, 0x2,/* LDO_VXO22_OP_CFG */
	0x1A9E, 0x2, 0x2,/* LDO_VA12_OP_EN */
	0x1AA4, 0x2, 0x2,/* LDO_VA12_OP_CFG */
	0x1AB2, 0x2, 0x2,/* LDO_VAUX18_OP_EN */
	0x1AB8, 0x2, 0x2,/* LDO_VAUX18_OP_CFG */
	0x1AC6, 0x2, 0x2,/* LDO_VAUD28_OP_EN */
	0x1ACC, 0x2, 0x2,/* LDO_VAUD28_OP_CFG */
	0x1AD8, 0x1, 0x1,/* LDO_VIO28_CON0 */
	0x1AEC, 0x1, 0x1,/* LDO_VIO18_CON0 */
	0x1B0A, 0x2, 0x2,/* LDO_VDRAM2_OP_EN */
	0x1B10, 0x2, 0x2,/* LDO_VDRAM2_OP_CFG */
	0x1B1C, 0x1, 0x0,/* LDO_VEMC_CON0 */
	0x1B32, 0x2, 0x2,/* LDO_VUSB_OP_EN */
	0x1B38, 0x2, 0x2,/* LDO_VUSB_OP_CFG */
	0x1B46, 0x1, 0x0,/* LDO_VSRAM_PROC11_CON0 */
	0x1B88, 0x1, 0x0,/* LDO_VSRAM_PROC12_CON0 */
	0x1BA6, 0x1, 0x1,/* LDO_VSRAM_OTHERS_CON0 */
	0x1BC8, 0x1, 0x0,/* LDO_VSRAM_GPU_CON0 */
	0x1C0A, 0x4, 0x4,/* LDO_VFE28_OP_EN */
	0x1C10, 0x4, 0x0,/* LDO_VFE28_OP_CFG */
	0x1C1E, 0x4, 0x4,/* LDO_VRF18_OP_EN */
	0x1C24, 0x4, 0x0,/* LDO_VRF18_OP_CFG */
	0x1C32, 0x4, 0x4,/* LDO_VRF12_OP_EN */
	0x1C38, 0x4, 0x0,/* LDO_VRF12_OP_CFG */
	0x1C44, 0x1, 0x0,/* LDO_VEFUSE_CON0 */
	0x1C58, 0x1, 0x0,/* LDO_VCN18_CON0 */
	0x1C6C, 0x1, 0x1,/* LDO_VM18_CON0 */
	0x1C8A, 0x2, 0x2,/* LDO_VMDDR_OP_EN */
	0x1C90, 0x2, 0x2,/* LDO_VMDDR_OP_CFG */
	0x1CA4, 0x2, 0x2,/* LDO_VSRAM_CORE_OP_EN */
	0x1CAA, 0x2, 0x2,/* LDO_VSRAM_CORE_OP_CFG */
	0x1CC4, 0x1, 0x0,/* LDO_VMC_CON0 */
	0x1CD8, 0x1, 0x0,/* LDO_VMCH_CON0 */
	0x1D08, 0x1, 0x0,/* LDO_VIBR_CON0 */
	0x1D1C, 0x1, 0x0,/* LDO_VCN33_CON0_0 */
	0x1D2A, 0x1, 0x0,/* LDO_VCN33_CON0_1 */
	0x1D48, 0x1, 0x0,/* LDO_VSIM1_CON0 */
	0x1D5C, 0x1, 0x0,/* LDO_VSIM2_CON0 */
	0x1D88, 0x1, 0x0,/* LDO_VCN28_CON0 */
	0x1D9C, 0x2, 0x2,/* VRTC28_CON0 */
	0x1DA0, 0x2, 0x2,/* LDO_VBIF28_OP_EN */
	0x1DA6, 0x2, 0x0,/* LDO_VBIF28_OP_CFG */
};

const unsigned int *AP_PMIC_REG_6366_gs_suspend_32kless =
				AP_PMIC_REG_6366_gs_suspend_32kless_data;

unsigned int AP_PMIC_REG_6366_gs_suspend_32kless_len = 426;

const unsigned int AP_PMIC_REG_6366_gs_deepidle___lp_mp3_32kless_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x1E, 0xA, 0xA,/* TOP_CON */
	0x22, 0x1F00, 0x1F00,/* TEST_CON0 */
	0x2E, 0x1, 0x1,/* SMT_CON0 */
	0x10C, 0x18, 0x18,/* TOP_CKPDN_CON0 */
	0x112, 0x4, 0x4,/* TOP_CKPDN_CON1 */
	0x118, 0x8, 0x8,/* TOP_CKSEL_CON0 */
	0x11E, 0xF00, 0x0,/* TOP_CKSEL_CON1 */
	0x134, 0xABF0, 0x3B0,/* TOP_CLK_CON0 */
	0x408, 0x1, 0x1,/* RG_SPI_CON0 */
	0x51A, 0xFF, 0x7F,/* SCK_TOP_CKPDN_CON0 */
	0x788, 0x3FF8, 0x16D8,/* DCXO_CW00 */
	0x790, 0x1, 0x0,/* DCXO_CW02 */
	0x7A2, 0x3F00, 0x1B00,/* DCXO_CW11 */
	0x7AC, 0x1000, 0x1000,/* DCXO_CW14 */
	0x7B0, 0x3CFF, 0x1455,/* DCXO_CW16 */
	0xC0C, 0x5FF, 0x1E4,/* BM_TOP_CKPDN_CON0 */
	0xC1E, 0x3, 0x3,/* BM_TOP_CKHWEN_CON0 */
	0xD08, 0x301, 0x301,/* FGADC_CON0 */
	0xD0E, 0x30F, 0x308,/* FGADC_CON3 */
	0xD44, 0xFFFF, 0x1F,/* FGADC_SON_CON0 */
	0xD46, 0x3FF, 0x14,/* FGADC_SON_CON1 */
	0xD48, 0x3FF, 0xFF,/* FGADC_SON_CON2 */
	0xD4A, 0xFF, 0x3,/* FGADC_SON_CON3 */
	0xD4C, 0xFFFF, 0x1F,/* FGADC_SOFF_CON0 */
	0xD4E, 0x3FF, 0x14,/* FGADC_SOFF_CON1 */
	0xD50, 0x3FF, 0xFF,/* FGADC_SOFF_CON2 */
	0xD96, 0x1FFF, 0x400,/* FGADC_GAIN_CON0 */
	0xF2C, 0x1, 0x0,/* BIF_CON18 */
	0xF8C, 0x1FFF, 0xAAA,/* HK_TOP_CLK_CON0 */
	0xF8E, 0x1, 0x1,/* HK_TOP_CLK_CON1 */
	0x1188, 0xE03F, 0x14,/* AUXADC_CON0 */
	0x11B4, 0x100, 0x0,/* AUXADC_CON20 */
	0x123A, 0x8000, 0x8000,/* AUXADC_MDRT_0 */
	0x1248, 0x3F9, 0x51,/* AUXADC_NAG_0 */
	0x1260, 0x154, 0x0,/* AUXADC_DCM_CON */
	0x130C, 0x1F, 0x0,/* BUCK_TOP_CLK_CON0 */
	0x1312, 0xF, 0xF,/* BUCK_TOP_CLK_HWEN_CON0 */
	0x1334, 0x100, 0x0,/* BUCK_TOP_K_CON0 */
	0x1388, 0x3, 0x0,/* BUCK_VPROC11_CON0 */
	0x1390, 0x8, 0x0,/* BUCK_VPROC11_OP_EN */
	0x13A2, 0x20, 0x20,/* BUCK_VPROC11_DBG2 */
	0x1408, 0x3, 0x0,/* BUCK_VPROC12_CON0 */
	0x1410, 0x8, 0x0,/* BUCK_VPROC12_OP_EN */
	0x1422, 0x20, 0x20,/* BUCK_VPROC12_DBG2 */
	0x1488, 0x3, 0x1,/* BUCK_VCORE_CON0 */
	0x1490, 0x9, 0x9,/* BUCK_VCORE_OP_EN */
	0x1496, 0x8, 0x8,/* BUCK_VCORE_OP_CFG */
	0x14A2, 0x20, 0x0,/* BUCK_VCORE_DBG2 */
	0x1508, 0x3, 0x0,/* BUCK_VGPU_CON0 */
	0x1510, 0x8, 0x0,/* BUCK_VGPU_OP_EN */
	0x1522, 0x20, 0x20,/* BUCK_VGPU_DBG2 */
	0x1588, 0x3, 0x1,/* BUCK_VMODEM_CON0 */
	0x1590, 0x9, 0x1,/* BUCK_VMODEM_OP_EN */
	0x1596, 0x8, 0x8,/* BUCK_VMODEM_OP_CFG */
	0x15A2, 0x20, 0x20,/* BUCK_VMODEM_DBG2 */
	0x1608, 0x1, 0x1,/* BUCK_VDRAM1_CON0 */
	0x1610, 0x8, 0x8,/* BUCK_VDRAM1_OP_EN */
	0x1616, 0x8, 0x8,/* BUCK_VDRAM1_OP_CFG */
	0x1622, 0x20, 0x0,/* BUCK_VDRAM1_DBG2 */
	0x1688, 0x1, 0x1,/* BUCK_VS1_CON0 */
	0x1690, 0x9, 0x9,/* BUCK_VS1_OP_EN */
	0x1696, 0x8, 0x8,/* BUCK_VS1_OP_CFG */
	0x16A2, 0x20, 0x0,/* BUCK_VS1_DBG2 */
	0x1708, 0x1, 0x1,/* BUCK_VS2_CON0 */
	0x1710, 0x8, 0x8,/* BUCK_VS2_OP_EN */
	0x1716, 0x8, 0x8,/* BUCK_VS2_OP_CFG */
	0x1722, 0x20, 0x0,/* BUCK_VS2_DBG2 */
	0x1788, 0x1, 0x0,/* BUCK_VPA_CON0 */
	0x1A0E, 0x3, 0x3,/* TOP_TOP_CKHWEN_CON0 */
	0x1A10, 0x1, 0x1,/* LDO_TOP_CLK_DCM_CON0 */
	0x1A12, 0x1, 0x0,/* LDO_TOP_CLK_VFE28_CON0 */
	0x1A14, 0x1, 0x0,/* LDO_TOP_CLK_VXO22_CON0 */
	0x1A16, 0x1, 0x0,/* LDO_TOP_CLK_VRF18_CON0 */
	0x1A18, 0x1, 0x0,/* LDO_TOP_CLK_VRF12_CON0 */
	0x1A1A, 0x1, 0x0,/* LDO_TOP_CLK_VEFUSE_CON0 */
	0x1A1C, 0x1, 0x0,/* LDO_TOP_CLK_VCN33_CON0 */
	0x1A1E, 0x1, 0x0,/* LDO_TOP_CLK_VCN28_CON0 */
	0x1A20, 0x1, 0x0,/* LDO_TOP_CLK_VCN18_CON0 */
	0x1A22, 0x1, 0x0,/* LDO_TOP_CLK_VM18_CON0 */
	0x1A24, 0x1, 0x0,/* LDO_TOP_CLK_VMDDR_CON0 */
	0x1A26, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_CORE_CON0 */
	0x1A2C, 0x1, 0x0,/* LDO_TOP_CLK_VA12_CON0 */
	0x1A2E, 0x1, 0x0,/* LDO_TOP_CLK_VAUX18_CON0 */
	0x1A30, 0x1, 0x0,/* LDO_TOP_CLK_VAUD28_CON0 */
	0x1A32, 0x1, 0x0,/* LDO_TOP_CLK_VIO28_CON0 */
	0x1A34, 0x1, 0x0,/* LDO_TOP_CLK_VIO18_CON0 */
	0x1A36, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC11_CON0 */
	0x1A38, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC12_CON0 */
	0x1A3A, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_OTHERS_CON0 */
	0x1A3C, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_GPU_CON0 */
	0x1A3E, 0x1, 0x0,/* LDO_TOP_CLK_VDRAM2_CON0 */
	0x1A40, 0x1, 0x0,/* LDO_TOP_CLK_VMC_CON0 */
	0x1A42, 0x1, 0x0,/* LDO_TOP_CLK_VMCH_CON0 */
	0x1A44, 0x1, 0x0,/* LDO_TOP_CLK_VEMC_CON0 */
	0x1A46, 0x1, 0x0,/* LDO_TOP_CLK_VSIM1_CON0 */
	0x1A48, 0x1, 0x0,/* LDO_TOP_CLK_VSIM2_CON0 */
	0x1A4A, 0x1, 0x0,/* LDO_TOP_CLK_VIBR_CON0 */
	0x1A4C, 0x1, 0x0,/* LDO_TOP_CLK_VUSB_CON0 */
	0x1A4E, 0x1, 0x0,/* LDO_TOP_CLK_VBIF28_CON0 */
	0x1A8A, 0x8, 0x8,/* LDO_VXO22_OP_EN */
	0x1A90, 0x8, 0x8,/* LDO_VXO22_OP_CFG */
	0x1A9E, 0x8, 0x8,/* LDO_VA12_OP_EN */
	0x1AA4, 0x8, 0x8,/* LDO_VA12_OP_CFG */
	0x1AB2, 0x8, 0x8,/* LDO_VAUX18_OP_EN */
	0x1AB8, 0x8, 0x8,/* LDO_VAUX18_OP_CFG */
	0x1AC4, 0x1, 0x1,/* LDO_VAUD28_CON0 */
	0x1AD8, 0x1, 0x1,/* LDO_VIO28_CON0 */
	0x1AEC, 0x1, 0x1,/* LDO_VIO18_CON0 */
	0x1B0A, 0x8, 0x8,/* LDO_VDRAM2_OP_EN */
	0x1B10, 0x8, 0x8,/* LDO_VDRAM2_OP_CFG */
	0x1B1C, 0x1, 0x1,/* LDO_VEMC_CON0 */
	0x1B32, 0x8, 0x8,/* LDO_VUSB_OP_EN */
	0x1B38, 0x8, 0x8,/* LDO_VUSB_OP_CFG */
	0x1B46, 0x1, 0x0,/* LDO_VSRAM_PROC11_CON0 */
	0x1B88, 0x1, 0x0,/* LDO_VSRAM_PROC12_CON0 */
	0x1BA6, 0x1, 0x1,/* LDO_VSRAM_OTHERS_CON0 */
	0x1BC8, 0x1, 0x0,/* LDO_VSRAM_GPU_CON0 */
	0x1C0A, 0x4, 0x4,/* LDO_VFE28_OP_EN */
	0x1C10, 0x4, 0x0,/* LDO_VFE28_OP_CFG */
	0x1C1E, 0x4, 0x4,/* LDO_VRF18_OP_EN */
	0x1C24, 0x4, 0x0,/* LDO_VRF18_OP_CFG */
	0x1C32, 0x4, 0x4,/* LDO_VRF12_OP_EN */
	0x1C38, 0x4, 0x0,/* LDO_VRF12_OP_CFG */
	0x1C44, 0x1, 0x0,/* LDO_VEFUSE_CON0 */
	0x1C58, 0x1, 0x0,/* LDO_VCN18_CON0 */
	0x1C6C, 0x1, 0x1,/* LDO_VM18_CON0 */
	0x1C8A, 0x8, 0x8,/* LDO_VMDDR_OP_EN */
	0x1C90, 0x8, 0x8,/* LDO_VMDDR_OP_CFG */
	0x1CA4, 0x8, 0x8,/* LDO_VSRAM_CORE_OP_EN */
	0x1CAA, 0x8, 0x8,/* LDO_VSRAM_CORE_OP_CFG */
	0x1CC4, 0x1, 0x0,/* LDO_VMC_CON0 */
	0x1CD8, 0x1, 0x0,/* LDO_VMCH_CON0 */
	0x1D08, 0x1, 0x0,/* LDO_VIBR_CON0 */
	0x1D1C, 0x1, 0x0,/* LDO_VCN33_CON0_0 */
	0x1D2A, 0x1, 0x0,/* LDO_VCN33_CON0_1 */
	0x1D48, 0x1, 0x0,/* LDO_VSIM1_CON0 */
	0x1D5C, 0x1, 0x0,/* LDO_VSIM2_CON0 */
	0x1D88, 0x1, 0x0,/* LDO_VCN28_CON0 */
	0x1D9C, 0x2, 0x2,/* VRTC28_CON0 */
	0x1DA0, 0x8, 0x8,/* LDO_VBIF28_OP_EN */
	0x1DA6, 0x8, 0x0,/* LDO_VBIF28_OP_CFG */
};

const unsigned int *AP_PMIC_REG_6366_gs_deepidle___lp_mp3_32kless =
		AP_PMIC_REG_6366_gs_deepidle___lp_mp3_32kless_data;

unsigned int AP_PMIC_REG_6366_gs_deepidle___lp_mp3_32kless_len = 423;

const unsigned int AP_PMIC_REG_6366_gs_sodi3p0_32kless_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x1E, 0xA, 0xA,/* TOP_CON */
	0x22, 0x1F00, 0x1F00,/* TEST_CON0 */
	0x2E, 0x1, 0x1,/* SMT_CON0 */
	0x10C, 0x18, 0x18,/* TOP_CKPDN_CON0 */
	0x112, 0x4, 0x4,/* TOP_CKPDN_CON1 */
	0x118, 0x8, 0x8,/* TOP_CKSEL_CON0 */
	0x11E, 0xF00, 0x0,/* TOP_CKSEL_CON1 */
	0x134, 0xABF0, 0x3B0,/* TOP_CLK_CON0 */
	0x408, 0x1, 0x1,/* RG_SPI_CON0 */
	0x51A, 0xFF, 0x7F,/* SCK_TOP_CKPDN_CON0 */
	0x788, 0x3FF8, 0x6D8,/* DCXO_CW00 */
	0x790, 0x1, 0x0,/* DCXO_CW02 */
	0x7A2, 0x3F00, 0x1B00,/* DCXO_CW11 */
	0x7AC, 0x1000, 0x1000,/* DCXO_CW14 */
	0x7B0, 0x3CFF, 0x1455,/* DCXO_CW16 */
	0xC0C, 0x5FF, 0x1E4,/* BM_TOP_CKPDN_CON0 */
	0xC1E, 0x3, 0x3,/* BM_TOP_CKHWEN_CON0 */
	0xD08, 0x301, 0x301,/* FGADC_CON0 */
	0xD0E, 0x30F, 0x308,/* FGADC_CON3 */
	0xD44, 0xFFFF, 0x1F,/* FGADC_SON_CON0 */
	0xD46, 0x3FF, 0x14,/* FGADC_SON_CON1 */
	0xD48, 0x3FF, 0xFF,/* FGADC_SON_CON2 */
	0xD4A, 0xFF, 0x3,/* FGADC_SON_CON3 */
	0xD4C, 0xFFFF, 0x1F,/* FGADC_SOFF_CON0 */
	0xD4E, 0x3FF, 0x14,/* FGADC_SOFF_CON1 */
	0xD50, 0x3FF, 0xFF,/* FGADC_SOFF_CON2 */
	0xD96, 0x1FFF, 0x400,/* FGADC_GAIN_CON0 */
	0xF2C, 0x1, 0x0,/* BIF_CON18 */
	0xF8C, 0x1FFF, 0xAAA,/* HK_TOP_CLK_CON0 */
	0xF8E, 0x1, 0x1,/* HK_TOP_CLK_CON1 */
	0x1188, 0xE03F, 0x14,/* AUXADC_CON0 */
	0x11B4, 0x100, 0x0,/* AUXADC_CON20 */
	0x123A, 0x8000, 0x8000,/* AUXADC_MDRT_0 */
	0x1248, 0x3F9, 0x51,/* AUXADC_NAG_0 */
	0x1260, 0x154, 0x0,/* AUXADC_DCM_CON */
	0x130C, 0x1F, 0x0,/* BUCK_TOP_CLK_CON0 */
	0x1312, 0xF, 0xF,/* BUCK_TOP_CLK_HWEN_CON0 */
	0x1334, 0x100, 0x0,/* BUCK_TOP_K_CON0 */
	0x1388, 0x3, 0x0,/* BUCK_VPROC11_CON0 */
	0x1390, 0x2, 0x0,/* BUCK_VPROC11_OP_EN */
	0x13A2, 0x20, 0x20,/* BUCK_VPROC11_DBG2 */
	0x1408, 0x3, 0x0,/* BUCK_VPROC12_CON0 */
	0x1410, 0x2, 0x0,/* BUCK_VPROC12_OP_EN */
	0x1422, 0x20, 0x20,/* BUCK_VPROC12_DBG2 */
	0x1488, 0x3, 0x1,/* BUCK_VCORE_CON0 */
	0x1490, 0x3, 0x3,/* BUCK_VCORE_OP_EN */
	0x1496, 0x2, 0x2,/* BUCK_VCORE_OP_CFG */
	0x14A2, 0x20, 0x0,/* BUCK_VCORE_DBG2 */
	0x1508, 0x3, 0x0,/* BUCK_VGPU_CON0 */
	0x1510, 0x2, 0x0,/* BUCK_VGPU_OP_EN */
	0x1522, 0x20, 0x20,/* BUCK_VGPU_DBG2 */
	0x1588, 0x3, 0x1,/* BUCK_VMODEM_CON0 */
	0x1590, 0x3, 0x3,/* BUCK_VMODEM_OP_EN */
	0x1596, 0x2, 0x2,/* BUCK_VMODEM_OP_CFG */
	0x15A2, 0x20, 0x0,/* BUCK_VMODEM_DBG2 */
	0x1608, 0x1, 0x1,/* BUCK_VDRAM1_CON0 */
	0x1610, 0x2, 0x2,/* BUCK_VDRAM1_OP_EN */
	0x1616, 0x2, 0x2,/* BUCK_VDRAM1_OP_CFG */
	0x1622, 0x20, 0x0,/* BUCK_VDRAM1_DBG2 */
	0x1688, 0x1, 0x1,/* BUCK_VS1_CON0 */
	0x1690, 0x3, 0x3,/* BUCK_VS1_OP_EN */
	0x1696, 0x2, 0x2,/* BUCK_VS1_OP_CFG */
	0x16A2, 0x20, 0x0,/* BUCK_VS1_DBG2 */
	0x1708, 0x1, 0x1,/* BUCK_VS2_CON0 */
	0x1710, 0x2, 0x2,/* BUCK_VS2_OP_EN */
	0x1716, 0x2, 0x2,/* BUCK_VS2_OP_CFG */
	0x1722, 0x20, 0x0,/* BUCK_VS2_DBG2 */
	0x1788, 0x1, 0x0,/* BUCK_VPA_CON0 */
	0x1A0E, 0x3, 0x3,/* TOP_TOP_CKHWEN_CON0 */
	0x1A10, 0x1, 0x1,/* LDO_TOP_CLK_DCM_CON0 */
	0x1A12, 0x1, 0x0,/* LDO_TOP_CLK_VFE28_CON0 */
	0x1A14, 0x1, 0x0,/* LDO_TOP_CLK_VXO22_CON0 */
	0x1A16, 0x1, 0x0,/* LDO_TOP_CLK_VRF18_CON0 */
	0x1A18, 0x1, 0x0,/* LDO_TOP_CLK_VRF12_CON0 */
	0x1A1A, 0x1, 0x0,/* LDO_TOP_CLK_VEFUSE_CON0 */
	0x1A1C, 0x1, 0x0,/* LDO_TOP_CLK_VCN33_CON0 */
	0x1A1E, 0x1, 0x0,/* LDO_TOP_CLK_VCN28_CON0 */
	0x1A20, 0x1, 0x0,/* LDO_TOP_CLK_VCN18_CON0 */
	0x1A22, 0x1, 0x0,/* LDO_TOP_CLK_VM18_CON0 */
	0x1A24, 0x1, 0x0,/* LDO_TOP_CLK_VMDDR_CON0 */
	0x1A26, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_CORE_CON0 */
	0x1A2C, 0x1, 0x0,/* LDO_TOP_CLK_VA12_CON0 */
	0x1A2E, 0x1, 0x0,/* LDO_TOP_CLK_VAUX18_CON0 */
	0x1A30, 0x1, 0x0,/* LDO_TOP_CLK_VAUD28_CON0 */
	0x1A32, 0x1, 0x0,/* LDO_TOP_CLK_VIO28_CON0 */
	0x1A34, 0x1, 0x0,/* LDO_TOP_CLK_VIO18_CON0 */
	0x1A36, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC11_CON0 */
	0x1A38, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_PROC12_CON0 */
	0x1A3A, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_OTHERS_CON0 */
	0x1A3C, 0x1, 0x0,/* LDO_TOP_CLK_VSRAM_GPU_CON0 */
	0x1A3E, 0x1, 0x0,/* LDO_TOP_CLK_VDRAM2_CON0 */
	0x1A40, 0x1, 0x0,/* LDO_TOP_CLK_VMC_CON0 */
	0x1A42, 0x1, 0x0,/* LDO_TOP_CLK_VMCH_CON0 */
	0x1A44, 0x1, 0x0,/* LDO_TOP_CLK_VEMC_CON0 */
	0x1A46, 0x1, 0x0,/* LDO_TOP_CLK_VSIM1_CON0 */
	0x1A48, 0x1, 0x0,/* LDO_TOP_CLK_VSIM2_CON0 */
	0x1A4A, 0x1, 0x0,/* LDO_TOP_CLK_VIBR_CON0 */
	0x1A4C, 0x1, 0x0,/* LDO_TOP_CLK_VUSB_CON0 */
	0x1A4E, 0x1, 0x0,/* LDO_TOP_CLK_VBIF28_CON0 */
	0x1A8A, 0x2, 0x2,/* LDO_VXO22_OP_EN */
	0x1A90, 0x2, 0x2,/* LDO_VXO22_OP_CFG */
	0x1A9E, 0x2, 0x2,/* LDO_VA12_OP_EN */
	0x1AA4, 0x2, 0x2,/* LDO_VA12_OP_CFG */
	0x1AB2, 0x2, 0x2,/* LDO_VAUX18_OP_EN */
	0x1AB8, 0x2, 0x2,/* LDO_VAUX18_OP_CFG */
	0x1AC6, 0x2, 0x2,/* LDO_VAUD28_OP_EN */
	0x1ACC, 0x2, 0x2,/* LDO_VAUD28_OP_CFG */
	0x1AD8, 0x1, 0x1,/* LDO_VIO28_CON0 */
	0x1AEC, 0x1, 0x1,/* LDO_VIO18_CON0 */
	0x1B0A, 0x2, 0x2,/* LDO_VDRAM2_OP_EN */
	0x1B10, 0x2, 0x2,/* LDO_VDRAM2_OP_CFG */
	0x1B1C, 0x1, 0x1,/* LDO_VEMC_CON0 */
	0x1B32, 0x2, 0x2,/* LDO_VUSB_OP_EN */
	0x1B38, 0x2, 0x2,/* LDO_VUSB_OP_CFG */
	0x1B46, 0x1, 0x0,/* LDO_VSRAM_PROC11_CON0 */
	0x1B88, 0x1, 0x0,/* LDO_VSRAM_PROC12_CON0 */
	0x1BA6, 0x1, 0x1,/* LDO_VSRAM_OTHERS_CON0 */
	0x1BC8, 0x1, 0x0,/* LDO_VSRAM_GPU_CON0 */
	0x1C0A, 0x4, 0x4,/* LDO_VFE28_OP_EN */
	0x1C10, 0x4, 0x0,/* LDO_VFE28_OP_CFG */
	0x1C1E, 0x4, 0x4,/* LDO_VRF18_OP_EN */
	0x1C24, 0x4, 0x0,/* LDO_VRF18_OP_CFG */
	0x1C32, 0x4, 0x4,/* LDO_VRF12_OP_EN */
	0x1C38, 0x4, 0x0,/* LDO_VRF12_OP_CFG */
	0x1C44, 0x1, 0x0,/* LDO_VEFUSE_CON0 */
	0x1C58, 0x1, 0x0,/* LDO_VCN18_CON0 */
	0x1C6C, 0x1, 0x1,/* LDO_VM18_CON0 */
	0x1C8A, 0x2, 0x2,/* LDO_VMDDR_OP_EN */
	0x1C90, 0x2, 0x2,/* LDO_VMDDR_OP_CFG */
	0x1CA4, 0x2, 0x2,/* LDO_VSRAM_CORE_OP_EN */
	0x1CAA, 0x2, 0x2,/* LDO_VSRAM_CORE_OP_CFG */
	0x1CC4, 0x1, 0x0,/* LDO_VMC_CON0 */
	0x1CD8, 0x1, 0x0,/* LDO_VMCH_CON0 */
	0x1D08, 0x1, 0x0,/* LDO_VIBR_CON0 */
	0x1D1C, 0x1, 0x0,/* LDO_VCN33_CON0_0 */
	0x1D2A, 0x1, 0x0,/* LDO_VCN33_CON0_1 */
	0x1D48, 0x1, 0x0,/* LDO_VSIM1_CON0 */
	0x1D5C, 0x1, 0x0,/* LDO_VSIM2_CON0 */
	0x1D88, 0x1, 0x0,/* LDO_VCN28_CON0 */
	0x1D9C, 0x2, 0x2,/* VRTC28_CON0 */
	0x1DA0, 0x2, 0x2,/* LDO_VBIF28_OP_EN */
	0x1DA6, 0x2, 0x0,/* LDO_VBIF28_OP_CFG */
};

const unsigned int *AP_PMIC_REG_6366_gs_sodi3p0_32kless =
			AP_PMIC_REG_6366_gs_sodi3p0_32kless_data;

unsigned int AP_PMIC_REG_6366_gs_sodi3p0_32kless_len = 426;