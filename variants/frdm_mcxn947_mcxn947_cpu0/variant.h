/*
 * Copyright (c) 2022 Dhruva Gole
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// TODO: correctly handle these legacy defines
#define MOSI    11
#define MISO    12
#define SCK     13
#define SS      10
#define SDA     18
#define SCL     19

/*
 * A0/A1 have no GPIO capability on this board (pure analog pads), so they
 * are intentionally not defined here. A2-A5 are shared with digital pins.
 */
#define A2  16  /* P0_14 */
#define A3  17  /* P0_22 */
#define A4  18  /* P0_15 */
#define A5  14  /* P0_23, shared with SW2 */
