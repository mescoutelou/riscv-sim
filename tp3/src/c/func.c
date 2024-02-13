/*
 * File: func.c
 * Created Date: 2023-10-09 08:59:17 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-02-13 11:42:12 am
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 HerdWare
 * -----
 * Description: 
 */

#include "func.h"

volatile uint32_t var;
volatile __attribute__ ((aligned (1))) uint32_t tab[1];
volatile __attribute__ ((aligned (256))) uint32_t mat1[8][8];
volatile __attribute__ ((aligned (256))) uint32_t mat2[8][8];
volatile __attribute__ ((aligned (256))) uint32_t mat3[8][8];

void func () {
}