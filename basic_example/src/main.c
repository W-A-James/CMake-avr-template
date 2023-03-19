/* Example of CMake usage with AVR. Shows how to add lib directories and include
 * in main program */
#include <avr/io.h>
#include "wait.h"
#include "blink.h"


int main(void) {
  /* Sets PORT A.0 as an output */
  DDRA |= _BV(PA0);

  for (;;) {
    blink();
    wait();
  }

  return 0;
}
