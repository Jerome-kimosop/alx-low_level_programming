#include "main.h"
#include <stdio.h>
/**
 *_isdigit- checks if it is digits 0-9
 *@c:the character to be checked
 *Return: 1 if is digit,otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
