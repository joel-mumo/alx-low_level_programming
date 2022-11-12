#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int t = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		t = (t * 10) + (s[i] - '0');
		i++;
	}
	t *= sign;
	return (t);
}
