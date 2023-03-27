#include "main.h"
#include <stdio.h>

/**
 *print_line- draws a straight line in the terminal
 *@n: number of times the character - should be printed
 */

void print_line(void)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
