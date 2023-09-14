#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of a function
 * @func: pointer to the function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(void *func, int n)
{
	unsigned char *opcode = (unsigned char *)func;

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", opcode[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((void *)&main, n);
	return (0);
}
