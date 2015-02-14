#include <avr/io.h>
#include <avr/pgmspace.h>
#include "main.h"


const uint16_t code_times[] PROGMEM = {
  900,
  440,
  60,
  50,
  65,
  155,
};

const struct IrCode code_code PROGMEM = {
  freq_to_timerval(38462),
  34,
  2,
  code_times,
  {
    0x15,
    0xA9,
    0x6A,
    0x56,
    0x99,
    0x65,
    0x66,
    0x9A,
    0x90,
  }
};


////////////////////////////////////////////////////////////////


const struct IrCode * const NApowerCodes[] PROGMEM = {
	&code_code
}; 

const struct IrCode * const EUpowerCodes[] PROGMEM = {};

const uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
const uint8_t num_EUcodes = NUM_ELEM(EUpowerCodes);

