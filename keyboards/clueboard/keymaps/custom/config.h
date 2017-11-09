#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* key combination for magic key command */
/* modifies the magic key command to now be LSHIFT | RSHIFT | RGUI instead of the default LSHIFT | RSHIFT */
#undef IS_COMMAND
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT) | MOD_BIT(KC_RGUI)) \
)

#endif
