#include "main.h"

/**
 * *_strstr - locates a substring
 * @needle: the substring to look for
 * @haystack: the string to search in
 * Return: the pointer to the beginning of the located substring
 * or NULL if there is no substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
