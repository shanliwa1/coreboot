/*
 * This file is part of the coreboot project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of
 * the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	0x10ec0892,	/* Codec Vendor / Device ID: Realtek ALC892 */
	0x1849c892,	/* Subsystem ID */
	11,		/* Number of 4 dword sets */
	AZALIA_SUBVENDOR(0, 0x1849c892),
	AZALIA_PIN_CFG(0, 0x12, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x14, 0x01014020),
	AZALIA_PIN_CFG(0, 0x17, 0x90170110),
	AZALIA_PIN_CFG(0, 0x18, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x19, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x1a, 0x02a11c3f),
	AZALIA_PIN_CFG(0, 0x1b, 0x01813c30),
	AZALIA_PIN_CFG(0, 0x1d, 0x598301f0),
	AZALIA_PIN_CFG(0, 0x1e, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x21, 0x0221102f),

	0x10ec0887,	/* Codec Vendor / Device ID: Realtek ALC887 */
	0x1458a002,	/* Subsystem ID */
	15,		/* Number of 4 dword sets */
	AZALIA_SUBVENDOR(2, 0x1458a002),
	AZALIA_PIN_CFG(2, 0x11, 0x411110f0),
	AZALIA_PIN_CFG(2, 0x12, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x14, 0x01014410),
	AZALIA_PIN_CFG(2, 0x15, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x16, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x17, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x18, 0x01a19c50),
	AZALIA_PIN_CFG(2, 0x19, 0x02a19c60),
	AZALIA_PIN_CFG(2, 0x1a, 0x0181345f),
	AZALIA_PIN_CFG(2, 0x1b, 0x02214c20),
	AZALIA_PIN_CFG(2, 0x1c, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x1d, 0x4004c601),
	AZALIA_PIN_CFG(2, 0x1e, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x1f, 0x41c46060),

	0x80862806,	/* Codec Vendor / Device ID: Intel Haswell HDMI */
	0x80860101,	/* Subsystem ID */
	4,		/* Number of 4 dword sets */
	AZALIA_SUBVENDOR(3, 0x80860101),
	AZALIA_PIN_CFG(3, 0x05, 0x58560010),
	AZALIA_PIN_CFG(3, 0x06, 0x18560020),
	AZALIA_PIN_CFG(3, 0x07, 0x58560030),
};

const u32 pc_beep_verbs[0] = {};

AZALIA_ARRAY_SIZES;
