/*
 * Copyright (c) 2022 Dhruva Gole
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// TODO: correctly handle these legacy defines
#define MOSI    0
#define MISO    0
#define SCK     0
#define SS      0
#define SDA     0
#define SCL     0

/*
 * A0/A1 have no GPIO capability on this board (pure analog pads), so they
 * are intentionally not defined here. A2-A5 are shared with digital pins.
 */
#define A2  16  /* P0_14 */
#define A3  17  /* P0_22 */
#define A4  18  /* P0_15 */
#define A5  14  /* P0_23, shared with SW2 */
