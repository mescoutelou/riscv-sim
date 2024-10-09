/*
 * File: cpu.h
 * Created Date: 2023-02-26 09:08:32 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-10-09 04:30:27 pm
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 HerdWare
 * -----
 * Description: 
 */

// ******************************
//            ADDRESS
// ******************************
#define ADDR_CORE_SCRATCH         0x14000000

#define ADDR_PLTF_IO_PLIC         0x18000000
#define ADDR_PLTF_IO_SWIRQ        0x1c000000
#define ADDR_PLTF_IO_PADVTIMER0   0x1c010000
#define ADDR_PLTF_IO_PADVTIMER1   0x1c010080
#define ADDR_PLTF_IO_PADVTIMER2   0x1c010100
#define ADDR_PLTF_IO_PADVTIMER3   0x1c010180
#define ADDR_PLTF_IO_PADVTIMER4   0x1c010200
#define ADDR_PLTF_IO_PADVTIMER5   0x1c010280
#define ADDR_PLTF_IO_GPIOA        0x1c011000
#define ADDR_PLTF_IO_GPIOA_MODE   0x1c011000
#define ADDR_PLTF_IO_GPIOA_MODE0  0x1c011000
#define ADDR_PLTF_IO_GPIOA_MODE1  0x1c011004
#define ADDR_PLTF_IO_GPIOA_DIN    0x1c011020
#define ADDR_PLTF_IO_GPIOA_DOUT   0x1c011024
#define ADDR_PLTF_IO_GPIOA_DSET   0x1c011028
#define ADDR_PLTF_IO_GPIOA_DRST   0x1c01102c
#define ADDR_PLTF_IO_GPIOB        0x1c011080
#define ADDR_PLTF_IO_GPIOB_MODE   0x1c011080
#define ADDR_PLTF_IO_GPIOB_MODE0  0x1c011080
#define ADDR_PLTF_IO_GPIOB_MODE1  0x1c011084
#define ADDR_PLTF_IO_GPIOB_DIN    0x1c0110a0
#define ADDR_PLTF_IO_GPIOB_DOUT   0x1c0110a4
#define ADDR_PLTF_IO_GPIOB_DSET   0x1c0110a8
#define ADDR_PLTF_IO_GPIOB_DRST   0x1c0110ac
#define ADDR_PLTF_IO_GPIOC        0x1c011100
#define ADDR_PLTF_IO_GPIOC_MODE   0x1c011100
#define ADDR_PLTF_IO_GPIOC_MODE0  0x1c011100
#define ADDR_PLTF_IO_GPIOC_MODE1  0x1c011104
#define ADDR_PLTF_IO_GPIOC_DIN    0x1c011120
#define ADDR_PLTF_IO_GPIOC_DOUT   0x1c011124
#define ADDR_PLTF_IO_GPIOC_DSET   0x1c011128
#define ADDR_PLTF_IO_GPIOC_DRST   0x1c01112c
#define ADDR_PLTF_IO_GPIOD        0x1c011180
#define ADDR_PLTF_IO_GPIOD_MODE   0x1c011180
#define ADDR_PLTF_IO_GPIOD_MODE0  0x1c011180
#define ADDR_PLTF_IO_GPIOD_MODE1  0x1c011184
#define ADDR_PLTF_IO_GPIOD_DIN    0x1c0111a0
#define ADDR_PLTF_IO_GPIOD_DOUT   0x1c0111a4
#define ADDR_PLTF_IO_GPIOD_DSET   0x1c0111a8
#define ADDR_PLTF_IO_GPIOD_DRST   0x1c0111ac
#define ADDR_PLTF_IO_UART0        0x1c012400
#define ADDR_PLTF_IO_I2C0         0x1c012800
#define ADDR_PLTF_IO_I2C1         0x1c012880
#define ADDR_PLTF_IO_ETH_MAC0     0x1c080000
#define ADDR_PLTF_IO_D32_0        0x1c800000
#define ADDR_PLTF_DISPLAY0        0x1e000000

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
