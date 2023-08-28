#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @accept: string containing the list
 * of characters to match in s
 * @s: the string to evaluate
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int r = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					r++;
			}
		}
		else
			return (r);
	}
		return (r);

}
