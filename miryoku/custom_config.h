// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "miryoku.h"
#include <behaviors.dtsi>
#include <behaviors/mouse_key_press.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/outputs.h>
#include <dt-bindings/zmk/ext_power.h>
#include <dt-bindings/zmk/mouse.h>

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              &kp LSHFT,         &kp LSHFT,         &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS, TERM) \
combo_##NAME { \
    timeout-ms = <TERM>; \
    bindings = <BINDINGS>; \
    key-positions = <KEYPOS>; \
    layers = <LAYERS>; \
};

/ {
    combos {
        compatible = "zmk,combos";
        COMBO(base_left,    &lt U_MEDIA ESC, 3 13, U_BASE,   50)
        COMBO(extra_left,   &lt U_MEDIA ESC, 3 13, U_EXTRA,  50)
        COMBO(button_left,  U_BTN3,          3 13, U_BUTTON, 50)
        COMBO(num_left,     &kp DOT,         3 13, U_NUM,    50)
        COMBO(sym_left,     &kp LPAR,        3 13, U_SYM,    50)
        COMBO(fun_left,     &kp K_APP,       3 13, U_FUN,    50)
        COMBO(base_right,   &lt U_FUN DEL,   6 16, U_BASE,   50)
        COMBO(extra_right,  &lt U_FUN DEL,   6 16, U_EXTRA,  50)
        COMBO(button_right, U_BTN3,          6 16, U_BUTTON, 50)
        COMBO(nav_right,    &kp DEL,         6 16, U_NAV,    50)
        COMBO(mouse_right,  U_BTN3,          6 16, U_MOUSE,  50)
        COMBO(media_right,  &kp C_MUTE,      6 16, U_MEDIA,  50)
    };
};

