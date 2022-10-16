#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
	{
		putchar(lowerc);
	}
	putchar('\n');
	return (0);
}
