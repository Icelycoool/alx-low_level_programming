#include "main.h"

/**
*print_alphabet_x10-prints 10 times the alphabet.
*/
void print_alphabet_x10(void)
{
	int letter;
	int counter = 0;

	while (counter < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');

		counter++;
	}
}
