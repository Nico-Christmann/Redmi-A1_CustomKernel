/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2020 MediaTek Inc.
 */

#include "mtk_cpufreq_config.h"

#define NR_FREQ		16
#define ARRAY_COL_SIZE	4

static unsigned int fyTbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	{ 2600, 95, 1, 1 },	/* LL */
	{ 2400, 95, 1, 1 },
	{ 2200, 95, 1, 1 },
	{ 1767, 67, 1, 1 },
	{ 1700, 63, 1, 1 },
	{ 1633, 59, 1, 1 },
	{ 1533, 53, 1, 1 },
	{ 1466, 49, 2, 1 },
	{ 1400, 45, 2, 1 },
	{ 1308, 41, 2, 1 },
	{ 1216, 37, 2, 1 },
	{ 1125, 33, 2, 1 },
	{ 1056, 30, 2, 1 },
	{  900, 25, 2, 1 },
	{  700, 25, 2, 1 },
	{  500, 25, 2, 1 },
};

static unsigned int sbTbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
        { 2600, 95, 1, 1 },	/* LL */
	{ 2400, 95, 1, 1 },
	{ 2200, 95, 1, 1 },
	{ 1889, 67, 1, 1 },
	{ 1800, 63, 1, 1 },
	{ 1711, 59, 1, 1 },
	{ 1622, 55, 1, 1 },
	{ 1533, 51, 1, 1 },
	{ 1466, 48, 2, 1 },
	{ 1400, 45, 2, 1 },
	{ 1308, 41, 2, 1 },
	{ 1216, 37, 2, 1 },
	{ 1125, 33, 2, 1 },
	{ 1033, 29, 2, 1 },
	{ 900, 25, 2, 1 },
	{ 500, 25, 2, 1 },
};

static unsigned int fy2Tbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
        { 2600, 95, 1, 1 },	/* LL */
	{ 2400, 95, 1, 1 },
	{ 2200, 95, 1, 1 },
	{ 1767, 67, 1, 1 },
	{ 1700, 63, 1, 1 },
	{ 1633, 59, 1, 1 },
	{ 1533, 53, 1, 1 },
	{ 1466, 49, 2, 1 },
	{ 1400, 45, 2, 1 },
	{ 1308, 45, 2, 1 },
	{ 1216, 45, 2, 1 },
	{ 1125, 45, 2, 1 },
	{ 1056, 45, 2, 1 },
	{  900, 40, 2, 1 },
	{  700, 40, 2, 1 },
	{  500, 40, 2, 1 },
};

static unsigned int LiteTbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	{ 2600, 95, 1, 1 },	/* LL */
	{ 2400, 95, 1, 1 },
	{ 2200, 95, 1, 1 },
	{ 1700, 63, 1, 1 },
	{ 1667, 61, 1, 1 },
	{ 1633, 59, 1, 1 },
	{ 1533, 53, 1, 1 },
	{ 1466, 49, 2, 1 },
	{ 1400, 45, 2, 1 },
	{ 1308, 41, 2, 1 },
	{ 1216, 37, 2, 1 },
	{ 1125, 33, 2, 1 },
	{ 1056, 30, 2, 1 },
	{  900, 25, 2, 1 },
	{  700, 25, 2, 1 },
	{  500, 25, 2, 1 },
};

unsigned int *xrecordTbl[NUM_CPU_LEVEL] = {	/* v0.3 */
	[CPU_LEVEL_0] = &fyTbl[0][0],
	[CPU_LEVEL_1] = &sbTbl[0][0],
	[CPU_LEVEL_2] = &fy2Tbl[0][0],
	[CPU_LEVEL_3] = &LiteTbl[0][0],
};
