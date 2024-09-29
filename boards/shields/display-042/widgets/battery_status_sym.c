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
