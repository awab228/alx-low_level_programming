#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: the number of bytes to copy
 * @src: the memory area to copy from
 * @dest: the destination memory area
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
