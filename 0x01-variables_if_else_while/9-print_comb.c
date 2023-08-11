#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * we init n to 48, which is 0 in asci thats because putchar.
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
