#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char tp;

	for (tp = 'z'; tp >= 'a'; tp--)
		putchar(tp);

	putchar('\n');

	return (0);
}
