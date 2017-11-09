#include "gonnerd.h"

// Keymap layers
#define BASE_LAYER 0
#define FUNCTION_LAYER 1
#define SYSTEM_LAYER 2

// Key aliases
#define __x__ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: Default Layer
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  = | \ | `| Split BS
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Bsp | Std
   * |-----------------------------------------------------------|
   * |Fn/CapsL|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter | Std
   * |-----------------------------------------------------------|
   * |Shift/(|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift/)|Fn| Split R-Shift
   * |-----------------------------------------------------------'
   * |  Ctl|Alt|Gui  |         Space         | Gui |Alt |   |Fn2 | Std
   * `-----------------------------------------------------------'
   */
  [BASE_LAYER] = KEYMAP_60(
      KC_ESC,         KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_GRV,  \
      KC_TAB,         KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC, \
      LT(1, KC_CAPS), KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_BSLS,  KC_ENT,  \
      KC_LSPO,        __x__,    KC_Z,     KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC,  MO(1),   \
      KC_LCTL,        KC_LALT,  KC_LGUI,                               KC_SPC,                               KC_RGUI,  KC_RALT,  __x__,    MO(2)    \
  ),

  /* Layer 1: Function Layer
   * ,-----------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11| F12|   |  |
   * |-----------------------------------------------------------|
   * |     |Prv|Ply|Nxt|   |   |   | Home|End|  |  |Br-|Br+| Del |
   * |-----------------------------------------------------------|
   * |Hold  |Mte|Vl-|Vl+|   |   |Lft|Dwn|Up|Rgt|   |    |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------'
   * |     |   |     |                          |     |   |      |
   * `-----------------------------------------------------------'
   */
   [FUNCTION_LAYER] = KEYMAP_60(
       __x__,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  __x__,   \
       __x__,   KC_MPRV, KC_MPLY, KC_MNXT, __x__,   __x__,   __x__,   KC_HOME, KC_END,  __x__,   __x__,   KC_SLCK, KC_PAUS, KC_DEL,  \
       KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, __x__,   __x__,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, __x__,   __x__,   __x__,   __x__,   \
       KC_LSFT,  __x__,  __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   __x__,   \
       KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             __x__,   __x__,   __x__,   __x__    \
   ),

  /* Layer 2: System Layer
   * ,-----------------------------------------------------------.
   * |Reset|   |   |   |   |   |   |   |   |   |   |   | | |Sleep|
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |Power|
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |       |  |
   * |-----------------------------------------------------------'
   * |     |   |     |                         |     |    | Hold |
   * `-----------------------------------------------------------'
   */
  [SYSTEM_LAYER] = KEYMAP_60(
      RESET,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  KC_SLEP, \
      __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  KC_PWR,  \
      __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,   __x__,  \
      __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,  __x__,   __x__,  \
      __x__,  __x__,  __x__,                          __x__,                          __x__,  __x__,  __x__,  KC_TRNS  \
  ),
};
