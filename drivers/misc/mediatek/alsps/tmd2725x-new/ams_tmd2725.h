/*
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/*
 * Definitions for TMD2725X als/ps sensor chip.
 */
#ifndef __TMD2725X_H__
#define __TMD2725X_H__

#include <linux/ioctl.h>

#ifndef FACTORY_MACRO_PS
#define FACTORY_MACRO_PS
#define CAL_THRESHOLD                      "/persist/proxdata/threshold"
#define PATH_PROX_OFFSET                   "/persist/sensors/proximity/offset/proximity_offset"
#define PATH_PROX_UNCOVER_DATA             "/persist/sensors/proximity/uncover_data"
#define TMD2725X_CHIP_NAME 	"TMD2725X"
#define TMD2725X_THRES_MIN 	75
#define TMD2725X_THRES_MAX 	225
#define TMD2725X_DATA_MAX		265
#define TMD2725X_DATA_TARGET    35
#define TMD2725X_DATA_SAFE_RANGE_MIN		(TMD2725X_DATA_TARGET - 15)
#define TMD2725X_DATA_SAFE_RANGE_MAX		(TMD2725X_DATA_TARGET + 35)
#define TMD2725X_THRESHOLD_SAFE_DISTANCE        70
#define TMD2725X_THRESHOLD_DISTANCE             25
#define TMD2725X_THRESHOLD_HIGH_MAX             225
#define TMD2725X_THRESHOLD_HIGH_MIN             75
#define TMD2725X_THRESHOLD_LOW_MIN              70
#define TMD2725X_DEFAULT_THRESHOLD_HIGH         225
#define TMD2725X_DEFAULT_THRESHOLD_LOW          200
#endif
#define TMD2725X_CMM_INT_LOW_THD   0X88
#define TMD2725X_CMM_INT_HIGH_THD  0X8A

#define TMD2725X_SUCCESS						0
#define TMD2725X_ERR_I2C						-1
#define TMD2725X_ERR_STATUS					-3
#define TMD2725X_ERR_SETUP_FAILURE				-4
#define TMD2725X_ERR_GETGSENSORDATA			-5
#define TMD2725X_ERR_IDENTIFICATION			-6
#ifndef TMD2725X_IC_API_FUNC
#define TMD2725X_IC_API_FUNC
#endif

#ifndef TMD2725X_IC_API_FUNC_SYS
#define TMD2725X_IC_API_FUNC_SYS
#endif
#endif
