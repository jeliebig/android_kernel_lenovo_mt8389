/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <hardware/sensors.h>
#include <linux/hwmsensor.h>
#include "hwmsen_custom.h"

struct sensor_t sSensorList[MAX_NUM_SENSORS] = 
{
	{  
		.name       = "kxtik1004 3-axis Accelerometer",
		.vendor     = "Kionix",
		.version    = 1,
		.handle     = ID_ACCELEROMETER,
		.type       = SENSOR_TYPE_ACCELEROMETER,
		.maxRange   = 32.0f,
		.resolution = 4.0f/1024.0f,
		.power      =130.0f/1000.0f,
		.reserved   = {}
	},	

	{ 
		.name       = "APDS9930  Proximity Sensor",
		.vendor     = "Avago",
		.version    = 1,
		.handle     = ID_PROXIMITY,
		.type       = SENSOR_TYPE_PROXIMITY,
		.maxRange   = 1.00f,
		.resolution = 1.0f,
		.power      = 0.13f,
		.reserved   = {}
	},

	{ 
		.name       = "APDS9930 Light Sensor",
		.vendor     = "Avago",
		.version    = 1,
		.handle     = ID_LIGHT,
		.type       = SENSOR_TYPE_LIGHT,
		.maxRange   = 10240.0f,
		.resolution = 1.0f,
		.power      = 0.13f,
		.reserved   = {}
	},
	
	{ 
		.name       = "MPU3050c  gyroscope Sensor",
		.vendor     = "Invensensor",
		.version    = 1,
		.handle     = ID_GYROSCOPE,
		.type       = SENSOR_TYPE_GYROSCOPE,
		.maxRange   = 34.91f,
		.resolution = 0.0107f,
		.power      = 6.1f,
		.reserved   = {}
	},
	
	{ 
		.name       = "Yamaha532 Orientation sensor",
		.vendor     = "Yamaha",
		.version    = 1,
		.handle     = ID_ORIENTATION,
		.type       = SENSOR_TYPE_ORIENTATION,
		.maxRange   = 360.0f,
		.resolution = 1.0f,
		.power      = 0.25f,
		.reserved   = {}
	},

	{ 
		.name       = "Yamaha532 3-axis Magnetic Field sensor",
		.vendor     = "Yamaha",
		.version    = 1,
		.handle     = ID_MAGNETIC,
		.type       = SENSOR_TYPE_MAGNETIC_FIELD,
		.maxRange   = 600.0f,
		.resolution = 0.0016667f,
		.power      = 0.25f,
		.reserved   = {}
	}, 

       {
	        .name       = "Azoteq IQS128/IQS128LP cap-sensor",
	        .vendor     = "infortech",
	        .version    = 1,
	        .handle     = ID_CAPSENSOR,
	        .type       = SENSOR_TYPE_CAPSENSOR,
	        .maxRange   = 1.0f,
	        .resolution = 0.0016667f,
	        .power      = 0.25f,
	        .reserved   = {}
       }, 

};

