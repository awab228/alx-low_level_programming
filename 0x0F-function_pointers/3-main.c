#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - operation requested by the user
  *
  * Return: error 98 if if arguments passed 
  * are less than 4, error 99 if operator not found
  * error 100 is divide by 0, or prints the result  
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opration = get_op_func(argv[2]);

	if (!opration)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opration(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
