#include <avr/io.h>

void blink(void) {
	PORTA ^= _BV(PA0);
}
