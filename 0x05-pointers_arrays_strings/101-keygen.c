#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 * Return: 0 always
 */
int main(void)
{
	int passwordd[100];
	int i, aloc, x;

	aloc = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		aloc += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - aloc) - '0' < 78)
		{
			x = 2772 - aloc - '0';
			aloc += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
