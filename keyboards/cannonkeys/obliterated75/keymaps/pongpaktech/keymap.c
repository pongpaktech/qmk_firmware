/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
Layout:

.-----.  .-----.-----.-----.-----.  .-----.-----.-----.-----.  .-----.-----.-----.-----.  .-----.
| Esc |  | F1  | F2  | F3  | F4  |  | F5  | F6  | F7  | F8  |  | F9  | F10 | F11 | F12 |  | Fn  |
'-----'  '-----'-----'-----'-----'  '-----'-----'-----'-----'  '-----'-----'-----'-----'  '-----'
.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.-----.
|  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | BkSp| Del | Home|
|-----'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'--.--'-----|-----|
|   Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    | PgUp|
|--------'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'.----'--------|-----|
| Caps    |  A  |  S  |  D  |  F  |  I  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    | PgDn|
|---------'---.-'---.-'---.-'---.-'---.-'---.-'---.-'---.-'---.-'---.-'---.-'-------.-----|-----|
|    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Shift  |  ^  | End |
|-------.-----'.----'--.--'-----'-----'-----'-----'-----'-----'--.--|-----'--.------|-----|-----|
| Ctrl  |  Win |  Alt  |                                     | Alt  | ctrl |  |  <  |  v  |  >  |
'-------'------'-------'-------------------------------------'------'------'  '-----'-----'-----'

*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
		 KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,                    MO(1) ,
		 KC_GRV ,  KC_1  ,  KC_2  ,  KC_3  ,  KC_4  ,  KC_5  ,  KC_6  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_0  , KC_MINS, KC_EQL , KC_BSPC, KC_DEL , KC_HOME,
		 KC_TAB ,  KC_Q  ,  KC_W  ,  KC_E  ,  KC_R  ,  KC_T  ,  KC_Y  ,  KC_U  ,  KC_I  ,  KC_O  ,  KC_P  , KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
		KC_CAPS ,  KC_A  ,  KC_S  ,  KC_D  ,  KC_F  ,  KC_G  ,  KC_H  ,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT ,          KC_PGDN,
		KC_LSFT , KC_LSFT,  KC_Z  ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  ,  KC_N  ,  KC_M  , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,           KC_UP , KC_END ,
		KC_LCTL , KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
	),

	[1] = LAYOUT_all(
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS,  MO(2) ,                   _______,
		 _______,MEH(KC_1),MEH(KC_2),MEH(KC_3),MEH(KC_4),_______,_______,_______,_______, _______, _______, _______, _______, _______, _______, _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLU,
		 KC_NLCK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLD,
		 _______, _______, _______, _______, _______, _______,  RESET , NK_TOGG, _______, _______, _______, _______, _______,          KC_BRIU, KC_MUTE,
		 _______, GUI_TOG, RGB_MOD,                            RGB_TOG,                            RGB_VAD, RGB_VAI,    C(G(KC_LEFT)), KC_BRID, C(G(KC_RGHT))
	),


	[2] = LAYOUT_all(
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		 _______, _______, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		 _______, RGB_HUD, RGB_SAD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
		 _______, _______, _______,                            _______,                            _______, _______,          _______, _______, _______
	),

	/*
	[X] = LAYOUT_all(
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
		 _______, _______, _______,                            _______,                            _______, _______,          _______, _______, _______
	)
	*/

};

const int caps_lock_led = 6;
const int num_lock_led = 7;
const int scroll_lock_led = 8;
const int nkro_led = 9;
const int no_gui_led = 10;

// Light LEDs 6 to 10 for various indicators
const rgblight_segment_t PROGMEM caps_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{caps_lock_led, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM num_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{num_lock_led, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM scroll_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{scroll_lock_led, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM nkro_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{nkro_led, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM no_gui_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{no_gui_led, 1, HSV_RED}
);
// Light LEDs 11 & 12 in yellow when keyboard layer 1 is active
const rgblight_segment_t PROGMEM fn1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{11, 2, HSV_YELLOW}
);
// Light LED 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM fn2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
	{12, 1, HSV_PURPLE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
	fn1_layer,			// 0
	fn2_layer,			// 1
	caps_lock_layer,	// 2
	num_lock_layer,		// 3
	scroll_lock_layer,	// 4
	nkro_layer,			// 5
	no_gui_layer		// 6
);

void keyboard_post_init_user(void) {
	// Enable the LED layers
	rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(0, layer_state_cmp(state, 1));
	rgblight_set_layer_state(1, layer_state_cmp(state, 2));
	return state;
}

bool led_update_user(led_t led_state) {
	rgblight_set_layer_state(2, led_state.caps_lock);
	rgblight_set_layer_state(3, led_state.num_lock);
	rgblight_set_layer_state(4, led_state.scroll_lock);
	return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	rgblight_set_layer_state(5, !keymap_config.nkro);
	rgblight_set_layer_state(6, keymap_config.no_gui);
	return true;
}