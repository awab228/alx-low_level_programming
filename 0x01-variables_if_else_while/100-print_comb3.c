#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * becase we are using putchar we init values that represents digits in asci.
 * Return: 0 always
 */
int main(void)
{
	int d, n;

	for (d = 48; d <= 56; d++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > d)
			{
				putchar(d);
				putchar(n);
				if (d != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
