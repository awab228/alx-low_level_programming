#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * we init n to 48 which is 0 in asci, because putchar supports chars only
 * and this is the shortest way.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
