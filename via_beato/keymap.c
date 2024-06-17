/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Base	layer
	[0] = LAYOUT_split_3x6_3(
	//,|---------------+-------------------+-------------------+-------------------+-------------------+----|.    ,|-----+-----------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		KC_PGUP, 		KC_Q, 				KC_W, 				KC_E, 				KC_R, 				KC_T, 		KC_Y, KC_U, 						KC_I, 							KC_O, 							KC_P, 								KC_BSPC,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+----|.    ,|-----+-----------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		S(KC_8), 		MT(MOD_LSFT,KC_A), 	MT(MOD_LCTL,KC_S),	MT(MOD_LALT,KC_D), 	MT(MOD_LGUI,KC_F), 	KC_G, 		KC_H, MT(MOD_LGUI | MOD_RGUI,KC_J), MT(MOD_LALT | MOD_RALT,KC_K), 	MT(MOD_LCTL | MOD_RCTL,KC_L), 	MT(MOD_LSFT | MOD_RSFT,KC_SCLN), 	KC_QUOT,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+----|.    ,|-----+-----------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		RALT(KC_QUOT), 	KC_Z, 				KC_X, 				KC_C, 				KC_V, 				KC_B, 		KC_N, KC_M, 						KC_COMM, 						KC_DOT, 						KC_SLSH, 							RALT(KC_NUHS),
	//,|---------------+-------------------+-------------------+-------------------+-------------------+----|.    ,|-----+-----------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
																		KC_ESC, LT(1,KC_TAB), KC_SPC, 		KC_ENT, LT(2,KC_PGDN), LT(3,KC_DEL)
	),

	//Numbers layer
	[1] = LAYOUT_split_3x6_3(
	//,|---------------+-------------------+-------------------+-------------------+-------------------+-----|.   ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------|.
		KC_NO, 			KC_1, 				KC_2, 				KC_3, 				KC_4, 				KC_5, 		KC_6, 		KC_7, 						KC_8, 							KC_9, 							KC_0, 								KC_NO,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+-----|.   ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------|.
		KC_NO, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_NO, 		KC_LEFT, 	KC_DOWN, 					KC_UP, 							KC_RGHT, 						KC_NO, 								KC_NO,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+-----|.   ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------|.
		S(KC_8), 		KC_NO, 				KC_TRNS, 		KC_NO, 				KC_NO, 				KC_NO, 		KC_NO, 		KC_HOME, 					KC_PGDN, 						KC_PGUP, 						KC_END, 							S(KC_9),
	//,|---------------+-------------------+-------------------+-------------------+-------------------+-----|.   ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------|.
																					KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS
	),
	//Symbols layer
	[2] = LAYOUT_split_3x6_3(
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+----------|.
		KC_NO, 			S(KC_1), 			S(KC_2), 			S(KC_3), 			S(KC_4), 			S(KC_5), 	S(KC_6), 	S(KC_7), 					S(KC_8),					 	S(KC_9), 						S(KC_0), 							S(KC_MINS),
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+----------|.
		KC_NO, 			KC_TRNS, 			KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 		KC_MINS, 	KC_EQL, 					KC_LBRC, 						KC_RBRC, 						KC_BSLS, 							S(KC_EQL),
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+----------|.
		KC_NO, 			KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 		S(KC_MINS), S(KC_EQL), 					S(KC_LBRC), 					S(KC_RBRC), 					KC_GRV, 							S(KC_GRV),
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+----------|.
																					KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS
	),
	//Functions layer
	[3] = LAYOUT_split_3x6_3(
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		KC_TRNS, 			KC_F1, 				KC_F2, 				KC_F3, 				KC_F4, 				KC_F5, 		KC_F7, 		KC_F8,						KC_F9, 							KC_F12, 						KC_PSCR, 							KC_VOLU,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		KC_NO, 			KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 		KC_F4, 		KC_F5, 						KC_F6, 							KC_F11, 						KC_SLCT, 							KC_VOLD,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
		KC_NO, 			KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 				KC_NO, 		KC_F1, 		KC_F2, 						KC_F3,							KC_F10, 						KC_PAUS, 							KC_MPLY,
	//,|---------------+-------------------+-------------------+-------------------+-------------------+------|.  ,|-----------+---------------------------+-------------------------------+-------------------------------+-----------------------------------+-------------|.
																					KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS
	)
};


#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return OLED_ROTATION_270;
  //return rotation;
}

char wpm[3] = {};

void oled_render_version(void){

    snprintf(wpm, sizeof(wpm), "%u",get_current_wpm());

    oled_write_ln(wpm, false);
}




static const  char  tws_logo [] PROGMEM = {
	0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x7f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x0f,
0x87, 0xe3, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x0f, 0x87, 0xe3, 0xf9, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xfe,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xe0, 0x80, 0x80, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xfe, 0xf8, 0xe0, 0x80, 0x80, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

void oled_render_logo(void) {

    oled_write_raw_P(tws_logo, sizeof(tws_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_version();
    } else {
        oled_render_logo();
    }
    return false;
}

#endif // OLED_ENABLE
