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

/* Cannon_FY_PTPOFF_WAT0_85C : 20170918*/

#ifndef MTK_UNIFIED_POWER_DATA_MT6775_H
#define MTK_UNIFIED_POWER_DATA_MT6775_H

struct upower_tbl upower_tbl_l_FY = {
	.row = {
		{.cap = 193, .volt = 60000, .dyn_pwr = 23261, .lkg_pwr = {23134, 23134, 23134, 23134, 23134, 23134} },
		{.cap = 221, .volt = 62500, .dyn_pwr = 28964, .lkg_pwr = {24506, 24506, 24506, 24506, 24506, 24506} },
		{.cap = 247, .volt = 65000, .dyn_pwr = 34908, .lkg_pwr = {25877, 25877, 25877, 25877, 25877, 25877} },
		{.cap = 275, .volt = 67500, .dyn_pwr = 41988, .lkg_pwr = {27309, 27309, 27309, 27309, 27309, 27309} },
		{.cap = 304, .volt = 70000, .dyn_pwr = 49828, .lkg_pwr = {28740, 28740, 28740, 28740, 28740, 28740} },
		{.cap = 323, .volt = 72500, .dyn_pwr = 56791, .lkg_pwr = {30266, 30266, 30266, 30266, 30266, 30266} },
		{.cap = 345, .volt = 75000, .dyn_pwr = 64946, .lkg_pwr = {31792, 31792, 31792, 31792, 31792, 31792} },
		{.cap = 367, .volt = 77500, .dyn_pwr = 73801, .lkg_pwr = {33403, 33403, 33403, 33403, 33403, 33403} },
		{.cap = 389, .volt = 80000, .dyn_pwr = 83385, .lkg_pwr = {35014, 35014, 35014, 35014, 35014, 35014} },
		{.cap = 402, .volt = 82500, .dyn_pwr = 91562, .lkg_pwr = {36714, 36714, 36714, 36714, 36714, 36714} },
		{.cap = 417, .volt = 85000, .dyn_pwr = 101022, .lkg_pwr = {38414, 38414, 38414, 38414, 38414, 38414} },
		{.cap = 433, .volt = 87500, .dyn_pwr = 111106, .lkg_pwr = {40207, 40207, 40207, 40207, 40207, 40207} },
		{.cap = 449, .volt = 90000, .dyn_pwr = 121836, .lkg_pwr = {42000, 42000, 42000, 42000, 42000, 42000} },
		{.cap = 459, .volt = 91500, .dyn_pwr = 128592, .lkg_pwr = {43146, 43146, 43146, 43146, 43146, 43146} },
		{.cap = 474, .volt = 93500, .dyn_pwr = 138905, .lkg_pwr = {44673, 44673, 44673, 44673, 44673, 44673} },
		{.cap = 484, .volt = 95000, .dyn_pwr = 146265, .lkg_pwr = {45819, 45819, 45819, 45819, 45819, 45819} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
	},
};

struct upower_tbl upower_tbl_cluster_l_FY = {
	.row = {
		{.cap = 193, .volt = 60000, .dyn_pwr = 4934, .lkg_pwr = {23134, 23134, 23134, 23134, 23134, 23134} },
		{.cap = 221, .volt = 62500, .dyn_pwr = 6144, .lkg_pwr = {24506, 24506, 24506, 24506, 24506, 24506} },
		{.cap = 247, .volt = 65000, .dyn_pwr = 7405, .lkg_pwr = {25877, 25877, 25877, 25877, 25877, 25877} },
		{.cap = 275, .volt = 67500, .dyn_pwr = 8907, .lkg_pwr = {27309, 27309, 27309, 27309, 27309, 27309} },
		{.cap = 304, .volt = 70000, .dyn_pwr = 10569, .lkg_pwr = {28740, 28740, 28740, 28740, 28740, 28740} },
		{.cap = 323, .volt = 72500, .dyn_pwr = 12047, .lkg_pwr = {30266, 30266, 30266, 30266, 30266, 30266} },
		{.cap = 345, .volt = 75000, .dyn_pwr = 13776, .lkg_pwr = {31792, 31792, 31792, 31792, 31792, 31792} },
		{.cap = 367, .volt = 77500, .dyn_pwr = 15655, .lkg_pwr = {33403, 33403, 33403, 33403, 33403, 33403} },
		{.cap = 389, .volt = 80000, .dyn_pwr = 17688, .lkg_pwr = {35014, 35014, 35014, 35014, 35014, 35014} },
		{.cap = 402, .volt = 82500, .dyn_pwr = 19422, .lkg_pwr = {36714, 36714, 36714, 36714, 36714, 36714} },
		{.cap = 417, .volt = 85000, .dyn_pwr = 21429, .lkg_pwr = {38414, 38414, 38414, 38414, 38414, 38414} },
		{.cap = 433, .volt = 87500, .dyn_pwr = 23568, .lkg_pwr = {40207, 40207, 40207, 40207, 40207, 40207} },
		{.cap = 449, .volt = 90000, .dyn_pwr = 25844, .lkg_pwr = {42000, 42000, 42000, 42000, 42000, 42000} },
		{.cap = 459, .volt = 91500, .dyn_pwr = 27277, .lkg_pwr = {43146, 43146, 43146, 43146, 43146, 43146} },
		{.cap = 474, .volt = 93500, .dyn_pwr = 29465, .lkg_pwr = {44673, 44673, 44673, 44673, 44673, 44673} },
		{.cap = 484, .volt = 95000, .dyn_pwr = 31026, .lkg_pwr = {45819, 45819, 45819, 45819, 45819, 45819} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
		{{0}, {23134} },
	},
};

struct upower_tbl upower_tbl_b_FY = {
	.row = {
		{.cap = 407, .volt = 60000, .dyn_pwr = 111534, .lkg_pwr = {62463, 62463, 62463, 62463, 62463, 62463} },
		{.cap = 466, .volt = 62500, .dyn_pwr = 138539, .lkg_pwr = {65660, 65660, 65660, 65660, 65660, 65660} },
		{.cap = 525, .volt = 65000, .dyn_pwr = 168789, .lkg_pwr = {68858, 68858, 68858, 68858, 68858, 68858} },
		{.cap = 579, .volt = 67500, .dyn_pwr = 200597, .lkg_pwr = {72610, 72610, 72610, 72610, 72610, 72610} },
		{.cap = 638, .volt = 70000, .dyn_pwr = 237703, .lkg_pwr = {76362, 76362, 76362, 76362, 76362, 76362} },
		{.cap = 681, .volt = 72500, .dyn_pwr = 272127, .lkg_pwr = {80016, 80016, 80016, 80016, 80016, 80016} },
		{.cap = 729, .volt = 75000, .dyn_pwr = 311856, .lkg_pwr = {83670, 83670, 83670, 83670, 83670, 83670} },
		{.cap = 777, .volt = 77500, .dyn_pwr = 355029, .lkg_pwr = {87553, 87553, 87553, 87553, 87553, 87553} },
		{.cap = 820, .volt = 80000, .dyn_pwr = 399175, .lkg_pwr = {91436, 91436, 91436, 91436, 91436, 91436} },
		{.cap = 852, .volt = 82500, .dyn_pwr = 441161, .lkg_pwr = {95398, 95398, 95398, 95398, 95398, 95398} },
		{.cap = 885, .volt = 85000, .dyn_pwr = 485975, .lkg_pwr = {99360, 99360, 99360, 99360, 99360, 99360} },
	{.cap = 917, .volt = 87500, .dyn_pwr = 533709, .lkg_pwr = {103607, 103607, 103607, 103607, 103607, 103607} },
	{.cap = 944, .volt = 90000, .dyn_pwr = 581152, .lkg_pwr = {107855, 107855, 107855, 107855, 107855, 107855} },
	{.cap = 976, .volt = 91900, .dyn_pwr = 626606, .lkg_pwr = {111438, 111438, 111438, 111438, 111438, 111438} },
	{.cap = 1003, .volt = 93800, .dyn_pwr = 670717, .lkg_pwr = {115020, 115020, 115020, 115020, 115020, 115020} },
	{.cap = 1024, .volt = 95000, .dyn_pwr = 702704, .lkg_pwr = {117283, 117283, 117283, 117283, 117283, 117283} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {62463} },
		{{0}, {62463} },
		{{0}, {62463} },
		{{0}, {62463} },
		{{0}, {62463} },
		{{0}, {62463} },
	},
};

struct upower_tbl upower_tbl_cluster_b_FY = {
	.row = {
		{.cap = 407, .volt = 60000, .dyn_pwr = 13173, .lkg_pwr = {37087, 37087, 37087, 37087, 37087, 37087} },
		{.cap = 466, .volt = 62500, .dyn_pwr = 16363, .lkg_pwr = {38986, 38986, 38986, 38986, 38986, 38986} },
		{.cap = 525, .volt = 65000, .dyn_pwr = 19936, .lkg_pwr = {40884, 40884, 40884, 40884, 40884, 40884} },
		{.cap = 579, .volt = 67500, .dyn_pwr = 23692, .lkg_pwr = {43112, 43112, 43112, 43112, 43112, 43112} },
		{.cap = 638, .volt = 70000, .dyn_pwr = 28075, .lkg_pwr = {45340, 45340, 45340, 45340, 45340, 45340} },
		{.cap = 681, .volt = 72500, .dyn_pwr = 32141, .lkg_pwr = {47509, 47509, 47509, 47509, 47509, 47509} },
		{.cap = 729, .volt = 75000, .dyn_pwr = 36833, .lkg_pwr = {49679, 49679, 49679, 49679, 49679, 49679} },
		{.cap = 777, .volt = 77500, .dyn_pwr = 41933, .lkg_pwr = {51984, 51984, 51984, 51984, 51984, 51984} },
		{.cap = 820, .volt = 80000, .dyn_pwr = 47147, .lkg_pwr = {54290, 54290, 54290, 54290, 54290, 54290} },
		{.cap = 852, .volt = 82500, .dyn_pwr = 52106, .lkg_pwr = {56642, 56642, 56642, 56642, 56642, 56642} },
		{.cap = 885, .volt = 85000, .dyn_pwr = 57399, .lkg_pwr = {58995, 58995, 58995, 58995, 58995, 58995} },
		{.cap = 917, .volt = 87500, .dyn_pwr = 63036, .lkg_pwr = {61517, 61517, 61517, 61517, 61517, 61517} },
		{.cap = 944, .volt = 90000, .dyn_pwr = 68640, .lkg_pwr = {64039, 64039, 64039, 64039, 64039, 64039} },
		{.cap = 976, .volt = 91900, .dyn_pwr = 74009, .lkg_pwr = {66166, 66166, 66166, 66166, 66166, 66166} },
		{.cap = 1003, .volt = 93800, .dyn_pwr = 79219, .lkg_pwr = {68293, 68293, 68293, 68293, 68293, 68293} },
		{.cap = 1024, .volt = 95000, .dyn_pwr = 82997, .lkg_pwr = {69637, 69637, 69637, 69637, 69637, 69637} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {37087} },
		{{0}, {37087} },
		{{0}, {37087} },
		{{0}, {37087} },
		{{0}, {37087} },
		{{0}, {37087} },
	},
};

struct upower_tbl upower_tbl_cci_FY = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 1092, .lkg_pwr = {7714, 7714, 7714, 7714, 7714, 7714} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 1467, .lkg_pwr = {8171, 8171, 8171, 8171, 8171, 8171} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 1892, .lkg_pwr = {8629, 8629, 8629, 8629, 8629, 8629} },
		{.cap = 0, .volt = 67500, .dyn_pwr = 2435, .lkg_pwr = {9106, 9106, 9106, 9106, 9106, 9106} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 2973, .lkg_pwr = {9583, 9583, 9583, 9583, 9583, 9583} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 3644, .lkg_pwr = {10092, 10092, 10092, 10092, 10092, 10092} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 4306, .lkg_pwr = {10601, 10601, 10601, 10601, 10601, 10601} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 5119, .lkg_pwr = {11138, 11138, 11138, 11138, 11138, 11138} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 6009, .lkg_pwr = {11675, 11675, 11675, 11675, 11675, 11675} },
		{.cap = 0, .volt = 82500, .dyn_pwr = 6882, .lkg_pwr = {12242, 12242, 12242, 12242, 12242, 12242} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 7827, .lkg_pwr = {12809, 12809, 12809, 12809, 12809, 12809} },
		{.cap = 0, .volt = 87500, .dyn_pwr = 8737, .lkg_pwr = {13407, 13407, 13407, 13407, 13407, 13407} },
		{.cap = 0, .volt = 90000, .dyn_pwr = 9828, .lkg_pwr = {14005, 14005, 14005, 14005, 14005, 14005} },
		{.cap = 0, .volt = 91500, .dyn_pwr = 10400, .lkg_pwr = {14387, 14387, 14387, 14387, 14387, 14387} },
		{.cap = 0, .volt = 93500, .dyn_pwr = 11365, .lkg_pwr = {14896, 14896, 14896, 14896, 14896, 14896} },
		{.cap = 0, .volt = 95000, .dyn_pwr = 11993, .lkg_pwr = {15278, 15278, 15278, 15278, 15278, 15278} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {7714} },
		{{0}, {7714} },
		{{0}, {7714} },
		{{0}, {7714} },
		{{0}, {7714} },
		{{0}, {7714} },
	},
};
#endif
