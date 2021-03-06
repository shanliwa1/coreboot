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

#ifndef THERMAL_H
#define THERMAL_H

/*
 * Stoney Ridge Thermal Requirements 12 (6W)
 * TDP (W) 6
 * T die,max (°C) 95
 * T ctl,max 85
 * T die,lmt (default) 90
 * T ctl,lmt (default) 80
 */

/* Control TDP Settings */
#define CTL_TDP_SENSOR_ID		2	/* EC TIN2 */

/* Temperature which OS will shutdown at */
#define CRITICAL_TEMPERATURE		94

/* Temperature which OS will throttle CPU */
#define PASSIVE_TEMPERATURE		85

#endif
