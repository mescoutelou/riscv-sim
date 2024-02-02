/*
 * File: cpu.h
 * Created Date: 2023-02-26 09:08:32 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-02-02 10:33:26 am
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 ENSEIRB-MATMECA
 * -----
 * Description: 
 */

// ******************************
//            ADDRESS
// ******************************
#define IO_CORE_ADDR_SCRATCH_BASE   0x10000400
#define IO_CORE_ADDR_SCRATCH0       0x10000400
#define IO_CORE_ADDR_SCRATCH1       0x10000404
#define IO_CORE_ADDR_SCRATCH2       0x10000408
#define IO_CORE_ADDR_SCRATCH3       0x1000040c
#define IO_CORE_ADDR_SCRATCH4       0x10000410
#define IO_CORE_ADDR_SCRATCH5       0x10000414
#define IO_CORE_ADDR_SCRATCH6       0x10000418
#define IO_CORE_ADDR_SCRATCH7       0x1000041c

#define IO_PLTF_ADDR_GPIOA_BASE     0x1c010400
#define IO_PLTF_ADDR_GPIOA_ENO      0x1c010400
#define IO_PLTF_ADDR_GPIOA_REG      0x1c010404
#define IO_PLTF_ADDR_GPIOA_SET      0x1c010408
#define IO_PLTF_ADDR_GPIOA_RST      0x1c01040c
#define IO_PLTF_ADDR_GPIOB_BASE     0x1c010480
#define IO_PLTF_ADDR_GPIOB_ENO      0x1c010480
#define IO_PLTF_ADDR_GPIOB_REG      0x1c010484
#define IO_PLTF_ADDR_GPIOB_SET      0x1c010488
#define IO_PLTF_ADDR_GPIOB_RST      0x1c01048c
#define IO_PLTF_ADDR_GPIOC_BASE     0x1c010500
#define IO_PLTF_ADDR_GPIOC_ENO      0x1c010500
#define IO_PLTF_ADDR_GPIOC_REG      0x1c010504
#define IO_PLTF_ADDR_GPIOC_SET      0x1c010508
#define IO_PLTF_ADDR_GPIOC_RST      0x1c01050c
#define IO_PLTF_ADDR_GPIOD_BASE     0x1c010580
#define IO_PLTF_ADDR_GPIOD_ENO      0x1c010580
#define IO_PLTF_ADDR_GPIOD_REG      0x1c010584
#define IO_PLTF_ADDR_GPIOD_SET      0x1c010588
#define IO_PLTF_ADDR_GPIOD_RST      0x1c01058c
#define IO_PLTF_ADDR_D32_IN_VALID   0x1c020000
#define IO_PLTF_ADDR_D32_IN_DATA    0x1c020004
#define IO_PLTF_ADDR_D32_OUT_READY  0x1c020008
#define IO_PLTF_ADDR_D32_OUT_DATA   0x1c02000c

// ******************************
//             GPIO
// ******************************
#define GPIOB_PIN_LED0    0
#define GPIOB_PIN_LED1    1
#define GPIOB_PIN_LED2    2
#define GPIOB_PIN_LED3    3
#define GPIOC_PIN_END     31

// ******************************
//        MICROARCHITECTURE
// ******************************
#define UARCH_OPT1_EN \
li t5, 0x00000100; \
csrs 0x7c7, t5; \
nop; \
nop; \
nop; \
nop; \
nop;

#define UARCH_OPT2_EN \
li t5, 0x00000e00; \
csrs 0x7c7, t5; \
nop; \
nop; \
nop; \
nop; \
nop;

#define UARCH_OPT1_DIS \
li t5, 0x00000100; \
csrc 0x7c7, t5;

#define UARCH_OPT2_DIS \
li t5, 0x00000e00; \
csrc 0x7c7, t5;
