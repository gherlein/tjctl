/*
 * tjusb.h - ProSlic Header File
 *
 * Taken from tjnet 0.0.3
 *
 * Written by Ping Liu <pliu@tjnet.com>
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * http://www.gnu.org/licenses/gpl.txt
 */

#ifndef _TJUSB_H
#define _TJUSB_H

#define TJ_MAX_REGS		256 
#define TJ_MAX_IFACES		128

#define POWERSAVE_TIME		4000	/* Powersaving timeout for devices with
					   a proslic */

/* Various registers and data ports on the TJ device */
#define TJ_SPORT0		0x26
#define TJ_SPORT1		0x27
#define TJ_SPORT2		0x28
#define TJ_SPORT_CTRL		0x29
#define TJ_AUX0 		0x1
#define TJ_AUX1 		0x2
#define TJ_AUX2 		0x4
#define TJ_AUX3 		0x8

#define CONTROL_TIMEOUT_MS              (500)           /* msec */

#define REQUEST_NORMAL 4
 
#endif /* _TJUSB_H */
