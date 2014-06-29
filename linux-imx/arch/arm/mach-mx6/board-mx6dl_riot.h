/*
 * Copyright (C) 2012-2013 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _BOARD_MX6DL_RIOT_H
#define _BOARD_MX6DL_RIOT_H
#include <mach/iomux-mx6dl.h>

static iomux_v3_cfg_t mx6dl_riot_pads[] = {
	/* AUDMUX */
	MX6DL_PAD_CSI0_DAT4__AUDMUX_AUD3_TXC,
	MX6DL_PAD_CSI0_DAT5__AUDMUX_AUD3_TXD,
	MX6DL_PAD_CSI0_DAT6__AUDMUX_AUD3_TXFS,
	MX6DL_PAD_CSI0_DAT7__AUDMUX_AUD3_RXD,

	/* CSPI */
	MX6DL_PAD_KEY_COL0__ECSPI1_SCLK,
	MX6DL_PAD_KEY_ROW0__ECSPI1_MOSI,
	MX6DL_PAD_KEY_COL1__ECSPI1_MISO,
	MX6DL_PAD_KEY_ROW1__GPIO_4_9,

	/* ENET */
	MX6DL_PAD_ENET_MDIO__ENET_MDIO,
	MX6DL_PAD_ENET_MDC__ENET_MDC,
	MX6DL_PAD_RGMII_TXC__ENET_RGMII_TXC,
	MX6DL_PAD_RGMII_TD0__ENET_RGMII_TD0,
	MX6DL_PAD_RGMII_TD1__ENET_RGMII_TD1,
	MX6DL_PAD_RGMII_TD2__ENET_RGMII_TD2,
	MX6DL_PAD_RGMII_TD3__ENET_RGMII_TD3,
	MX6DL_PAD_RGMII_TX_CTL__ENET_RGMII_TX_CTL,
	MX6DL_PAD_ENET_REF_CLK__ENET_TX_CLK,
	MX6DL_PAD_RGMII_RXC__ENET_RGMII_RXC,
	MX6DL_PAD_RGMII_RD0__ENET_RGMII_RD0,
	MX6DL_PAD_RGMII_RD1__ENET_RGMII_RD1,
	MX6DL_PAD_RGMII_RD2__ENET_RGMII_RD2,
	MX6DL_PAD_RGMII_RD3__ENET_RGMII_RD3,
	MX6DL_PAD_RGMII_RX_CTL__ENET_RGMII_RX_CTL,
	/* RGMII_nRST */
	MX6DL_PAD_ENET_CRS_DV__GPIO_1_25,
	/* IEEE 1588 clock */
	MX6DL_PAD_GPIO_16__ENET_ANATOP_ETHERNET_REF_OUT,
	/* RGMII Interrupt */
	MX6DL_PAD_ENET_RXD1__GPIO_1_26,

	/* I2C1 */
	MX6DL_PAD_CSI0_DAT8__I2C1_SDA,
	MX6DL_PAD_CSI0_DAT9__I2C1_SCL,

	/* I2C2 */
	MX6DL_PAD_KEY_COL3__I2C2_SCL,
	MX6DL_PAD_KEY_ROW3__I2C2_SDA,

	/* I2C3 */
	MX6DL_PAD_GPIO_5__I2C3_SCL,
	MX6DL_PAD_GPIO_6__I2C3_SDA,

        MX6DL_PAD_GPIO_7__I2C4_SCL,
        MX6DL_PAD_GPIO_8__I2C4_SDA,

	/* DISPLAY */
	MX6DL_PAD_DI0_DISP_CLK__IPU1_DI0_DISP_CLK,
	MX6DL_PAD_DI0_PIN15__IPU1_DI0_PIN15,		/* DE */
	MX6DL_PAD_DI0_PIN2__IPU1_DI0_PIN2,		/* HSync */
	MX6DL_PAD_DI0_PIN3__IPU1_DI0_PIN3,		/* VSync */
	MX6DL_PAD_DI0_PIN4__IPU1_DI0_PIN4,		/* Contrast */
	MX6DL_PAD_DISP0_DAT0__IPU1_DISP0_DAT_0,
	MX6DL_PAD_DISP0_DAT1__IPU1_DISP0_DAT_1,
	MX6DL_PAD_DISP0_DAT2__IPU1_DISP0_DAT_2,
	MX6DL_PAD_DISP0_DAT3__IPU1_DISP0_DAT_3,
	MX6DL_PAD_DISP0_DAT4__IPU1_DISP0_DAT_4,
	MX6DL_PAD_DISP0_DAT5__IPU1_DISP0_DAT_5,
	MX6DL_PAD_DISP0_DAT6__IPU1_DISP0_DAT_6,
	MX6DL_PAD_DISP0_DAT7__IPU1_DISP0_DAT_7,
	MX6DL_PAD_DISP0_DAT8__IPU1_DISP0_DAT_8,
	MX6DL_PAD_DISP0_DAT9__IPU1_DISP0_DAT_9,
	MX6DL_PAD_DISP0_DAT10__IPU1_DISP0_DAT_10,
	MX6DL_PAD_DISP0_DAT11__IPU1_DISP0_DAT_11,
	MX6DL_PAD_DISP0_DAT12__IPU1_DISP0_DAT_12,
	MX6DL_PAD_DISP0_DAT13__IPU1_DISP0_DAT_13,
	MX6DL_PAD_DISP0_DAT14__IPU1_DISP0_DAT_14,
	MX6DL_PAD_DISP0_DAT15__IPU1_DISP0_DAT_15,
	MX6DL_PAD_DISP0_DAT16__IPU1_DISP0_DAT_16,
	MX6DL_PAD_DISP0_DAT17__IPU1_DISP0_DAT_17,
	MX6DL_PAD_DISP0_DAT18__IPU1_DISP0_DAT_18,
	MX6DL_PAD_DISP0_DAT19__IPU1_DISP0_DAT_19,
	MX6DL_PAD_DISP0_DAT20__IPU1_DISP0_DAT_20,
	MX6DL_PAD_DISP0_DAT21__IPU1_DISP0_DAT_21,
	MX6DL_PAD_DISP0_DAT22__IPU1_DISP0_DAT_22,
	MX6DL_PAD_DISP0_DAT23__IPU1_DISP0_DAT_23,

	/* FlexCAN */
//	MX6DL_PAD_GPIO_7__CAN1_TXCAN,
//	MX6DL_PAD_GPIO_8__CAN1_RXCAN,
	/* CAN1_STBY */
	MX6DL_PAD_GPIO_19__GPIO_4_5,
#if 0
	/* UART1 for debug */
	MX6DL_PAD_CSI0_DAT10__UART1_TXD,
	MX6DL_PAD_CSI0_DAT11__UART1_RXD,
#else
        /* UART2 for debug */
        MX6DL_PAD_EIM_D26__UART2_TXD,
        MX6DL_PAD_EIM_D27__UART2_RXD,
#endif
	/* UART3 for gps */
	MX6DL_PAD_EIM_D24__UART3_TXD,
	MX6DL_PAD_EIM_D25__UART3_RXD,

	/* USB */
	MX6DL_PAD_ENET_RX_ER__ANATOP_USBOTG_ID,
	MX6DL_PAD_EIM_D21__USBOH3_USBOTG_OC,
	/* USB_OTG_PWR_EN */
	MX6DL_PAD_EIM_D22__GPIO_3_22,
	MX6DL_PAD_EIM_D30__USBOH3_USBH1_OC,

	/* generic_ts */
	MX6DL_PAD_ENET_TXD1__GPIO_1_29,
	MX6DL_PAD_NANDF_CS1__GPIO_6_14,

	/* USDHC2 */
	MX6DL_PAD_SD2_CLK__USDHC2_CLK,
	MX6DL_PAD_SD2_CMD__USDHC2_CMD,
	MX6DL_PAD_SD2_DAT0__USDHC2_DAT0,
	MX6DL_PAD_SD2_DAT1__USDHC2_DAT1,
	MX6DL_PAD_SD2_DAT2__USDHC2_DAT2,
	MX6DL_PAD_SD2_DAT3__USDHC2_DAT3,
	MX6DL_PAD_NANDF_D4__USDHC2_DAT4,
	MX6DL_PAD_NANDF_D5__USDHC2_DAT5,
	MX6DL_PAD_NANDF_D6__USDHC2_DAT6,
	MX6DL_PAD_NANDF_D7__USDHC2_DAT7,
	/* SD2_CD */
	MX6DL_PAD_GPIO_4__GPIO_1_4,
	/* SD2_WP */
	MX6DL_PAD_GPIO_2__GPIO_1_2,

	/* USDHC3 */
	MX6DL_PAD_SD3_CLK__USDHC3_CLK_50MHZ,
	MX6DL_PAD_SD3_CMD__USDHC3_CMD_50MHZ,
	MX6DL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ,
	MX6DL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ,
	MX6DL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ,
	MX6DL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ,
	/* SD3_CD */
	MX6DL_PAD_SD3_DAT5__GPIO_7_0,
	/* SD3_WP */
	MX6DL_PAD_SD3_DAT4__GPIO_7_1,

	/* USDHC4 */
	MX6DL_PAD_SD4_CLK__USDHC4_CLK_50MHZ,
	MX6DL_PAD_SD4_CMD__USDHC4_CMD_50MHZ,
	MX6DL_PAD_SD4_DAT0__USDHC4_DAT0_50MHZ,
	MX6DL_PAD_SD4_DAT1__USDHC4_DAT1_50MHZ,
	MX6DL_PAD_SD4_DAT2__USDHC4_DAT2_50MHZ,
	MX6DL_PAD_SD4_DAT3__USDHC4_DAT3_50MHZ,
	MX6DL_PAD_SD4_DAT4__USDHC4_DAT4_50MHZ,
	MX6DL_PAD_SD4_DAT5__USDHC4_DAT5_50MHZ,
	MX6DL_PAD_SD4_DAT6__USDHC4_DAT6_50MHZ,
	MX6DL_PAD_SD4_DAT7__USDHC4_DAT7_50MHZ,

	/* HDMI_CEC_IN*/
	MX6DL_PAD_KEY_ROW2__GPIO_4_11,

	/* CCM - Audio, Camera clock  */
	MX6DL_PAD_GPIO_0__CCM_CLKO,
	MX6DL_PAD_GPIO_3__CCM_CLKO2,

	/* MICROPHONE_DET */
	MX6DL_PAD_GPIO_9__GPIO_1_9,
	/* CODEC_PWR_EN */
	MX6DL_PAD_KEY_COL2__GPIO_4_10,
	/* HEADPHONE_DET */
	MX6DL_PAD_SD3_RST__GPIO_7_8,

	/* GPS_RESET_B */
	MX6DL_PAD_EIM_EB0__GPIO_2_28,
	/* GPS_PWREN */
	MX6DL_PAD_EIM_DA0__GPIO_3_0,
	/* GPS AUX_3V15_EN*/
	MX6DL_PAD_NANDF_WP_B__GPIO_6_9,
	/* GPS_PPS */
	MX6DL_PAD_EIM_D18__GPIO_3_18,

	/* DISP0_RST_B */
	MX6DL_PAD_EIM_DA8__GPIO_3_8,
	/* DI0_D0_CS */
	MX6DL_PAD_EIM_WAIT__GPIO_5_0,
	/* DI1_D0_CS */
	MX6DL_PAD_EIM_BCLK__GPIO_6_31,
	/* DISP_PWM */
	MX6DL_PAD_SD1_CMD__PWM4_PWMO,
	/* DISP0 power enable */
	MX6DL_PAD_ENET_TXD0__GPIO_1_30,
	/* DISP_RST_B */
	MX6DL_PAD_NANDF_CS0__GPIO_6_11,
	/* DISP_PWR_EN */
//	MX6DL_PAD_NANDF_CS1__GPIO_6_14,
	/* CABC_EN0 */
	MX6DL_PAD_NANDF_CS2__GPIO_6_15,
	/* CABC_EN1 */
	MX6DL_PAD_NANDF_CS3__GPIO_6_16,
	/* DISP0_WR */
	MX6DL_PAD_NANDF_WP_B__GPIO_6_9,

	/* ALS INT */
	MX6DL_PAD_EIM_DA9__GPIO_3_9,
	/* BARO_INT */
	MX6DL_PAD_EIM_DA15__GPIO_3_15,

	/* power off */
	MX6DL_PAD_EIM_D29__GPIO_3_29,

	/* CAP_TCH_INT1 */
	MX6DL_PAD_NANDF_CLE__GPIO_6_7,

	/* CAP_TCH_INT0 */
	MX6DL_PAD_NANDF_ALE__GPIO_6_8,

	/* AUX_5V Enable */
	MX6DL_PAD_NANDF_RB0__GPIO_6_10,

	/* PCIE_RST_B */
	MX6DL_PAD_GPIO_17__GPIO_7_12,
	/* PCIE_PWR_EN */
//	MX6DL_PAD_EIM_D19__GPIO_3_19,
	/* PCIE_WAKE_B */
	MX6DL_PAD_CSI0_DATA_EN__GPIO_5_20,
	/* PCIE_DIS_B */
	MX6DL_PAD_KEY_COL4__GPIO_4_14,

	/* PMIC_INT_B */
	MX6DL_PAD_GPIO_18__GPIO_7_13,

	/* LED */
	MX6DL_PAD_EIM_A25__GPIO_5_2,
	MX6DL_PAD_EIM_D28__GPIO_3_28,

	MX6DL_PAD_EIM_D23__GPIO_3_23, /* CHG_1_B */
	MX6DL_PAD_EIM_DA13__GPIO_3_13, /* CHG_2_B  */
	MX6DL_PAD_EIM_DA14__GPIO_3_14, /* FLT_2_B */

	MX6DL_PAD_ENET_RXD0__GPIO_1_27, /* UOK_B */
	MX6DL_PAD_EIM_CS1__GPIO_2_24,   /* DOK_B */

	/* TS_INT - MAX11801 */
//	MX6DL_PAD_EIM_D26__GPIO_3_26,
	/* eCompass int */
	MX6DL_PAD_EIM_D16__GPIO_3_16,

	/* SENSOR_PWR_EN */
	MX6DL_PAD_EIM_EB3__GPIO_2_31,
	/* ACCL_INT_INT */
//	MX6DL_PAD_SD1_CMD__GPIO_1_18,

	/*WDOG_B to reset pmic*/
//	MX6DL_PAD_GPIO_1__WDOG2_WDOG_B,
	/* USR_DEF_RED_LED */
//	MX6DL_PAD_GPIO_2__GPIO_1_2,
};

static iomux_v3_cfg_t mx6dl_riot_csi0_sensor_pads[] = {
	/* IPU1 Camera */
	MX6DL_PAD_CSI0_DAT12__IPU1_CSI0_D_12,
	MX6DL_PAD_CSI0_DAT13__IPU1_CSI0_D_13,
	MX6DL_PAD_CSI0_DAT14__IPU1_CSI0_D_14,
	MX6DL_PAD_CSI0_DAT15__IPU1_CSI0_D_15,
	MX6DL_PAD_CSI0_DAT16__IPU1_CSI0_D_16,
	MX6DL_PAD_CSI0_DAT17__IPU1_CSI0_D_17,
	MX6DL_PAD_CSI0_DAT18__IPU1_CSI0_D_18,
	MX6DL_PAD_CSI0_DAT19__IPU1_CSI0_D_19,
	MX6DL_PAD_CSI0_DATA_EN__IPU1_CSI0_DATA_EN,
	MX6DL_PAD_CSI0_MCLK__IPU1_CSI0_HSYNC,
	MX6DL_PAD_CSI0_PIXCLK__IPU1_CSI0_PIXCLK,
	MX6DL_PAD_CSI0_VSYNC__IPU1_CSI0_VSYNC,

	MX6DL_PAD_GPIO_0__CCM_CLKO,		/* camera clk */

        MX6DL_PAD_EIM_D19__GPIO_3_19,   /* Camera RST */
        MX6DL_PAD_EIM_D20__GPIO_3_20,   /* Camera PWD */	
};

static iomux_v3_cfg_t mx6dl_riot_mipi_sensor_pads[] = {
	MX6DL_PAD_GPIO_0__CCM_CLKO,		/* camera clk */

	MX6DL_PAD_SD1_DAT2__GPIO_1_19,		/* camera PWDN */
	MX6DL_PAD_SD1_CLK__GPIO_1_20,		/* camera RESET */
};

static iomux_v3_cfg_t mx6dl_riot_hdmi_ddc_pads[] = {
	MX6DL_PAD_KEY_COL3__HDMI_TX_DDC_SCL, /* HDMI DDC SCL */
	MX6DL_PAD_KEY_ROW3__HDMI_TX_DDC_SDA, /* HDMI DDC SDA */
};

static iomux_v3_cfg_t mx6dl_riot_i2c2_pads[] = {
	MX6DL_PAD_KEY_COL3__I2C2_SCL,	/* I2C2 SCL */
	MX6DL_PAD_KEY_ROW3__I2C2_SDA,	/* I2C2 SDA */
};
#endif