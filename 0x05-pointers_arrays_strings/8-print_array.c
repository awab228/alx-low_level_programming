#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of  array of integers
 * followed by newline
 * @n: the number of elements to print
 * @a: the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
