#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * of the string to uppercase
 * @s: string to modify
 * Return: the final string
 */
char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
