/*
 * This file is part of the coreboot project.
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _BROADWELL_SERIALIO_H_
#define _BROADWELL_SERIALIO_H_

/* Serial IO IOBP Registers */
#define SIO_IOBP_PORTCTRL0	0xcb000000	/* SDIO D23:F0 */
#define  SIO_IOBP_PORTCTRL0_ACPI_IRQ_EN		(1 << 5)
#define  SIO_IOBP_PORTCTRL0_PCI_CONF_DIS	(1 << 4)
#define SIO_IOBP_PORTCTRL1	0xcb000014	/* SDIO D23:F0 */
#define  SIO_IOBP_PORTCTRL1_SNOOP_SELECT(x)	(((x) & 3) << 13)
#define SIO_IOBP_GPIODF		0xcb000154
#define  SIO_IOBP_GPIODF_SDIO_IDLE_DET_EN	(1 << 4)
#define  SIO_IOBP_GPIODF_DMA_IDLE_DET_EN	(1 << 3)
#define  SIO_IOBP_GPIODF_UART_IDLE_DET_EN	(1 << 2)
#define  SIO_IOBP_GPIODF_I2C_IDLE_DET_EN	(1 << 1)
#define  SIO_IOBP_GPIODF_SPI_IDLE_DET_EN	(1 << 0)
#define  SIO_IOBP_GPIODF_UART0_BYTE_ACCESS	(1 << 10)
#define  SIO_IOBP_GPIODF_UART1_BYTE_ACCESS	(1 << 11)
#define SIO_IOBP_PORTCTRL2	0xcb000240	/* DMA D21:F0 */
#define SIO_IOBP_PORTCTRL3	0xcb000248	/* I2C0 D21:F1 */
#define SIO_IOBP_PORTCTRL4	0xcb000250	/* I2C1 D21:F2 */
#define SIO_IOBP_PORTCTRL5	0xcb000258	/* SPI0 D21:F3 */
#define SIO_IOBP_PORTCTRL6	0xcb000260	/* SPI1 D21:F4 */
#define SIO_IOBP_PORTCTRL7	0xcb000268	/* UART0 D21:F5 */
#define SIO_IOBP_PORTCTRL8	0xcb000270	/* UART1 D21:F6 */
#define SIO_IOBP_PORTCTRLX(x)	(0xcb000240 + ((x) * 8))
/* PORTCTRL 2-8 have the same layout */
#define  SIO_IOBP_PORTCTRL_ACPI_IRQ_EN		(1 << 21)
#define  SIO_IOBP_PORTCTRL_PCI_CONF_DIS		(1 << 20)
#define  SIO_IOBP_PORTCTRL_SNOOP_SELECT(x)	(((x) & 3) << 18)
#define  SIO_IOBP_PORTCTRL_INT_PIN(x)		(((x) & 0xf) << 2)
#define  SIO_IOBP_PORTCTRL_PM_CAP_PRSNT		(1 << 1)
#define SIO_IOBP_FUNCDIS0	0xce00aa07	/* DMA D21:F0 */
#define SIO_IOBP_FUNCDIS1	0xce00aa47	/* I2C0 D21:F1 */
#define SIO_IOBP_FUNCDIS2	0xce00aa87	/* I2C1 D21:F2 */
#define SIO_IOBP_FUNCDIS3	0xce00aac7	/* SPI0 D21:F3 */
#define SIO_IOBP_FUNCDIS4	0xce00ab07	/* SPI1 D21:F4 */
#define SIO_IOBP_FUNCDIS5	0xce00ab47	/* UART0 D21:F5 */
#define SIO_IOBP_FUNCDIS6	0xce00ab87	/* UART1 D21:F6 */
#define SIO_IOBP_FUNCDIS7	0xce00ae07	/* SDIO D23:F0 */
#define  SIO_IOBP_FUNCDIS_DIS			(1 << 8)

/* Serial IO Devices */
#define SIO_ID_SDMA		0 /* D21:F0 */
#define SIO_ID_I2C0		1 /* D21:F1 */
#define SIO_ID_I2C1		2 /* D21:F2 */
#define SIO_ID_SPI0		3 /* D21:F3 */
#define SIO_ID_SPI1		4 /* D21:F4 */
#define SIO_ID_UART0		5 /* D21:F5 */
#define SIO_ID_UART1		6 /* D21:F6 */
#define SIO_ID_SDIO		7 /* D23:F0 */

#define SIO_REG_PPR_CLOCK		0x800
#define  SIO_REG_PPR_CLOCK_EN		 (1 << 0)
#define  SIO_REG_PPR_CLOCK_UPDATE	 (1 << 31)
#define  SIO_REG_PPR_CLOCK_M_DIV	 0x25a
#define  SIO_REG_PPR_CLOCK_N_DIV	 0x7fff
#define SIO_REG_PPR_RST			0x804
#define  SIO_REG_PPR_RST_ASSERT		 0x3
#define SIO_REG_PPR_GEN			0x808
#define  SIO_REG_PPR_GEN_LTR_MODE_MASK	 (1 << 2)
#define  SIO_REG_PPR_GEN_VOLTAGE_MASK	 (1 << 3)
#define  SIO_REG_PPR_GEN_VOLTAGE(x)	 ((x & 1) << 3)
#define SIO_REG_AUTO_LTR		0x814

#define SIO_REG_SDIO_PPR_GEN		0x1008
#define SIO_REG_SDIO_PPR_SW_LTR		0x1010
#define SIO_REG_SDIO_PPR_CMD12		0x3c
#define  SIO_REG_SDIO_PPR_CMD12_B30	 (1 << 30)

#define SIO_PIN_INTA 1 /* IRQ5 in ACPI mode */
#define SIO_PIN_INTB 2 /* IRQ6 in ACPI mode */
#define SIO_PIN_INTC 3 /* IRQ7 in ACPI mode */
#define SIO_PIN_INTD 4 /* IRQ13 in ACPI mode */

#endif
