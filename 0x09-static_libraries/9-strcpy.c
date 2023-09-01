#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: the string to be copied
 * @src: the pointer to the buffer in which
 * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
