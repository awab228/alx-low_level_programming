#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: pointrt to first int
* @b: pointer to second int
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
