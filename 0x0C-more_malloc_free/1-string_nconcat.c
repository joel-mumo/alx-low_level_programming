#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: memory size
 * Return: a pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int size1 = 0, size2 = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	k = malloc((size1 + n + 1) * sizeof(char));

	if (k == NULL)
		return (0);

	for (j = 0; j < size1; j++)
	{
		k[j] = s1[j];
	}
	for (; j < (size1 + n); j++)
	{
		k[j] = s2[j - size1];
	}
	k[j] = '\0';

	return (k);
}
