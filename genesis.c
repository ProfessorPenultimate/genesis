/* Copyright 2020 Matt3o
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

//Definitly didn't copy paste most of this from github
#include "genesis.h"

//Basic RGB Control
void eeconfig_init_kb(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_enable(); // Enable RGB by default
    rgblight_setrgb(RBG_GREEN);  // Set default RGB - green hue, full saturation, full brightness
#ifdef RGBLIGHT_ANIMATIONS
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT); // set to RGB_RAINBOW_STATIC_LIGHT by default
#endif
#endif

    eeconfig_init_user();
}

//This should control caps lock stuff
void matrix_init_kb(void) {
    setPinOutput(CAPS_LOCK_LED_PIN);

    writePinLow(CAPS_LOCK_LED_PIN);

    matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(CAPS_LOCK_LED_PIN, !led_state.caps_lock);
    }
    return res;
}
