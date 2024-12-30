// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "miryoku.h"
#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/ {
    combos {
        compatible = "zmk,combos";
        combo_esc {
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&lt U_MEDIA ESC>;
        };
        combo_del {
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&lt U_FUN DEL>;
        };
    };
};

