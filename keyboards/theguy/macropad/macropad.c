// Copyright 2023 Yiwen (@YiwenDong98)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "macropad.h"

#include "print.h"

#ifndef NO_DEBUG
bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) { return false; }
    
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", 
            keycode, 
            record->event.key.col, 
            record->event.key.row, 
            record->event.pressed, 
            record->event.time, 
            record->tap.interrupted, 
            record->tap.count);
#endif

    return true;
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
      return false; /* Don't process further events if user function exists and returns false */
    }
    
#ifdef CONSOLE_ENABLE
    uprintf("EN: en: %u, clockwise: %u", index, clockwise);
#endif
    
    return true;
}

#endif