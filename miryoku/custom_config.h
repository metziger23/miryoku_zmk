// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
    combos {
        compatible = "zmk,combos";
        combo_esc {
            timeout-ms = <50>;
            key-positions = <3 13>;
            bindings = <&kp ESC>;
        };
        combo_del {
            timeout-ms = <50>;
            key-positions = <6 16>;
            bindings = <&kp DEL>;
        };
    };
};
