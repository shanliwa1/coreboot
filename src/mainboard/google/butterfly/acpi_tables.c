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

#include <stdint.h>
#include <southbridge/intel/bd82x6x/nvs.h>
#include <vendorcode/google/chromeos/gnvs.h>
#include "thermal.h"

void acpi_create_gnvs(global_nvs_t *gnvs)
{
	/* Disable USB ports in S3 by default */
	gnvs->s3u0 = 0;
	gnvs->s3u1 = 0;

	/* Disable USB ports in S5 by default */
	gnvs->s5u0 = 0;
	gnvs->s5u1 = 0;


	// TODO: MLR
	// The firmware read/write status is a "virtual" switch and
	// will be handled elsewhere.  Until then hard-code to
	// read/write instead of read-only for developer mode.
	gnvs->chromeos.vbt2 = ACTIVE_ECFW_RW;

	// the lid is open by default.
	gnvs->lids = 1;

	/* EC handles all thermal and fan control on Butterfly. */
	gnvs->tcrt = CRITICAL_TEMPERATURE;
	gnvs->tpsv = PASSIVE_TEMPERATURE;

}
