#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 *main- prints the largest prime factor followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	long long n = 612852475143;
	long long largest_prime_factor = 2;

	while (n > largest_prime_factor)
	{
		if (n % largest_prime_factor == 0)
		{
			n /= largest_prime_factor;
			largest_prime_factor = 2;
		}
		else
		{
			largest_prime_factor++;
		}
	}

	printf("%lld\n", largest_prime_factor);

	return (0);
}
