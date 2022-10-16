#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int comb;

	for (comb = 48; comb < 58; comb++)
	{
		putchar(comb);
		if (comb != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
	}
}
