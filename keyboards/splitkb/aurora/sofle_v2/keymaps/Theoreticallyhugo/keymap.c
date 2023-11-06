#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// XXXXXXX is for places where keys are unreachable and hence not used
// _______ is used where there is no key assigned yet

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // this is the main layer with a pretty basic layout
    // THUMBS are supposed to use exactly two keys each. homing are the layer keys and next to them is lctl and spc
    // backspace and enter are on layer two, where enter replaces space on the thumb, and backspace is under the pinky
    // however, i do need command (LGUI) a lot for macos, so its close by
	[0] = LAYOUT(KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
                 KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC,
                 KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
                 KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE, _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                   KC_LOPT, _______, KC_LCTL, MO(2)  , KC_LGUI, KC_LGUI, KC_SPC , MO(1)  , _______, KC_ROPT),

    // SPECIAL CHARACTERS
    // on this layer you get the function keys in the top row
    // second row is the numbers, as normally, just shifted down one row, with + replacing grave (^)
    // third row is the number row with shift modified, with * added to the left (its a shift modified +)
    // fourth row is a couple of special keys like so
    // <, >, ´, `, backslash, [,        ], |, {, }, ', #
    // the fifth row provides one with either another layer or the option key, which is only needed for exotic symbols, as all the others are easily accessible
    // the grave key for the symbols ^ and ° is so rarely used, that its replaced on this layer, and only accessible through the first layer
	[1] = LAYOUT(_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                          KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
                 KC_RBRC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                          KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
                 S(KC_RBRC), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                        S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(KC_MINS),
                 KC_NUBS, S(KC_NUBS), KC_EQL , S(KC_EQL), LSA(KC_7), A(KC_5), KC_MPLY, _______, A(KC_6) ,A(KC_7), A(KC_8), A(KC_9), S(KC_NUHS), KC_NUHS,
                                   _______, _______, KC_LOPT, MO(3)  , _______,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

    // NAVIGATION
    // this layer is for NAVIGATION
    // you could press any modifier combination and the arrow keys here for example. added hjkl for convenience
    // as the left hand can easily any kind of modifier combination, they are not needed on the right
    // most of this is unmodified
	[2] = LAYOUT(_______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
                 _______, KC_INS , KC_PSCR, KC_APP , _______, _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
                 _______, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, KC_CAPS,                   KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_BSPC, KC_DEL ,
                 _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, KC_H   , KC_J   , KC_L   , KC_K   , _______, _______,
                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT , MO(3)  , _______, _______),

    // SYSTEM CONTROL
    // control music, volume, sleep and the mouse
    // first row switch unicode input to the respective OS
	[3] = LAYOUT(_______, _______, UC_MAC , UC_LINX, UC_WIN , _______,                   _______, _______, _______, _______, _______, _______,
	             _______, _______, _______, KC_SLEP, _______, _______,                   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_ACL0, _______,
	             _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______,                   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL1, KC_ACL2,
	             _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______,
                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),       ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)   },
    [1] = { ENCODER_CCW_CW(KC_MRWD, KC_MFFD),       ENCODER_CCW_CW(XXXXXXX, XXXXXXX)  },
    [2] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),       ENCODER_CCW_CW(KC_BRID, KC_BRIU)  },
    [3] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),       ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




