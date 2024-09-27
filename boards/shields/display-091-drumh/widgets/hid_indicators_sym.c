/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
 
 #include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NUMLOCK
#define LV_ATTRIBUTE_IMG_NUMLOCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NUMLOCK uint8_t numlock_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x7f, 0x00, 
  0x80, 0x80, 
  0xbe, 0x80, 
  0x84, 0x80, 
  0x88, 0x80, 
  0x90, 0x80, 
  0xbe, 0x80, 
  0x80, 0x80, 
  0x7f, 0x00, 
};

const lv_img_dsc_t numlock_ico = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 9,
  .data_size = 26,
  .data = numlock_map,
};

#ifndef LV_ATTRIBUTE_IMG_SCROLLLOCK
#define LV_ATTRIBUTE_IMG_SCROLLLOCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SCROLLLOCK uint8_t scrolllock_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x7f, 0x00, 
  0x80, 0x80, 
  0xa4, 0x80, 
  0xaa, 0x80, 
  0xaa, 0x80, 
  0xaa, 0x80, 
  0xb0, 0x80, 
  0x80, 0x80, 
  0x7f, 0x00, 
};

const lv_img_dsc_t scrolllock_ico = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 9,
  .data_size = 26,
  .data = scrolllock_map,
};

#ifndef LV_ATTRIBUTE_IMG_CAPSLOCK
#define LV_ATTRIBUTE_IMG_CAPSLOCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CAPSLOCK uint8_t capslock_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x7f, 0x00, 
  0x80, 0x80, 
  0xbe, 0x80, 
  0xa2, 0x80, 
  0xa2, 0x80, 
  0xa2, 0x80, 
  0xa2, 0x80, 
  0x80, 0x80, 
  0x7f, 0x00, 
};

const lv_img_dsc_t capslock_ico = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 9,
  .data_size = 26,
  .data = capslock_map,
};