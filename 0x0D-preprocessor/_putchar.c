#include <unistd.h>

/**
 * _putchar - prints character c to stdout
 * @c: The character
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
