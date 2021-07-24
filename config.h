#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDC0D
#define PRODUCT_ID      0x4A42
#define DEVICE_VER      0x0001
#define MANUFACTURER    dcored
#define PRODUCT         himasplit
#define DESCRIPTION     split himawari board


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D0

#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#endif