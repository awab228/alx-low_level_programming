#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @accept: the string containing the bytes to look for
 * @s: the string to search
 * Return: the pointer to the byte in s that matches one of the bytes in accept
 * or NULL if there are no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
