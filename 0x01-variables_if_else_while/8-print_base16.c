#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * we init n to 48 which is 0 in asci.
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	int n;
	char letter;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
