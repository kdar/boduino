package main

import (
	"fmt"
	"strings"
)

var (
	tpl1 = `const struct IrCode %s PROGMEM = {
  freq_to_timerval(%d),
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
};`

	tpl2 = `const struct IrCode * const NApowerCodes[] PROGMEM = {
	%s
};`
)

func main() {
	var names []string
	for i := 34000; i < 45000; i += 200 {
		name := fmt.Sprintf("code_%d", i)
		fmt.Printf(tpl1, name, i)
		names = append(names, "&"+name)
	}

	fmt.Printf(tpl2, strings.Join(names, ","))
}
