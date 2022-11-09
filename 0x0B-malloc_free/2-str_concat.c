#include "main.h"

/**
 * _strln - count size of array
 * @s: An array of elements
 * Return: 1 on success
 */
int _strln(char *s)
{
	unsigned int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * str_concat - concatenates two strings.
 * @s1: String one
 * @s2: String two
 * Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 = "";

	size = (_strln(s1) + _strln(s2) + 1);

	d = (char *) malloc(size * sizeof(char));

	if (d == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(d + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(d + i) = *(s2 + j);
		i++;
	}
	return (d);
}
