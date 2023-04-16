// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// References 
//    https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
//    https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md


#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x6(      
      KC_Z, C(S(KC_R)), A(KC_R), C(KC_I), C(KC_T), C(KC_U),
      C(KC_F), C(KC_D), C(KC_K), C(KC_N), C(KC_O), KC_NO,
      TO(1), C(KC_A), C(S(KC_G)), C(KC_V), KC_NO, TO(0)
    ),
    [1] = LAYOUT_3x6(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        TO(2), KC_B, KC_C, KC_D, KC_E, TO(0)
    ),
    [2] = LAYOUT_3x6(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        TO(3), KC_B, KC_C, KC_D, KC_E, TO(0)
    ),
    [3] = LAYOUT_3x6(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        TO(0), KC_B, KC_C, KC_D, KC_E, TO(0)
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(C(S(KC_DEL)), C(S(KC_INS))),
              ENCODER_CCW_CW(C(KC_DEL), C(KC_INS)),
			  ENCODER_CCW_CW(C(KC_PGDN), C(KC_PGUP)),
			  ENCODER_CCW_CW(C(KC_END), C(KC_HOME))
			},
    [1] =   { ENCODER_CCW_CW(KC_G, KC_H),
              ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H)
			},
    [2] =   { ENCODER_CCW_CW(KC_G, KC_H),
              ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H)
			},
    [3] =   { ENCODER_CCW_CW(KC_G, KC_H),
              ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H),
			  ENCODER_CCW_CW(KC_G, KC_H)
			},
};
#endif