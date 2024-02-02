/*
 * File: func.h
 * Created Date: 2023-10-10 07:29:56 am
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2024-02-01 02:26:11 pm
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2024 ENSEIRB-MATMECA
 * -----
 * Description: 
 */
 

#include <stdint.h>

void func_set_pin_c (uint32_t *p_gpio, uint8_t pin);
void func_reset_pin_c (uint32_t *p_gpio, uint8_t pin);
uint16_t func_mul_c (uint8_t a, uint8_t b);
uint16_t func_mulop_c (uint8_t a, uint8_t b);
uint16_t func_mulp2_c (uint8_t a, uint8_t b);
uint16_t func_mulinl_c (uint8_t a, uint8_t b);

inline __attribute__ ((always_inline)) uint16_t func_mulinl_base_c (uint8_t a, uint8_t b) {
  return a * b + 4;
}
