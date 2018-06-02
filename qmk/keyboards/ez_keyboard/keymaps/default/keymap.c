/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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

#define BASE_LAYER 0
#define SYMBOL_LAYER 1
#define MEDIA_LAYER 2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE_LAYER] = LAYOUT(
		KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQUAL, KC_MINUS, KC_6, KC_7, KC_8, KC_9, KC_0, \
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_QUOTE, KC_BSPACE, KC_Y, KC_U, KC_I, KC_O, KC_P, \
		KC_ESCAPE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_SCOLON, KC_SLASH, KC_H, KC_J, KC_K, KC_L, KC_BSLASH, \
		KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_COMMA, KC_DOT, KC_N, KC_M, KC_PGUP, KC_PGDOWN, KC_RSHIFT, \
		KC_LCTRL, KC_LGUI, KC_LALT, LALT(KC_X), LCTL(KC_LBRACKET), MO(SYMBOL_LAYER), KC_SPACE, KC_ENTER, TG(MEDIA_LAYER), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT \
		),
	[SYMBOL_LAYER] = LAYOUT(
		KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRACKET, KC_RBRACKET, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
		),
	[MEDIA_LAYER] = LAYOUT(
		KC_SYSTEM_POWER, KC_SYSTEM_SLEEP, KC_SYSTEM_WAKE, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_INC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_WH_D, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_BTN1, KC_BTN2, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R \
		),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	// MACRODOWN only works in this function
	switch(id) {
	case 0:
		if (record->event.pressed) {
			register_code(KC_RSFT);
		} else {
			unregister_code(KC_RSFT);
		}
		break;
	}
	return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

}
