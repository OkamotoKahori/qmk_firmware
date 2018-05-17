#include "ergo42.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | LAlt | Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  | POWER|
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Del  | RCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   ]  |  \   |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | META | LCtrl|   `  |   '  | LGUI | ESC  |Space |   |Enter | Bksp |   -  |   =  | LEFT | DOWN | RIGHT|
 * `------------------------------------------------'   `------------------------------------------------'
 */

[BASE] = KEYMAP( \
  KC_LALT,   KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC,KC_SYSTEM_POWER, \
  KC_DELT,  KC_RCTL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RBRC, KC_BSLS, \
  MO(SYMB), KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_RSFT, \
  MO(META), KC_LCTL, KC_GRV, KC_QUOT, KC_LGUI, KC_ESC, KC_SPC, KC_ENT, KC_BSPC, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT \
),

/* META
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | Reset|      |  F9  |  F10 |  F11 |  F12 |  [   |   |  ]   |      |   7  |   8  |   9  |      | POWER|
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Del  |      |  F5  |  F6  |  F7  |  F8  |  (   |   |  )   |      |   4  |   5  |   6  |      |  \   |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | SYMB |      |  F1  |  F2  |  F3  |  F4  |  {   |   |  }   |   =  |   1  |   2  |   3  |  UP  | RSft |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | META | LCtrl|   `  |   '  | LGUI | ESC  |Space |   |Enter | Bksp |   -  |   0  | LEFT | DOWN | RIGHT|
 * `------------------------------------------------'   `------------------------------------------------'
 */

[META] = KEYMAP( \
  RESET,   XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_LBRC,    KC_RBRC,    XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX,    _______, \
  _______, XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, S(KC_9),    S(KC_0),    XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, _______, \
  _______, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, S(KC_LBRC), S(KC_RBRC), KC_EQL , KC_1,    KC_2,    KC_3,  _______,  _______, \
  _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, KC_0, _______, _______, _______ \
),

/* SYMB
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | LAlt |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  | POWER|
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Del  |      |      |      |      |      |  (   |   |  )   |      |      |      |      |      |  \   |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |      |  UP  | Sft  |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | META | LCtrl|   `  |   '  | LGUI | ESC  |Space |   |Enter | Bksp |   -  |   =  | LEFT | DOWN | RIGHT|
 * `------------------------------------------------'   `------------------------------------------------'
 */

[SYMB] = KEYMAP( \
  _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC,    S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
)
};

