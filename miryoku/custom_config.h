// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "miryoku.h"
#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/ {
    combos {
        compatible = "zmk,combos";
        combo_base_left {
            layers = <U_BASE>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&lt U_MEDIA ESC>;
        };
        combo_extra_left {
            layers = <U_EXTRA>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&lt U_MEDIA ESC>;
        };
        combo_button_left {
            layers = <U_BUTTON>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <U_BTN3>;
        };
        combo_num_left {
            layers = <U_NUM>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&kp DOT>;
        };
        combo_sym_left {
            layers = <U_SYM>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&kp LPAR>;
        };
        combo_fun_left {
            layers = <U_FUN>;
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&kp K_APP>;
        };
        combo_base_right {
            layers = <U_BASE>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&lt U_FUN DEL>;
        };
        combo_extra_right {
            layers = <U_EXTRA>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&lt U_FUN DEL>;
        };
        combo_button_right {
            layers = <U_BUTTON>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <U_BTN3>;
        };
        combo_nav_right {
            layers = <U_NAV>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&kp DEL>;
        };
        combo_mouse_right {
            layers = <U_MOUSE>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <U_BTN3>;
        };
        combo_media_right {
            layers = <U_MEDIA>;
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&kp C_MUTE>;
        };
    };
};

