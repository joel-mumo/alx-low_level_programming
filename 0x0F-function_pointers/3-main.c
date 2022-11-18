#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs operations
 * @argc: number of arguments
 * @argv: an array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ag1, ag2, result;
	char g;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ag1 = atoi(argv[1]);
	ag2 = atoi(argv[1]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	g = *argv[2];

	if ((g == "/" || g == "%") && ag2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(ag1, ag2);

	printf("%d\n", result);

	return (0);
}
