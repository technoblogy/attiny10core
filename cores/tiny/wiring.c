/*
  wiring.c
*/

#include <Arduino.h>

void init(void)
{
  #if (F_CPU == 8000000L)
  CCP = 0xD8;
  CLKPSR = 0b0000;
  #endif
}
