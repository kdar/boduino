#include <avr/io.h>
#include <avr/pgmspace.h>
#include "main.h"


// const uint16_t code_times[] PROGMEM = {
//   NEC_HDR_MARK, NEC_HDR_SPACE,
//   NEC_BIT_MARK, NEC_ONE_SPACE,
//   NEC_BIT_MARK, NEC_ZERO_SPACE
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


// const uint16_t code_times[] PROGMEM = {
//   890,440,
// 60,160,
// 65,50
// };

// const struct IrCode code_code PROGMEM = {
//   freq_to_timerval(38462),
//   34,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x55,
//     0x65,
// 	0x90
//   }
// };

#define NEC_HDR_MARK  900
#define NEC_HDR_SPACE 450
#define NEC_BIT_MARK  56
#define NEC_ONE_SPACE 160
#define NEC_ZERO_SPACE  56

#define NEC_REPEAT_PAUSE 4014

const uint16_t code_times[] PROGMEM = {
  NEC_HDR_MARK, NEC_HDR_SPACE,
  NEC_BIT_MARK, NEC_ONE_SPACE,
  NEC_BIT_MARK, NEC_ZERO_SPACE,
  NEC_BIT_MARK, NEC_REPEAT_PAUSE
};

const struct IrCode code_code PROGMEM = {
  freq_to_timerval(38462),
  68,
  2,
  code_times,
  {
    0x16,
    0xAA,
    0x59,
    0x99,
    0xAA,
    0x9A,
    0x55,
    0x65,
    0xB1,
    0x6A,
    0xA5,
    0x99,
    0x9A,
    0xA9,
    0xA5,
    0x56,
    0x59
  }
};



// const struct IrCode code_34000 PROGMEM = {
//   freq_to_timerval(34000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_34200 PROGMEM = {
//   freq_to_timerval(34200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_34400 PROGMEM = {
//   freq_to_timerval(34400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_34600 PROGMEM = {
//   freq_to_timerval(34600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_34800 PROGMEM = {
//   freq_to_timerval(34800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_35000 PROGMEM = {
//   freq_to_timerval(35000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_35200 PROGMEM = {
//   freq_to_timerval(35200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_35400 PROGMEM = {
//   freq_to_timerval(35400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_35600 PROGMEM = {
//   freq_to_timerval(35600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_35800 PROGMEM = {
//   freq_to_timerval(35800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_36000 PROGMEM = {
//   freq_to_timerval(36000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_36200 PROGMEM = {
//   freq_to_timerval(36200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_36400 PROGMEM = {
//   freq_to_timerval(36400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_36600 PROGMEM = {
//   freq_to_timerval(36600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_36800 PROGMEM = {
//   freq_to_timerval(36800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_37000 PROGMEM = {
//   freq_to_timerval(37000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_37200 PROGMEM = {
//   freq_to_timerval(37200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_37400 PROGMEM = {
//   freq_to_timerval(37400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_37600 PROGMEM = {
//   freq_to_timerval(37600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_37800 PROGMEM = {
//   freq_to_timerval(37800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_38000 PROGMEM = {
//   freq_to_timerval(38000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_38200 PROGMEM = {
//   freq_to_timerval(38200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_38400 PROGMEM = {
//   freq_to_timerval(38400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_38600 PROGMEM = {
//   freq_to_timerval(38600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_38800 PROGMEM = {
//   freq_to_timerval(38800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_39000 PROGMEM = {
//   freq_to_timerval(39000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_39200 PROGMEM = {
//   freq_to_timerval(39200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_39400 PROGMEM = {
//   freq_to_timerval(39400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_39600 PROGMEM = {
//   freq_to_timerval(39600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_39800 PROGMEM = {
//   freq_to_timerval(39800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_40000 PROGMEM = {
//   freq_to_timerval(40000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_40200 PROGMEM = {
//   freq_to_timerval(40200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_40400 PROGMEM = {
//   freq_to_timerval(40400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_40600 PROGMEM = {
//   freq_to_timerval(40600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_40800 PROGMEM = {
//   freq_to_timerval(40800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_41000 PROGMEM = {
//   freq_to_timerval(41000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_41200 PROGMEM = {
//   freq_to_timerval(41200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_41400 PROGMEM = {
//   freq_to_timerval(41400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_41600 PROGMEM = {
//   freq_to_timerval(41600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_41800 PROGMEM = {
//   freq_to_timerval(41800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_42000 PROGMEM = {
//   freq_to_timerval(42000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_42200 PROGMEM = {
//   freq_to_timerval(42200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_42400 PROGMEM = {
//   freq_to_timerval(42400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_42600 PROGMEM = {
//   freq_to_timerval(42600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_42800 PROGMEM = {
//   freq_to_timerval(42800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_43000 PROGMEM = {
//   freq_to_timerval(43000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_43200 PROGMEM = {
//   freq_to_timerval(43200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_43400 PROGMEM = {
//   freq_to_timerval(43400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_43600 PROGMEM = {
//   freq_to_timerval(43600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_43800 PROGMEM = {
//   freq_to_timerval(43800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_44000 PROGMEM = {
//   freq_to_timerval(44000),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_44200 PROGMEM = {
//   freq_to_timerval(44200),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_44400 PROGMEM = {
//   freq_to_timerval(44400),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_44600 PROGMEM = {
//   freq_to_timerval(44600),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };const struct IrCode code_44800 PROGMEM = {
//   freq_to_timerval(44800),
//   68,
//   2,
//   code_times,
//   {
//     0x16,
//     0xAA,
//     0x59,
//     0x99,
//     0xAA,
//     0x9A,
//     0x55,
//     0x65,
//     0xB1,
//     0x6A,
//     0xA5,
//     0x99,
//     0x9A,
//     0xA9,
//     0xA5,
//     0x56,
//     0x59
//   }
// };




////////////////////////////////////////////////////////////////


const struct IrCode * const NApowerCodes[] PROGMEM = {
	&code_code
  //,&code_34000,&code_34200,&code_34400,&code_34600,&code_34800,&code_35000,&code_35200,&code_35400,&code_35600,&code_35800,&code_36000,&code_36200,&code_36400,&code_36600,&code_36800,&code_37000,&code_37200,&code_37400,&code_37600,&code_37800,&code_38000,&code_38200,&code_38400,&code_38600,&code_38800,&code_39000,&code_39200,&code_39400,&code_39600,&code_39800,&code_40000,&code_40200,&code_40400,&code_40600,&code_40800,&code_41000,&code_41200,&code_41400,&code_41600,&code_41800,&code_42000,&code_42200,&code_42400,&code_42600,&code_42800,&code_43000,&code_43200,&code_43400,&code_43600,&code_43800,&code_44000,&code_44200,&code_44400,&code_44600,&code_44800
}; 

const struct IrCode * const EUpowerCodes[] PROGMEM = {};

const uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
const uint8_t num_EUcodes = NUM_ELEM(EUpowerCodes);

