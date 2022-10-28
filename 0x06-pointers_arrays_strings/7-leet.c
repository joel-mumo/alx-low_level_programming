#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: The input
 * Return: n
 */
char *leet(char *n)
{
	int x y;
	char j1[] = "aAeEoOtTlL";
	char j2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == j1[y])
			{
				n[x] = j2[y];
			}
		}
	}

	return (n);
}
