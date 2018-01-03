/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "mtk_cpufreq_config.h"

#define NR_FREQ		16
#define ARRAY_COL_SIZE	4

static unsigned int fyTbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	{ 1989,	130,	2,	1 },	/* L */
	{ 1950,	127,	2,	1 },
	{ 1885,	123,	2,	1 },
	{ 1846,	120,	2,	1 },
	{ 1781,	115,	2,	1 },
	{ 1716,	110,	2,	1 },
	{ 1651,	105,	2,	1 },
	{ 1599,	100,	2,	1 },
	{ 1508,	 95,	2,	1 },
	{ 1417,	 90,	2,	1 },
	{ 1326,	 85,	2,	1 },
	{ 1248,	 80,	2,	1 },
	{ 1131,	 75,	2,	1 },
	{ 1014,	 70,	2,	1 },
	{  910,	 65,	4,	1 },
	{  793,	 60,	4,	1 },

	{ 2483,	 87,	1,	1 },	/* B */
	{ 2431,	 85,	1,	1 },
	{ 2366,	 82,	1,	1 },
	{ 2288,	 79,	1,	1 },
	{ 2223,	 75,	1,	1 },
	{ 2145,	 71,	1,	1 },
	{ 2067,	 67,	1,	1 },
	{ 1989,	 63,	2,	1 },
	{ 1885,	 59,	2,	1 },
	{ 1768,	 55,	2,	1 },
	{ 1651,	 51,	2,	1 },
	{ 1547,	 47,	2,	1 },
	{ 1404,	 43,	2,	1 },
	{ 1274,	 39,	2,	1 },
	{ 1131,	 35,	2,	1 },
	{  988,	 31,	4,	1 },

	{ 1196,	130,	2,	1 },	/* CCI */
	{ 1170,	127,	2,	1 },
	{ 1118,	123,	2,	1 },
	{ 1092,	120,	2,	1 },
	{ 1027,	115,	2,	1 },
	{  975,	110,	4,	1 },
	{  910,	105,	4,	1 },
	{  845,	100,	4,	1 },
	{  767,	 95,	4,	1 },
	{  689,	 90,	4,	1 },
	{  624,	 85,	4,	1 },
	{  546,	 80,	4,	1 },
	{  481,	 75,	4,	2 },
	{  403,	 70,	4,	2 },
	{  338,	 65,	4,	2 },
	{  273,	 60,	4,	2 },
};

unsigned int *xrecordTbl[NUM_CPU_LEVEL] = {	/* v1.3.1 */
	[CPU_LEVEL_0] = &fyTbl[0][0],
};
