#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c:The character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
