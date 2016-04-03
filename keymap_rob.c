/*
Copyright 2015 Robert Calvert <robert.calvert.io>

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
#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

	/*
	 * Default Layer
	 */
    [0] = \
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT 
    ),
    
    /*
     * Fn Layer
     */
    [1] = \
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,   F11,F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,  UP,   E,   R,   T,   CALC,   U,   INS,   O,PSCR,   SLCK,BRK,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    CAPS,LEFT,DOWN,RIGHT,F,   G,   H,   J,   K,   L,   HOME,PGUP,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   APP,   C,   V,   B,   VOLD,   VOLU,   MUTE ,END, PGDN,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT 
    ),
    
    /*
     * Pn Layer
     */
    [2] = \
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,   F11,F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,  UP,   E,   R,   T,   CALC,   U,   INS,   O, FN2,   SLCK,BRK,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    CAPS,LEFT,DOWN,RIGHT,F,   G,   H,   J,   K,   L,   HOME,PGUP,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   APP,   C,   V,   B,   VOLD,   VOLU,   MUTE ,END, PGDN,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT 
    ),
};


/*
 * Fn action definition
 */	
const uint16_t fn_actions[] PROGMEM = {
	
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    
    [2] = ACTION_MODS_KEY(MOD_LALT, KC_PSCR),
};
