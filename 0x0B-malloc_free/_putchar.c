#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: The character
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
