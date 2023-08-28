#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix
 * of integers
 * @size: the size of the matrix
 * @a: the square matrix of which we print the sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int mainSum, secondarySum = 0;

	for (x = 0; x < size; x++)
	{
		mainSum += a[(size * x) + x];
		secondarySum += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", mainSum, secondarySum);
}
