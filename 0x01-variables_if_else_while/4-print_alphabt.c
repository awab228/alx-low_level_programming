#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except letter q,e
 *
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
