#include <stdio.h>
/**
 *main- Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char let = 'a';
while (let <= 'z')
{
if (let != 'q' && let != 'e')
{
	putchar(let);
	let++;
}
putchar('\n');
}
return (0);
}
