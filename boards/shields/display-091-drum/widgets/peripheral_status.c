/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/display.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/split/bluetooth/peripheral.h>
#include <zmk/events/split_peripheral_status_changed.h>

#include <zmk/usb.h>
#include <zmk/ble.h>

// #include <zmk/events/wpm_state_changed.h>
// #include <zmk/endpoints.h>
// #include <zmk/wpm.h>

#include "peripheral_status.h"


static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

LV_IMG_DECLARE(symbol_wifi_icon);
LV_IMG_DECLARE(symbol_ok_icon);
LV_IMG_DECLARE(symbol_nok_icon);
LV_IMG_DECLARE(symbol_charge_icon);
LV_IMG_DECLARE(bamboo_icon);
LV_IMG_DECLARE(battery00_icon);
LV_IMG_DECLARE(battery10_icon);
LV_IMG_DECLARE(battery20_icon);
LV_IMG_DECLARE(battery30_icon);
LV_IMG_DECLARE(battery40_icon);
LV_IMG_DECLARE(battery50_icon);
LV_IMG_DECLARE(battery60_icon);
LV_IMG_DECLARE(battery70_icon);
LV_IMG_DECLARE(battery80_icon);
LV_IMG_DECLARE(battery90_icon);
LV_IMG_DECLARE(batterycharge_icon);
LV_IMG_DECLARE(disconnect_icon);

const lv_img_dsc_t *batterys_level[] = {
    &battery00_icon,
    &battery10_icon,
    &battery20_icon,
    &battery30_icon,
    &battery40_icon,
    &battery50_icon,
    &battery60_icon,
    &battery70_icon,
    &battery80_icon,
    &battery90_icon,
    &batterycharge_icon,
    &disconnect_icon,
};

enum peripheral_symbol {
    peripheral_symbol_wifi,
    peripheral_symbol_wifi_status,
    peripheral_symbol_battery_status,
    peripheral_symbol_charge,
};

struct peripheral_status_state {
    bool connected;
};

static void set_battery_symbol(lv_obj_t *widget, struct battery_status_state state) {
    lv_obj_t *symbol = lv_obj_get_child(widget, peripheral_symbol_battery_status );
    lv_obj_t *symbol_charge = lv_obj_get_child(widget, peripheral_symbol_charge);
    // lv_obj_t *symbol = lv_obj_get_child(widget, state.source * 2);
    // lv_obj_t *label = lv_obj_get_child(widget, state.source * 2 + 1);
    uint8_t level = state.level;
    // if (level > 0 || state.usb_present) {
    //     lv_obj_clear_flag(symbol, LV_OBJ_FLAG_HIDDEN);
    // } else {
        // lv_obj_add_flag(symbol, LV_OBJ_FLAG_HIDDEN);
    // }
    if (!state.usb_present) {
        lv_obj_add_flag(symbol_charge, LV_OBJ_FLAG_HIDDEN);
        if (level > 95) {
            lv_img_set_src(symbol, batterys_level[9]);
        } else if (level > 85) {
            lv_img_set_src(symbol, batterys_level[8]);
        } else if (level > 75) {
            lv_img_set_src(symbol, batterys_level[7]);
        } else if (level > 65) {
            lv_img_set_src(symbol, batterys_level[6]);
        } else if (level > 55) {
            lv_img_set_src(symbol, batterys_level[5]);
        } else if (level > 45) {
            lv_img_set_src(symbol, batterys_level[4]);
        } else if (level > 35) {
            lv_img_set_src(symbol, batterys_level[3]);
        } else if (level > 25) {
            lv_img_set_src(symbol, batterys_level[2]);
        } else if (level > 15) {
            lv_img_set_src(symbol, batterys_level[1]);
        } else {
            lv_img_set_src(symbol, batterys_level[0]);
        }
    } else {
        lv_obj_clear_flag(symbol_charge, LV_OBJ_FLAG_HIDDEN);
    }
}

static void set_battery_status(struct zmk_widget_status *widget, struct battery_status_state state) {
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
    widget->state.charging = state.usb_present;
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

    widget->state.battery = state.level;

    // set_battery_symbol(widget->obj, &widget->state);
    set_battery_symbol(widget->obj, state);
}

static void battery_status_update_cb(struct battery_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_status(widget, state); }
}

static struct battery_status_state battery_status_get_state(const zmk_event_t *eh) {
    return (struct battery_status_state) {
        .level = zmk_battery_state_of_charge(),
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
        .usb_present = zmk_usb_is_powered(),
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_status_state, battery_status_update_cb, battery_status_get_state)

ZMK_SUBSCRIPTION(widget_battery_status, zmk_battery_state_changed);
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_usb_conn_state_changed);
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
static struct peripheral_status_state get_state(const zmk_event_t *_eh) {
    return (struct peripheral_status_state){.connected = zmk_split_bt_peripheral_is_connected()};
}

static void set_connection_status(struct zmk_widget_status *widget, struct peripheral_status_state state) {
    widget->state.connected = state.connected;

    lv_obj_t *wifi_status = lv_obj_get_child(widget->obj, peripheral_symbol_wifi_status);
    if (state.connected){
        lv_img_set_src(wifi_status, &symbol_ok_icon);
    } else {
        lv_img_set_src(wifi_status, &symbol_nok_icon);
    }

}

static void output_status_update_cb(struct peripheral_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_connection_status(widget, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_peripheral_status, struct peripheral_status_state, output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_peripheral_status, zmk_split_peripheral_status_changed);


int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 128, 32);

    lv_obj_t *battery_status = lv_img_create(widget->obj);
    lv_obj_align(battery_status, LV_ALIGN_TOP_LEFT, 0, 1);
    lv_img_set_src(battery_status, batterys_level[0]);

    lv_obj_t *battery_charge = lv_img_create(widget->obj);
    lv_obj_align_to(battery_charge, battery_status, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 2);
    lv_img_set_src(battery_charge, &symbol_charge_icon);
    // lv_obj_add_flag(battery_charge, LV_OBJ_FLAG_HIDDEN);

    lv_obj_t *wifi = lv_img_create(widget->obj);
    lv_obj_align(wifi, LV_ALIGN_TOP_RIGHT, -1, 1);
    lv_img_set_src(wifi, &symbol_wifi_icon);

    lv_obj_t *wifi_status = lv_img_create(widget->obj);
    lv_obj_align_to(wifi_status, wifi, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 1);
    lv_img_set_src(wifi, &symbol_nok_icon);

    lv_obj_t *art = lv_img_create(widget->obj);
    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 15, 0);
    lv_img_set_src(art, &bamboo_icon);

    sys_slist_append(&widgets, &widget->node);
    widget_battery_status_init();
    widget_peripheral_status_init();
    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }