#include "main.h"
/**
 * _strlen - return the length of a string
  * @s: char to check
  * Return: the lenght of of a string
 */
int _strlen(char *s)
{
	int lenght = 0;

	for (; *s++;)
		lenght++;
	return (lenght);
}
