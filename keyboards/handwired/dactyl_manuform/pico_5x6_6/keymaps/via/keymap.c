/*
Copyright 2022 fgoodwin <fgoodwin@north-tech.net>

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

    [0] = LAYOUT_5x6_6_pico(
        KC_ESC,    KC_UP,     KC_F1,     KC_F2,    KC_F3,      KC_F4,  
        KC_PGUP,   KC_TAB,    KC_Q,      KC_W,     KC_E,       KC_R,      
        KC_PGDN,   KC_LSFT,   KC_A,      KC_S,     KC_D,       KC_F,      
        KC_GRV,    KC_LCTL,   KC_Z,      KC_X,     KC_C,       KC_V,    
                              KC_F23,    KC_LALT,  KC_B,       KC_SPC,    
                              KC_M,      KC_SCLN,  KC_F24,     KC_RBRC
    )
};
