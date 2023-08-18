#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by new line
 * Return: 0 always
 */
int main(void)
{
	long int x;
	long int largestPrime;
	long int i;

	x = 612852475143;
	largestPrime = -1;

	while (x % 2 == 0)
	{
		largestPrime = 2;
		x /= 2;
	}

	for (i = 3; i <= sqrt(x); i = i + 2)
	{
		while (x % i == 0)
		{
			largestPrime = i;
			x = x / i;
		}
	}

	if (x > 2)
		largestPrime = x;

	printf("%ld\n", largestPrime);

	return (0);
}
