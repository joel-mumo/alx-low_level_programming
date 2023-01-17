#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string
 * @accept: The comparison string
 * Return: The number of bytes in @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y = 0;

	for (; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
			if (s[x] != accept[y])
				break;
	}
	return (x);
}
