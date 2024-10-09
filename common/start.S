/*
 * File: start.S
 * Created Date: 2024-02-01 02:23:58 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-10-09 04:36:39 pm
 * Modified By: Mathieu Escouteloup
 * Email: mathieu.escouteloup@ims-bordeaux.com
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 HerdWare
 * -----
 * Description: 
 */
 

#include "cpu.h"

.section .data
.section .text
## ******************************
##             BOOT
## ******************************
.globl _start
_start:
  la sp, _stack

_init:
  # Initializes I/Os
  li t0, ADDR_PLTF_IO_GPIOB
  li t1, 0xf7000000
  sw t1, 0(t0)
  sw zero, 4(t0)

  # Initializes scratch memory registers
  li t0, ADDR_CORE_SCRATCH
  li t1, 0x54
  li t2, 0x1c
  sw t1, 0(t0)
  sw t2, 4(t0)

  # Initializes GPRs
  mv t0, zero
  mv t1, zero
  mv t2, zero

  # Call main function
  call main

## ******************************
##             END
## ******************************
.globl _end
_end:
  li t0, ADDR_PLTF_IO_GPIOC_MODE1
  li t1, (1 << ((GPIOC_PIN_END % 16) << 1))
  sw t1, 0(t0)
  li t0, ADDR_PLTF_IO_GPIOC_DSET
  li t1, (1 << GPIOC_PIN_END)
  sw t1, 0(t0)
_end_loop:
  j _end_loop