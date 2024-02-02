/*
 * File: script.ld
 * Created Date: 2023-03-31 02:52:02 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-02-01 02:25:33 pm
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 ENSEIRB-MATMECA
 * -----
 * Description: 
 */


MEMORY
{
  BOOT     (rx)  : ORIGIN = 0x04000000, LENGTH = 0x00040000
  iROM     (rx)  : ORIGIN = 0x08000000, LENGTH = 0x00040000
  iRAM     (rwx) : ORIGIN = 0x0c000000, LENGTH = 0x00040000
}

STACK_SIZE  = 0x00003000;
PC_BOOT     = 0x04000000;

/* Section Definitions */
SECTIONS
{  
  /* Code and constants */
  .boot PC_BOOT :
  {
    KEEP(*start.o(.text*));
    *start.o(.rodata*);
    *start.o(.srodata*);
    *(.rodata*);
    *(.srodata*);
    *(.text*);
    . = ALIGN(32);    /* PADDING END SECTION */
  } > BOOT

  /* Initialized data */
  .data : 
  {
    . = ALIGN(32);
    _sdata = . ;
    *(.data*);
    *(.sdata*);
    . = ALIGN(32);    /* PADDING END SECTION */
    _edata = . ;
  } > iRAM AT > BOOT

  /* Unitialized data */
  .bss (NOLOAD) :
  {
    . = ALIGN(32);
    _sbss = . ;
    *(.bss*);
    *(.sbss*);
    *(COMMON);
    . = ALIGN(32);    /* PADDING END SECTION */
    _ebss = . ;
  } > iRAM

  /* Stack */
  .stack (NOLOAD):
  {
    . = ALIGN(8);
    . = . + STACK_SIZE;
    . = ALIGN(8);
    _stack = . ;
  } > iRAM
}
