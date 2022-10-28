#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: The string
 * Return: A pointer to the string
 */
char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;
		if (str[x - 1] == ' ' ||
				str[x - 1] == '\t' ||
				str[x - 1] == '\n' ||
				str[x - 1] == ',' ||
				str[x - 1] == ';' ||
				str[x - 1] == '.' ||
				str[x - 1] == '!' ||
				str[x - 1] == '?' ||
				str[x - 1] == '"' ||
				str[x - 1] == '(' ||
				str[x - 1] == ')' ||
				str[x - 1] == '{' ||
				str[x - 1] == '}' ||
				x == 0)
			str[x] -= 32;
		x++;
	}

	return (str);
}
