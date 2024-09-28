/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

// #include "custom_status_screen.h"
#include "battery_status.h"
#include "central_status.h"
#include "modifiers.h"
#include "bongo_drum.h"
#include "layer_status.h"
#include "output_status.h"
#include "hid_indicators.h"
#include <zmk/display/widgets/battery_status.h>

#include <zmk/events/wpm_state_changed.h>
#include <zmk/endpoints.h>
#include <zmk/wpm.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static struct zmk_widget_output_status output_status_widget;
static struct zmk_widget_layer_status layer_status_widget;
static struct zmk_widget_battery_status battery_status_widget;
static struct zmk_widget_peripheral_battery_status peripheral_battery_status_widget;
// static struct zmk_widget_peripheral_status peripheral_status_widget;
static struct zmk_widget_modifiers modifiers_widget;
static struct zmk_widget_bongo_drum bongo_drum_widget;

lv_style_t global_style;

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj,128, 32);
    
    lv_style_init(&global_style);
    lv_style_set_text_font(&global_style, &lv_font_unscii_8);
    lv_style_set_text_letter_space(&global_style, 1);
    lv_style_set_text_line_space(&global_style, 1);
    lv_obj_add_style(widget->obj, &global_style, LV_PART_MAIN);
    
 
    // 修饰符
    zmk_widget_modifiers_init(&modifiers_widget, widget->obj);
    lv_obj_align(zmk_widget_modifiers_obj(&modifiers_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);

    // 层
    zmk_widget_layer_status_init(&layer_status_widget, widget->obj);
    lv_obj_align(zmk_widget_layer_status_obj(&layer_status_widget), LV_ALIGN_TOP_LEFT, 33,0);

    // 敲鼓动画
    zmk_widget_bongo_drum_init(&bongo_drum_widget, widget->obj);
    lv_obj_align(zmk_widget_bongo_drum_obj(&bongo_drum_widget), LV_ALIGN_TOP_LEFT, 80, 0);

    // Caps_Num_Scroll_Lock
    //if IS_ENABLED(CONFIG_ZMK_HID_INDICATORS)
    //zmk_widget_hid_indicators_init(&hid_indicators_widget, widget->obj);
    //lv_obj_align_to(zmk_widget_hid_indicators_obj(&hid_indicators_widget), LV_ALIGN_TOP_LEFT, 33,9);
    //#endif

    // 电池电量(删除)
    //zmk_widget_battery_status_init(&battery_status_widget, widget->obj);
    //lv_obj_align(zmk_widget_battery_status_obj(&battery_status_widget), LV_ALIGN_TOP_LEFT, 2, 2);

// 电池电量
// #if IS_ENABLED(CONFIG_ZMK_WIDGET_BATTERY_STATUS_SHOW_PERIPHERAL)
    zmk_widget_peripheral_battery_status_init(&peripheral_battery_status_widget, widget->obj);
    lv_obj_align(zmk_widget_peripheral_battery_status_obj(&peripheral_battery_status_widget), LV_ALIGN_TOP_LEFT, 0, 0);
// #endif

    // 输入输出状态
    zmk_widget_output_status_init(&output_status_widget, widget->obj);
    lv_obj_align(zmk_widget_output_status_obj(&output_status_widget), LV_ALIGN_TOP_LEFT, 110, 0);

    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }