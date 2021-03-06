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

#undef SUPERIO_DEV
#undef SUPERIO_PNP_BASE
#undef IT8720F_SHOW_SP1
#undef IT8720F_SHOW_SP2
#undef IT8720F_SHOW_EC
#undef IT8720F_SHOW_KBCK
#undef IT8720F_SHOW_KBCM
#undef IT8720F_SHOW_GPIO
#undef IT8720F_SHOW_CIR
#define SUPERIO_DEV		SIO0
#define SUPERIO_PNP_BASE	0x2e
#define IT8720F_SHOW_SP1	1
#if CONFIG(BOARD_FOXCONN_G41S_K)
#define IT8720F_SHOW_SP2	1
#endif
#define IT8720F_SHOW_EC		1
#define IT8720F_SHOW_KBCK	1
#define IT8720F_SHOW_KBCM	1
#define IT8720F_SHOW_GPIO	1
#if CONFIG(BOARD_FOXCONN_G41S_K)
#define IT8720F_SHOW_CIR	1
#endif
#include <superio/ite/it8720f/acpi/superio.asl>
