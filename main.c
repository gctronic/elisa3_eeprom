
#include <avr\io.h>
#include <avr\eeprom.h>

int main(void) {

	unsigned int rfAddress = 3207;

	eeprom_write_word((uint16_t*)4094, rfAddress);

}
