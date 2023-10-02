// Short program used to configure digital IO for the STMicroelectronics NUCLEO-F401RE
#include "mbed.h"
#include "C12832.h"

DigitalIn button(PC_13); // Declares button (input as pin PC_13) object as type DigitalIn
DigitalOut led(PA_5); // Declares led (input as pin PA_5) object as type DigitalOut
int main() {
  led = 0; // init led off
  while (1) {
      while (!button) { // Button active on low (clips to 0) therefore when button pressed led active
      led = 1; // Enables LED
        }
    led = 0; // Disables LED
    } // Runs code for all time such that the board does not stop running
}
