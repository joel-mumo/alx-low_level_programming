#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string
 * Return: Print every other character
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	-putchar('\n');
}
