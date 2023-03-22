#include "main.h"
#include <stdio.h>
/**
 *main- Entry point
 *print_alphabet: Prints alphabets in lower case
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
		putchar(c);
		c++;
	}

	putchar('\n');
}
return (0);
}
