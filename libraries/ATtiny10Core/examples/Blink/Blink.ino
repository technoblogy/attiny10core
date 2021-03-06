/*
  ATtiny10 Blink

  Turns an LED connected to PB0 on for one second, then off for one second, repeatedly.
  Assumes 1 MHz clock

*/

void setup () {
  DDRB = 1;                       // PB0 as an output
  TCCR0A = 1<<COM0A0 | 0<<WGM00;  // Toggle OC0A, CTC mode
  TCCR0B = 1<<WGM02 | 3<<CS00;    // CTC mode; use OCR0A; /64
  OCR0A = 15624;                  // 1 second; ie 0.5Hz
}

void loop () {
}
