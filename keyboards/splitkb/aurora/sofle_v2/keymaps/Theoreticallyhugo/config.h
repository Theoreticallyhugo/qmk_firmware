/* Copyright 2023 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// reference
// https://docs.qmk.fm/#/feature_encoders?id=encoders

#pragma once

// already defined in rev1/info.json
// #define ENCODERS_PAD_A { B12 }
// #define ENCODERS_PAD_B { B13 }

//if clockwise and ccw are swapped
//#define ENCODER_DIRECTION_FLIP

//how many pulses registered per indent
#define ENCODER_RESOLUTION 4

//if you need different resolutions for your encoders
//#define ENCODER_RESOLUTIONS { 4, 2 }

// meaning the speed is constant
#define MK_3_SPEED
// meaning it defaults to speed 0 and changes to another for as long as that key is pressed
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 	16 	//Cursor offset per movement (unmodified)
#define MK_C_INTERVAL_UNMOD 	16 	//Time between cursor movements (unmodified)
#define MK_C_OFFSET_0 	1 	//Cursor offset per movement (KC_ACL0)
#define MK_C_INTERVAL_0 	32 	//Time between cursor movements (KC_ACL0)
#define MK_C_OFFSET_1 	4 	//Cursor offset per movement (KC_ACL1)
#define MK_C_INTERVAL_1 	16 	//Time between cursor movements (KC_ACL1)
#define MK_C_OFFSET_2 	32 	//Cursor offset per movement (KC_ACL2)
#define MK_C_INTERVAL_2 	16 	//Time between cursor movements (KC_ACL2)
#define MK_W_OFFSET_UNMOD 	1 	//Scroll steps per scroll action (unmodified)
#define MK_W_INTERVAL_UNMOD 	40 	//Time between scroll steps (unmodified)
#define MK_W_OFFSET_0 	1 	//Scroll steps per scroll action (KC_ACL0)
#define MK_W_INTERVAL_0 	360 	//Time between scroll steps (KC_ACL0)
#define MK_W_OFFSET_1 	1 	// Scroll steps per scroll action (KC_ACL1)
#define MK_W_INTERVAL_1 	120 	//Time between scroll steps (KC_ACL1)
#define MK_W_OFFSET_2 	1 	// Scroll steps per scroll action (KC_ACL2)
#define MK_W_INTERVAL_2 20 	//Time between scroll steps (KC_ACL2)

// this is for accelerated use
// #define MOUSEKEY_DELAY 0
// // 16 fits a 60 hz monitor
// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_MOVE_DELTA 6
// #define MOUSEKEY_MAX_SPEED 9
// #define MOUSEKEY_TIME_TO_MAX 50
// #define MOUSEKEY_WHEEL_DELAY 0
// #define MOUSEKEY_WHEEL_INTERVAL 32
// #define MOUSEKEY_WHEEL_DELTA 1
// #define MOUSEKEY_WHEEL_MAX_SPEED 4
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 40
//
// #define RGB_DISABLE_WHEN_USB_SUSPENDED
// #define RGB_MATRIX_KEYPRESSES
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
