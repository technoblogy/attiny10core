#include <Arduino.h>

int main(void)
{
  #if F_CPU == 8000000L
  CCP = 0xD8;
  CLKPSR = 0;
  #endif
		
  init();

  setup();

  for (;;)
    loop();

  return 0;
}
