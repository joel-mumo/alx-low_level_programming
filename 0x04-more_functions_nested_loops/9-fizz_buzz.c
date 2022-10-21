#include <stdio.h>

/**
 * main - Print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int m;

	printf("1");
	for (m = 2; m <= 100; m++)
	{
		printf(" ");
		if (m % 3 == 0)
			printf("Fizz");
		if (m % 5 == 0)
			printf("Buzz");
		if (m % 3 != 0 && m % 5 != 0)
			printf("%d", m);
	}
	printf("\n");
	return (0);
}
