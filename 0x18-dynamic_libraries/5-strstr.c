#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: The string look for
 * @haystack: The string where to look for @needle
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int p;

	for (; *haystack; haystack++)
	{
		for (p = 0; needle[p]; p++)
		{
			if (!(*(haystack + p)))
			{
				return (NULL);
			}
		if (*(haystack + p) != needle[p])
			break;
		}
		if (needle[p] == '\0')
			return (haystack);
	}
	return (NULL);
}
