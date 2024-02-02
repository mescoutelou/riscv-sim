/*
 * File: main.S
 * Created Date: 2023-10-09 03:34:09 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-02-02 12:01:58 pm
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 ENSEIRB-MATMECA
 * -----
 * Description: 
 */

#include "cpu.h"
#include "main.h"

## ******************************
##             CODE
## ******************************
## ------------------------------
##             MAIN
## ------------------------------
.globl main
main:
  # main save
  addi sp, sp, -4
  sw ra, 0(sp)

  # main body
//  li x10, 4
//  li x20, IO_CORE_ADDR_SCRATCH_BASE
//  lw x11, 0(x20)
//  add x12, x10, x11
//  srli x13, x11, 2
//  add x14, x12, x13
//  sw x14, 8(x20)
//  lw x15, 4(x20)
//  mv x16, x15
//  add x17, x16, x11
//  add x18, x17, x14
//  sw x18, 12(x20)
//  andi x19, x14, 1

//  li x20, IO_CORE_ADDR_SCRATCH_BASE
//  li x10, 4
//  lw x11, 0(x20)
//  lw x16, 4(x20)
//  add x12, x10, x11
//  srli x13, x11, 2
//  add x17, x16, x11
//  add x14, x12, x13
//  sw x14, 8(x20)
//  add x18, x17, x14
//  andi x19, x14, 1
//  sw x18, 12(x20)

  UARCH_OPT1_EN
  
//  li x20, IO_CORE_ADDR_SCRATCH_BASE
//  lw x11, 0(x20)
//  li x10, 4
//  lw x16, 4(x20)
//  add x12, x10, x11
//  srli x13, x11, 2
//  add x17, x16, x11
//  add x14, x12, x13
//  sw x14, 8(x20)
//  add x18, x17, x14
//  andi x19, x14, 1
//  sw x18, 12(x20)

  call func_loop

  # main end
  lw ra, 0(sp)
  addi sp, sp, 4
  ret

## ------------------------------
##     FUNCTION: func_loop
## ------------------------------
func_loop:
  ret

## ******************************
##             DATA
## ******************************
.section .data
.section .rodata