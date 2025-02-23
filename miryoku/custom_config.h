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

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           &kp LSHFT,         &kp LSHFT,         U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             U_LT(U_MEDIA, D),  &kp V,             &kp K,             U_LT(U_FUN, H),    &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             U_LT(U_MEDIA, V),  &kp B,             &kp N,             U_LT(U_FUN, M),    &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

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

#define U_TAPPING_TERM 170
