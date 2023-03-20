#include <stdio.h>
/**
 *main- Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
for (i = 0; i < 10; i++)
{
	for (j = i; j < 10; j++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(j + '0');
	}
}
putchar('\n');
return (0);
}
