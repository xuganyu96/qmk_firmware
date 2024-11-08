#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define CTL_S LCTL_T(KC_S)
#define ALT_D LALT_T(KC_D)
#define CMD_F LGUI_T(KC_F)
#define SUPER_G ALL_T(KC_G)
#define CMD_J RGUI_T(KC_J)
#define ALT_K RALT_T(KC_K)
#define CTL_L RCTL_T(KC_L)
#define OSMLSFT OSM(MOD_LSFT)
#define OSMRSFT OSM(MOD_RSFT)
#define LT1_ENT LT(1, KC_ENT)
#define CMD_4 RGUI_T(KC_4)
#define ALT_5 RALT_T(KC_5)
#define CTL_6 RCTL_T(KC_6)
#define LSFTTAB LSFT_T(KC_TAB)
#define RSFTQUOT RSFT_T(KC_QUOT)
#define LT2_TAB LT(2, KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /** Base layer
    */
    [0] = LAYOUT_split_3x5_2(
        KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
        KC_A,    CTL_S,    ALT_D,    CMD_F,  SUPER_G,               KC_H,    CMD_J,    ALT_K,    CTL_L,  KC_SCLN,
        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,               KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SLSH,
                                    KC_SPC,   KC_TAB,            OSMLSFT,  LT1_ENT
    ),

    /** Symbols and numbers
    */
    [1] = LAYOUT_split_3x5_2(
       KC_ESC,   KC_GRV, KC_LBRC,  KC_RBRC,  XXXXXXX,             KC_EQL,     KC_7,     KC_8,     KC_9,  KC_BSLS,
      OSMLSFT,  KC_BSPC, KC_LPRN,  KC_RPRN,  XXXXXXX,            KC_MINS,    CMD_4,    ALT_5,    CTL_6, RSFTQUOT,
      XXXXXXX,  XXXXXXX,   KC_LT,    KC_GT,   KC_DOT,               KC_0,     KC_1,     KC_2,     KC_3,  XXXXXXX,
                                   KC_TRNS,    MO(2),            KC_TRNS,  KC_TRNS
    ),

    /** Navigation and reset
    */
    [2] = LAYOUT_split_3x5_2(
      QK_BOOT,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  KC_VOLD, KC_VOLU,   KC_MUTE,  XXXXXXX,
      KC_LSFT,  KC_LCTL, KC_LALT,  KC_LGUI,  XXXXXXX,            KC_LEFT,  KC_DOWN,   KC_UP,   KC_RGHT,  XXXXXXX,
      XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX,
                                   XXXXXXX,  XXXXXXX,            KC_TRNS,  KC_TRNS
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


const uint16_t PROGMEM kc_we[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_io[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kc_xc[] = {KC_X, KC_C, COMBO_END};
combo_t key_combos[] = {
    // COMBO(kc_we, KC_ESC),
    // COMBO(kc_io, KC_BSPC),
    // COMBO(kc_xc, KC_TAB),
};
