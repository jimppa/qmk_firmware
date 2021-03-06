#ifndef CONFIG_USER_H
#define CONFIG_USER_H


#include "../../config.h"

//overrides
#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

/* key combination for magic key command */
/* modifies the magic key command to now be LSHIFT | RSHIFT | RGUI instead of the default LSHIFT | RSHIFT */
#undef IS_COMMAND
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT) | MOD_BIT(KC_RGUI)) \
)

#endif
