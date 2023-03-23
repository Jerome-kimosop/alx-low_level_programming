#include "main.h"
/**
 *print_alphabet- Prints alphabets in lower case
 *Return: Always 0
 */
int main(void)
{
/* prints alphabets in lower case*/
	void print_alphabet(void)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}
	return (0);
}
