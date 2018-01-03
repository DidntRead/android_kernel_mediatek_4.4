/*
 * Copyright (C) 2017 MediaTek Inc.
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

/* Ver: Zion_FY_UPT_20170414 */
/* Ver: Zion_SB_UPT_20170414 */

#ifndef MTK_UNIFIED_POWER_DATA_MT6739_H
#define MTK_UNIFIED_POWER_DATA_MT6739_H

/* Zion_FY_WAT0_85C */
struct upower_tbl upower_tbl_ll_FY = {
	.row = {
	{.cap = 240, .volt = 95000, .dyn_pwr = 28752, .lkg_pwr = {34612, 34612, 34612, 34612, 34612, 34612} },
	{.cap = 272, .volt = 97500, .dyn_pwr = 34236, .lkg_pwr = {36069, 36069, 36069, 36069, 36069, 36069} },
	{.cap = 334, .volt = 100000, .dyn_pwr = 44325, .lkg_pwr = {37527, 37527, 37527, 37527, 37527, 37527} },
	{.cap = 439, .volt = 102500, .dyn_pwr = 61122, .lkg_pwr = {38997, 38997, 38997, 38997, 38997, 38997} },
	{.cap = 502, .volt = 105000, .dyn_pwr = 73302, .lkg_pwr = {40467, 40467, 40467, 40467, 40467, 40467} },
	{.cap = 564, .volt = 107500, .dyn_pwr = 86439, .lkg_pwr = {41927, 41927, 41927, 41927, 41927, 41927} },
	{.cap = 679, .volt = 111900, .dyn_pwr = 112738, .lkg_pwr = {44520, 44520, 44520, 44520, 44520, 44520} },
	{.cap = 731, .volt = 113700, .dyn_pwr = 125348, .lkg_pwr = {45593, 45593, 45593, 45593, 45593, 45593} },
	{.cap = 773, .volt = 115600, .dyn_pwr = 136976, .lkg_pwr = {46749, 46749, 46749, 46749, 46749, 46749} },
	{.cap = 805, .volt = 117500, .dyn_pwr = 147253, .lkg_pwr = {47956, 47956, 47956, 47956, 47956, 47956} },
	{.cap = 846, .volt = 120000, .dyn_pwr = 161564, .lkg_pwr = {49544, 49544, 49544, 49544, 49544, 49544} },
	{.cap = 888, .volt = 122500, .dyn_pwr = 176680, .lkg_pwr = {51260, 51260, 51260, 51260, 51260, 51260} },
	{.cap = 940, .volt = 125000, .dyn_pwr = 194787, .lkg_pwr = {52975, 52975, 52975, 52975, 52975, 52975} },
	{.cap = 961, .volt = 126900, .dyn_pwr = 205215, .lkg_pwr = {54895, 54895, 54895, 54895, 54895, 54895} },
	{.cap = 993, .volt = 128700, .dyn_pwr = 217961, .lkg_pwr = {56713, 56713, 56713, 56713, 56713, 56713} },
	{.cap = 1024, .volt = 130600, .dyn_pwr = 231531, .lkg_pwr = {58569, 58569, 58569, 58569, 58569, 58569} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
	},
};

struct upower_tbl upower_tbl_cluster_ll_FY = {
	.row = {
	{.cap = 240, .volt = 95000, .dyn_pwr = 7004, .lkg_pwr = {16461, 16461, 16461, 16461, 16461, 16461} },
	{.cap = 272, .volt = 97500, .dyn_pwr = 8339, .lkg_pwr = {17422, 17422, 17422, 17422, 17422, 17422} },
	{.cap = 334, .volt = 100000, .dyn_pwr = 10797, .lkg_pwr = {18384, 18384, 18384, 18384, 18384, 18384} },
	{.cap = 439, .volt = 102500, .dyn_pwr = 14889, .lkg_pwr = {19532, 19532, 19532, 19532, 19532, 19532} },
	{.cap = 502, .volt = 105000, .dyn_pwr = 17856, .lkg_pwr = {20679, 20679, 20679, 20679, 20679, 20679} },
	{.cap = 564, .volt = 107500, .dyn_pwr = 21056, .lkg_pwr = {22226, 22226, 22226, 22226, 22226, 22226} },
	{.cap = 679, .volt = 111900, .dyn_pwr = 27462, .lkg_pwr = {25242, 25242, 25242, 25242, 25242, 25242} },
	{.cap = 731, .volt = 113700, .dyn_pwr = 30533, .lkg_pwr = {26634, 26634, 26634, 26634, 26634, 26634} },
	{.cap = 773, .volt = 115600, .dyn_pwr = 33366, .lkg_pwr = {28176, 28176, 28176, 28176, 28176, 28176} },
	{.cap = 805, .volt = 117500, .dyn_pwr = 35869, .lkg_pwr = {29873, 29873, 29873, 29873, 29873, 29873} },
	{.cap = 846, .volt = 120000, .dyn_pwr = 39355, .lkg_pwr = {32107, 32107, 32107, 32107, 32107, 32107} },
	{.cap = 888, .volt = 122500, .dyn_pwr = 43038, .lkg_pwr = {34636, 34636, 34636, 34636, 34636, 34636} },
	{.cap = 940, .volt = 125000, .dyn_pwr = 47448, .lkg_pwr = {37165, 37165, 37165, 37165, 37165, 37165} },
	{.cap = 961, .volt = 126900, .dyn_pwr = 49988, .lkg_pwr = {38257, 38257, 38257, 38257, 38257, 38257} },
	{.cap = 993, .volt = 128700, .dyn_pwr = 53093, .lkg_pwr = {39291, 39291, 39291, 39291, 39291, 39291} },
	{.cap = 1024, .volt = 130600, .dyn_pwr = 56399, .lkg_pwr = {40667, 40667, 40667, 40667, 40667, 40667} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
	},
};


/* Zion_SB_WAT0_85C */
struct upower_tbl upower_tbl_ll_SB = {
	.row = {
	{.cap = 191, .volt = 102700, .dyn_pwr = 33602, .lkg_pwr = {39115, 39115, 39115, 39115, 39115, 39115} },
	{.cap = 216, .volt = 105400, .dyn_pwr = 40008, .lkg_pwr = {40701, 40701, 40701, 40701, 40701, 40701} },
	{.cap = 266, .volt = 108100, .dyn_pwr = 51796, .lkg_pwr = {42278, 42278, 42278, 42278, 42278, 42278} },
	{.cap = 350, .volt = 110800, .dyn_pwr = 71421, .lkg_pwr = {43865, 43865, 43865, 43865, 43865, 43865} },
	{.cap = 400, .volt = 113500, .dyn_pwr = 85651, .lkg_pwr = {45474, 45474, 45474, 45474, 45474, 45474} },
	{.cap = 450, .volt = 116200, .dyn_pwr = 100996, .lkg_pwr = {47130, 47130, 47130, 47130, 47130, 47130} },
	{.cap = 500, .volt = 118900, .dyn_pwr = 117493, .lkg_pwr = {48845, 48845, 48845, 48845, 48845, 48845} },
	{.cap = 549, .volt = 121600, .dyn_pwr = 135179, .lkg_pwr = {50642, 50642, 50642, 50642, 50642, 50642} },
	{.cap = 608, .volt = 124300, .dyn_pwr = 156229, .lkg_pwr = {52495, 52495, 52495, 52495, 52495, 52495} },
	{.cap = 641, .volt = 127000, .dyn_pwr = 172027, .lkg_pwr = {54996, 54996, 54996, 54996, 54996, 54996} },
	{.cap = 674, .volt = 129700, .dyn_pwr = 188739, .lkg_pwr = {57723, 57723, 57723, 57723, 57723, 57723} },
	{.cap = 708, .volt = 132400, .dyn_pwr = 206392, .lkg_pwr = {60196, 60196, 60196, 60196, 60196, 60196} },
	{.cap = 749, .volt = 135100, .dyn_pwr = 227536, .lkg_pwr = {62644, 62644, 62644, 62644, 62644, 62644} },
	{.cap = 841, .volt = 137200, .dyn_pwr = 263346, .lkg_pwr = {64691, 64691, 64691, 64691, 64691, 64691} },
	{.cap = 932, .volt = 139200, .dyn_pwr = 300603, .lkg_pwr = {66640, 66640, 66640, 66640, 66640, 66640} },
	{.cap = 1024, .volt = 141200, .dyn_pwr = 339681, .lkg_pwr = {68680, 68680, 68680, 68680, 68680, 68680} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
		{{0}, {18433} },
	},
};

struct upower_tbl upower_tbl_cluster_ll_SB = {
	.row = {
	{.cap = 191, .volt = 102700, .dyn_pwr = 8185, .lkg_pwr = {19623, 19623, 19623, 19623, 19623, 19623} },
	{.cap = 216, .volt = 105400, .dyn_pwr = 9746, .lkg_pwr = {20927, 20927, 20927, 20927, 20927, 20927} },
	{.cap = 266, .volt = 108100, .dyn_pwr = 12617, .lkg_pwr = {22598, 22598, 22598, 22598, 22598, 22598} },
	{.cap = 350, .volt = 110800, .dyn_pwr = 17397, .lkg_pwr = {24392, 24392, 24392, 24392, 24392, 24392} },
	{.cap = 400, .volt = 113500, .dyn_pwr = 20864, .lkg_pwr = {26480, 26480, 26480, 26480, 26480, 26480} },
	{.cap = 450, .volt = 116200, .dyn_pwr = 24602, .lkg_pwr = {28712, 28712, 28712, 28712, 28712, 28712} },
	{.cap = 500, .volt = 118900, .dyn_pwr = 28620, .lkg_pwr = {31124, 31124, 31124, 31124, 31124, 31124} },
	{.cap = 549, .volt = 121600, .dyn_pwr = 32928, .lkg_pwr = {33726, 33726, 33726, 33726, 33726, 33726} },
	{.cap = 608, .volt = 124300, .dyn_pwr = 38056, .lkg_pwr = {36457, 36457, 36457, 36457, 36457, 36457} },
	{.cap = 641, .volt = 127000, .dyn_pwr = 41904, .lkg_pwr = {38314, 38314, 38314, 38314, 38314, 38314} },
	{.cap = 674, .volt = 129700, .dyn_pwr = 45975, .lkg_pwr = {39865, 39865, 39865, 39865, 39865, 39865} },
	{.cap = 708, .volt = 132400, .dyn_pwr = 50275, .lkg_pwr = {42554, 42554, 42554, 42554, 42554, 42554} },
	{.cap = 749, .volt = 135100, .dyn_pwr = 55425, .lkg_pwr = {45399, 45399, 45399, 45399, 45399, 45399} },
	{.cap = 841, .volt = 137200, .dyn_pwr = 64148, .lkg_pwr = {47890, 47890, 47890, 47890, 47890, 47890} },
	{.cap = 932, .volt = 139200, .dyn_pwr = 73224, .lkg_pwr = {50262, 50262, 50262, 50262, 50262, 50262} },
	{.cap = 1024, .volt = 141200, .dyn_pwr = 82743, .lkg_pwr = {52820, 52820, 52820, 52820, 52820, 52820} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
		{{0}, {9806} },
	},
};

#endif /* MTK_UNIFIED_POWER_DATA_MT6739_H */
