#include <avr/io.h>
#include <avr/pgmspace.h>
#include "main.h"


// const uint16_t code_times[] PROGMEM = {
  // 895,
  // 445,
  // 55,
  // 165,
  // 55,
  // 60,
// };

// const struct IrCode code_code PROGMEM = {
  // freq_to_timerval(38462),
  // 34,
  // 2,
  // code_times,
  // {
    // 0x16,
    // 0xAA,
    // 0x59,
    // 0x99,
    // 0xAA,
    // 0x9A,
    // 0x55,
    // 0x65,
    // 0x90,
  // }
// };


// 00010110 10101010 01011001 10011001 10101010 10011010 01010101 01100101 1001

// -1440 
// 8900 -4400 
// 600 -1600 
// 600 -1600 
// 600 -500
// 650 -500
// 600 -500
// 600 -500
// 650 -500
// 600 -1600
// 600 -1600
// 650 -450
// 650 -1550
// 650 -500
// 600 -1600
// 650 -450
// 650 -1550
// 650 -500
// 600 -500
// 650 -450
// 650 -500
// 600 -500
// 650 -1600
// 600 -500
// 600 -500
// 650 -1550
// 650 -1550
// 650 -1550
// 650 -1600
// 600 -1600
// 600 -500
// 650 -1550
// 650 -1550
// 650 -500
// 600 


const uint16_t code_times[] PROGMEM = {
  890,440,
60,160,
65,50
};

const struct IrCode code_code PROGMEM = {
  freq_to_timerval(38462),
  34,
  2,
  code_times,
  {
    0x16,
    0xAA,
    0x59,
    0x99,
    0x9A,
    0xA9,
    0xA5,
    0x55,
    0x65,
	0x90
  }
};


////////////////////////////////////////////////////////////////


const struct IrCode * const NApowerCodes[] PROGMEM = {
	&code_code
}; 

const struct IrCode * const EUpowerCodes[] PROGMEM = {};

const uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
const uint8_t num_EUcodes = NUM_ELEM(EUpowerCodes);

