#pragma once

// Baseline VIAL configurations.
#define VIAL_KEYBOARD_UID {0xF9, 0x85, 0x99, 0x57, 0x97, 0xF0, 0x84, 0x44}

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

// More layers to play with.
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// I have weak fingers so relax the tapping interval back to default.
#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200

// Declare that we draw 100mA so HHKB USB1.0 hub would drive this.
#define USB_MAX_POWER_CONSUMPTION 100
