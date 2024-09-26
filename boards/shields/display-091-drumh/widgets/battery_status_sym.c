/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
 
 #include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATTERY00
#define LV_ATTRIBUTE_IMG_BATTERY00
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY00 uint8_t battery00_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery00_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery00_map,
};

#ifndef LV_ATTRIBUTE_IMG_BATTERY10
#define LV_ATTRIBUTE_IMG_BATTERY10
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY10 uint8_t battery10_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery10_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery10_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY20
#define LV_ATTRIBUTE_IMG_BATTERY20
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY20 uint8_t battery20_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery20_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery20_map,
};

#ifndef LV_ATTRIBUTE_IMG_BATTERY30
#define LV_ATTRIBUTE_IMG_BATTERY30
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY30 uint8_t battery30_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery30_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery30_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY40
#define LV_ATTRIBUTE_IMG_BATTERY40
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY40 uint8_t battery40_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery40_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery40_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY50
#define LV_ATTRIBUTE_IMG_BATTERY50
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY50 uint8_t battery50_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery50_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery50_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY60
#define LV_ATTRIBUTE_IMG_BATTERY60
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY60 uint8_t battery60_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery60_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery60_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY70
#define LV_ATTRIBUTE_IMG_BATTERY70
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY70 uint8_t battery70_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery70_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery70_map,
};

#ifndef LV_ATTRIBUTE_IMG_BATTERY80
#define LV_ATTRIBUTE_IMG_BATTERY80
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY80 uint8_t battery80_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x41, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery80_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery80_map,
};


#ifndef LV_ATTRIBUTE_IMG_BATTERY90
#define LV_ATTRIBUTE_IMG_BATTERY90
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY90 uint8_t battery90_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t battery90_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = battery90_map,
};

#ifndef LV_ATTRIBUTE_IMG_BATTERYCHARGE
#define LV_ATTRIBUTE_IMG_BATTERYCHARGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERYCHARGE uint8_t batterycharge_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x1c, 0x00, 
  0x7f, 0x00, 
  0x7d, 0x00, 
  0x7b, 0x00, 
  0x77, 0x00, 
  0x67, 0x00, 
  0x41, 0x00, 
  0x79, 0x00, 
  0x7b, 0x00, 
  0x77, 0x00, 
  0x6f, 0x00, 
  0x7f, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t batterycharge_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = batterycharge_map,
};

#ifndef LV_ATTRIBUTE_IMG_DISCONNECT
#define LV_ATTRIBUTE_IMG_DISCONNECT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DISCONNECT uint8_t disconnect_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x08, 0x00, 
  0x08, 0x00, 
  0x1c, 0x00, 
  0x3e, 0x00, 
  0x3e, 0x00, 
  0x7f, 0x00, 
  0x22, 0x00, 
  0x22, 0x00, 
  0x00, 0x00, 
  0x7f, 0x00, 
  0x3e, 0x00, 
  0x3e, 0x00, 
  0x1c, 0x00, 
  0x08, 0x00, 
};

const lv_img_dsc_t disconnect_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = disconnect_map,
};
