/*
  ATtiny10 Blink

  Fades a LED connected to PB0 repeatedly in and out.
  Assumes 8 MHz clock

*/

#include <avr/io.h>
#include <util/delay.h>

int main(void) {

  CCP = 0xD8;
  CLKPSR = (0 << CLKPS0) | (0 << CLKPS1) | (0 << CLKPS2) | (0 << CLKPS3); // 0000 - system clock is set to 8 MHz

  TCCR0A = (1 << WGM00) | (1 << WGM01) | (1 << COM0B1) | (1 << COM0B0); // PWM, Phase Correct, 10-bit - Compare Output Modes: non-inverted
  TCCR0B = (0 << WGM02) | (0 << WGM03) | (1 << CS00); // No prescaling: clock source is clk/1

  DDRB |= (1 << PB1);

  int8_t inc = 0;
  uint16_t duty = 0;

  while (1) {

    if (duty <= 0) {
      inc = 1;
    }
    else if (duty >= 1023) {
      inc = -1;
    }
    _delay_ms(1);
    OCR0B = (duty += inc);
  }
}
