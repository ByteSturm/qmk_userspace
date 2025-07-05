/* Copyright 2024 ~ 2025 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"
#include "keymap_german.h"

enum layers {
    WIN_BASE,
    WIN_FN,
    NEO_1,
//     NEO_2,
    NEO_3,
    NEO_4,
    NEO_FN,
};

//Override all symbols and numbers for shift on layer 2
const key_override_t shift_de_1_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_1, KC_NO, NEO_1);
const key_override_t shift_de_2_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_2, KC_NO, NEO_1);
const key_override_t shift_de_3_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_3, KC_NO, NEO_1);
const key_override_t shift_de_4_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_4, KC_NO, NEO_1);
const key_override_t shift_de_5_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_5, KC_NO, NEO_1);
const key_override_t shift_de_6_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_6, KC_NO, NEO_1);
const key_override_t shift_de_7_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_7, KC_NO, NEO_1);
const key_override_t shift_de_8_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_8, KC_NO, NEO_1);
const key_override_t shift_de_9_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_9, KC_NO, NEO_1);
const key_override_t shift_de_0_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_0, KC_NO, NEO_1);
const key_override_t shift_de_comm_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_COMM, KC_NO, NEO_1);
const key_override_t shift_de_dot_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_DOT, KC_NO, NEO_1);
const key_override_t shift_de_mins_to_noop = ko_make_with_layers(MOD_MASK_SHIFT, DE_MINS, KC_NO, NEO_1);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
     &shift_de_1_to_noop,
     &shift_de_2_to_noop,
     &shift_de_3_to_noop,
     &shift_de_4_to_noop,
     &shift_de_5_to_noop,
     &shift_de_6_to_noop,
     &shift_de_7_to_noop,
     &shift_de_8_to_noop,
     &shift_de_9_to_noop,
     &shift_de_0_to_noop,
     &shift_de_comm_to_noop,
     &shift_de_dot_to_noop,
     &shift_de_mins_to_noop,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//First two layers are default
[WIN_BASE] = LAYOUT_iso_85(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   RGB_MOD,
     DE_CIRC,  DE_1,     DE_2,     DE_3,     DE_4,     DE_5,     DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_SS,    DE_ACUT,  KC_BSPC,            KC_PGUP,
     KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,     DE_Y,     DE_U,     DE_I,     DE_O,     DE_P,     DE_UDIA,  DE_PLUS,                      KC_PGDN,
     KC_CAPS,  DE_A,     DE_S,     DE_D,     DE_F,     DE_G,     DE_H,     DE_J,     DE_K,     DE_L,     DE_ODIA,  DE_ADIA,  DE_HASH,  KC_ENT,             KC_HOME,
     KC_LSFT,  DE_LABK,  DE_Z,     DE_X,     DE_C,     DE_V,     DE_B,     DE_N,     DE_M,     DE_COMM,  DE_DOT,   DE_MINS,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_iso_85(
     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
     _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

/**
 * Starting NeoQWERTZ Layers here
 */
[NEO_1] = LAYOUT_iso_85(
//   ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
//   │esc    │ F1    │ F2    │ F3    │ F4    │ F5    │ F6    │ F7    │ F8    │ F9    │F10    │F11    │F12    │ScrS   │Del    │Light  │
      KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR,KC_DEL, RGB_MOD,
//   ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┤
//   │ ^     │ 1     │ 2     │ 3     │ 4     │ 5     │ 6     │ 7     │ 8     │ 9     │ 0     │ ß     │ `     │         ⌫    │ pg↑   │
      DE_CIRC, DE_1,   DE_2,   DE_3,   DE_4,   DE_5,   DE_6,   DE_7,   DE_8,   DE_9,   DE_0,   DE_SS, S(DE_ACUT),  KC_BSPC,   KC_PGUP,
//   ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬────────────┼───────┤
//   │ tab      │ q     │ w     │ e     │ r     │ t     │ z     │ u     │ i     │ o     │ p     │ ü     │ ´     │ enter      │ pg↓   |
      KC_TAB,     DE_Q,   DE_W,   DE_E,   DE_R,   DE_T,   DE_Z,   DE_U,   DE_I,   DE_O,   DE_P,  DE_UDIA,DE_ACUT,             KC_PGDN,
//   ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┐          ├───────┤
//   │ Mod3       │ a     │ s     │ d     │ f     │ g     │ h     │ j     │ k     │ l     │ ö     │ ä     │ Mod3  │          │ home  |
      MO(NEO_3),    DE_A,   DE_S,   DE_D,   DE_F,   DE_G,   DE_H,   DE_J,   DE_K,   DE_L,  DE_ODIA,DE_ADIA,MO(NEO_3), KC_ENT, KC_HOME,
//   ├─────────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴───────┴──┬───────┼───────┤
//   │⇧shf     │ Mod4  │ y     │ x     │ c     │ v     │ b     │ n     │ m     │ ,     │ .     │ -     │ ⇧shf        │ ↑     │ end   |
      KC_LSFT, MO(NEO_4),DE_Y,   DE_X,   DE_C,   DE_V,   DE_B,   DE_N,   DE_M,  DE_COMM, DE_DOT,DE_MINS,   KC_RSFT,    KC_UP,  KC_END,
//   ├─────────┼───────┴─┬─────┴───┬───┴───────┴───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┼───────┼───────┤
//   │ctrl     │ win     │ alt     │                      space                      │ Mod4  │   fn  │ctrl   │ ←     │ ↓     │ →     │
      KC_LCTL,   KC_LGUI,  KC_LALT,                      KC_SPC,                 MO(NEO_4),MO(WIN_FN),KC_RCTL,KC_LEFT,KC_DOWN,KC_RGHT),
//   └─────────┴─────────┴─────────┴─────────────────────────────────────────────────┴───────┴───────┴───────┴───────┴───────┴───────┘


/**
Don't explicitely define layer 2 of NeoQWERTZ, instead rely on overriding shifted keys
[NEO_2] = LAYOUT_iso_85(
//   ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
//   │esc    │ F1    │ F2    │ F3    │ F4    │ F5    │ F6    │ F7    │ F8    │ F9    │F10    │F11    │F12    │ScrS   │Del    │Light  │
      KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR,KC_DEL, RGB_MOD,
//   ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┤
//   │ ^     │ 1     │ 2     │ 3     │ 4     │ 5     │ 6     │ 7     │ 8     │ 9     │ 0     │ ß     │ ´     │         ⌫    │ pg↑   │
      DE_CIRC, DE_1,   DE_2,   DE_3,   DE_4,   DE_5,   DE_6,   DE_7,   DE_8,   DE_9,   DE_0,   DE_SS, DE_ACUT,     KC_BSPC,   KC_PGUP,
//   ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬────────────┼───────┤
//   │ tab      │ q     │ w     │ e     │ r     │ t     │ z     │ u     │ i     │ o     │ p     │ ü     │ +     │ enter      │ pg↓   |
      KC_TAB,     DE_Q,   DE_W,   DE_E,   DE_R,   DE_T,   DE_Y,   DE_U,   DE_I,   DE_O,   DE_P,  DE_UDIA,DE_PLUS,             KC_PGDN,
//   ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┐          ├───────┤
//   │ Mod3       │ a     │ s     │ d     │ f     │ g     │ h     │ j     │ k     │ l     │ ö     │ ä     │ Mod3  │          │ home  |
      _______,      DE_A,   DE_S,   DE_D,   DE_F,   DE_G,   DE_H,   DE_J,   DE_K,   DE_L,  DE_ODIA,DE_ADIA,_______,  KC_ENT,  KC_HOME,
//   ├─────────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴───────┴──┬───────┼───────┤
//   │⇧shf     │ Mod4  │ y     │ x     │ c     │ v     │ b     │ n     │ m     │ ,     │ .     │ -     │ ⇧shf        │ ↑     │ end   |
      KC_LSFT,  _______, DE_Z,   DE_X,   DE_C,   DE_V,   DE_B,   DE_N,   DE_M,  DE_COMM, DE_DOT,DE_MINS,   KC_RSFT,    KC_UP,  KC_END,
//   ├─────────┼───────┴─┬─────┴───┬───┴───────┴───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┼───────┼───────┤
//   │ctrl     │ win     │ alt     │                      space                      │ Mod4  │   fn  │ctrl   │ ←     │ ↓     │ →     │
      KC_LCTL,   KC_LGUI,  KC_LALT,                      KC_SPC,                   _______,MO(NEO_FN),KC_RCTL,KC_LEFT,KC_DOWN,KC_RGHT),
//   └─────────┴─────────┴─────────┴─────────────────────────────────────────────────┴───────┴───────┴───────┴───────┴───────┴───────┘
*/


[NEO_3] = LAYOUT_iso_85(
//   ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
//   │esc    │ F1    │ F2    │ F3    │ F4    │ F5    │ F6    │ F7    │ F8    │ F9    │F10    │F11    │F12    │ScrS   │Del    │Light  │
      _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
//   ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┤
//   │       │       │       │       │       │       │       │       │       │       │       │       │       │         ⌫    │ pg↑   │
      XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,     _______,   _______,
//   ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬────────────┼───────┤
//   │ tab      │       │ _     │ [     │ ]     │ ^     │ !     │ <     │ >     │ =     │ &     │       │       │ enter      │ pg↓   |
       _______,  XXXXXXX,KC_UNDS,KC_LBRC,KC_RBRC,KC_CIRC,KC_EXLM,KC_LABK,KC_RABK,KC_EQL, KC_AMPR,XXXXXXX,XXXXXXX,             _______,
//   ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┐          ├───────┤
//   │ Mod3       │ \     │ /     │ {     │  }    │ *     │ ?     │ (     │ )     │ -     │ :     │ @     │ Mod3  │          │ home  |
      _______,    KC_BSLS,KC_SLASH,KC_LCBR,KC_RCBR,KC_ASTR,KC_QUES,KC_LPRN,KC_RPRN,KC_MINUS,KC_COLON,KC_AT,_______,  _______, _______,
//   ├─────────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴───────┴──┬───────┼───────┤
//   │⇧shf     │ Mod4  │ #     │ $     │ |     │ ~     │ `     │ +     │ %     │ "     │ '     │ ;     │ ⇧shf        │ ↑     │ end   |
      _______,  _______,KC_HASH,KC_DLR,KC_PIPE,KC_TILD,KC_GRAVE,KC_PLUS,KC_PERC,KC_DQUO,KC_QUOT,KC_SCLN,  _______,    _______,_______,
//   ├─────────┼───────┴─┬─────┴───┬───┴───────┴───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┼───────┼───────┤
//   │ctrl     │ win     │ alt     │                      space                      │ Mod4  │   fn  │ctrl   │ ←     │ ↓     │ →     │
      _______,   _______,  _______,                      _______,                     _______,_______,_______,_______,_______,_______),
//   └─────────┴─────────┴─────────┴─────────────────────────────────────────────────┴───────┴───────┴───────┴───────┴───────┴───────┘



[NEO_4] = LAYOUT_iso_85(
//   ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
//   │esc    │ F1    │ F2    │ F3    │ F4    │ F5    │ F6    │ F7    │ F8    │ F9    │F10    │F11    │F12    │ScrS   │Del    │Light  │
      _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
//   ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┤
//   │       │       │       │       │       │       │       │Num Lock│ tab  │ /     │ *     │ -     │       │         ⌫    │ pg↑   │
      XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_NUM,  KC_TAB,KC_PSLS,KC_PAST,KC_PMNS,XXXXXXX,     _______,   _______,
//   ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬────────────┼───────┤
//   │ tab      │ pg↑   │ ⌫    │ ↑     │ del   │ pg↓   │       │ 7     │ 8     │ 9     │ +     │       │       │ enter      │ pg↓   |
       _______,  KC_PGUP,KC_BSPC, KC_UP, KC_DEL, KC_PGDN,XXXXXXX, KC_P7,  KC_P8,  KC_P9, KC_PPLS,XXXXXXX,XXXXXXX,             _______,
//   ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┐          ├───────┤
//   │ Mod3       │ home  │ ←     │ ↓     │ →     │ end   │       │ 4     │ 5     │ 6     │ ,     │ .     │ Mod3  │          │ home  |
      _______,     KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT, KC_END,XXXXXXX, KC_P4,  KC_P5,  KC_P6, KC_PDOT, DE_DOT,_______, _______,  _______,
//   ├─────────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴───────┴──┬───────┼───────┤
//   │⇧shf     │ Mod4  │       │ tab   │       │ enter │       │ :     │ 1     │ 2     │ 3     │ ;     │ ⇧shf        │ ↑     │ end   |
      _______,  _______,XXXXXXX, KC_TAB,XXXXXXX,KC_PENT,XXXXXXX,S(DE_DOT),KC_P1,  KC_P2,  KC_P3, S(DE_COMM),  _______,_______,_______,
//   ├─────────┼───────┴─┬─────┴───┬───┴───────┴───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┼───────┼───────┤
//   │ctrl     │ win     │ alt     │                      space                      │ Mod4  │   fn  │ctrl   │ ←     │ ↓     │ →     │
      _______,   _______,  _______,                      _______,                     _______,_______,_______,_______,_______,_______),
//   └─────────┴─────────┴─────────┴─────────────────────────────────────────────────┴───────┴───────┴───────┴───────┴───────┴───────┘



[NEO_FN] = LAYOUT_iso_85(
//   ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
//   │esc    │ F1    │ F2    │ F3    │ F4    │ F5    │ F6    │ F7    │ F8    │ F9    │F10    │F11    │F12    │ScrS   │Del    │Light  │
      _______,KC_BRID,KC_BRIU,KC_TASK,KC_FILE,RGB_VAD,RGB_VAI,KC_MPRV,KC_MPLY,KC_MNXT,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______,RGB_TOG,
//   ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┴───────┼───────┤
//   │ ^     │ 1     │ 2     │ 3     │ 4     │ 5     │ 6     │ 7     │ 8     │ 9     │ 0     │ ß     │ ´     │         ⌫    │ pg↑   │
      XXXXXXX,BT_HST1,BT_HST2,BT_HST3, P2P4G, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,     _______,   _______,
//   ├───────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬─────┴─┬────┴──┬────┴──┬────────────┼───────┤
//   │ tab      │ q     │ w     │ e     │ r     │ t     │ z     │ u     │ i     │ o     │ p     │ ü     │ +     │ enter      │ pg↓   |
       RGB_TOG,  RGB_MOD,RGB_VAI,RGB_HUI,RGB_SAI,RGB_SPI,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,             _______,
//   ├──────────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┬─────┴─┐          ├───────┤
//   │ Mod3       │ a     │ s     │ d     │ f     │ g     │ h     │ j     │ k     │ l     │ ö     │ ä     │ Mod3  │          │ home  |
      _______,    RGB_RMOD,RGB_VAD,RGB_HUD,RGB_SAD,RGB_SPD,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______, _______,  _______,
//   ├─────────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴────┬──┴───────┴──┬───────┼───────┤
//   │⇧shf     │ Mod4  │ y     │ x     │ c     │ v     │ b     │ n     │ m     │ ,     │ .     │ -     │ ⇧shf        │ ↑     │ end   |
      _______,  _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,BAT_LVL,NK_TOGG,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,  _______,    _______,_______,
//   ├─────────┼───────┴─┬─────┴───┬───┴───────┴───────┴───────┴───────┴───────┴─────┬─┴─────┬─┴─────┬─┴─────┬───────┼───────┼───────┤
//   │ctrl     │ win     │ alt     │                      space                      │ Mod4  │   fn  │ctrl   │ ←     │ ↓     │ →     │
      _______,   _______,  _______,                      _______,                     _______,_______,_______,_______,_______,_______)
//   └─────────┴─────────┴─────────┴─────────────────────────────────────────────────┴───────┴───────┴───────┴───────┴───────┴───────┘
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
