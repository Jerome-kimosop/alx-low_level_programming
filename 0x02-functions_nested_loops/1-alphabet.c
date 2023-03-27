#include "main.h"
/**
 *main- Entry point
 *print_alphabet- Prints alphabets in lower case
 *Return: Always 0
 */
void print_alphabet(void)
{
	/* prints alphabets in lower case*/
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
