// Copyright 2023 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(1),   KC_RGUI,          KC_RCTL
    ),
    [1] = LAYOUT_60_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, RGB_TOG, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, KC_PSCR, KC_SCRL, KC_PAUS, _______, KC_UP,   _______, _______, _______,
        _______, RGB_MOD, RGB_VAD, RGB_SPD, RGB_HUD, RGB_SAD, KC_INS,  KC_HOME, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT,          _______,
        _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,QK_BOOT, NK_TOGG, KC_END,  KC_PGDN, KC_VOLD, KC_VOLU,                   _______,
        _______, _______, _______,                   EE_CLR,                             KC_MUTE, _______, KC_APP,           _______
    )
};
