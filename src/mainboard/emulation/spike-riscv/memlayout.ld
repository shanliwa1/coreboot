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

#include <memlayout.h>

#include <arch/header.ld>

#define START 0x80000000

SECTIONS
{
	DRAM_START(START)
	BOOTBLOCK(START, 64K)
	STACK(START + 8M, 4K)
	FMAP_CACHE(START + 8M + 4K, 2K)
	/* hole at (START + 8M + 6K, 58K) */
	ROMSTAGE(START + 8M + 64K, 128K)
	PRERAM_CBMEM_CONSOLE(START + 8M + 192k, 8K)
	RAMSTAGE(START + 8M + 200K, 256K)
}
