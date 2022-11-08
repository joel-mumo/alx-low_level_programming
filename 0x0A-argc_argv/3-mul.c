#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integers
 * @argc: number of arguments
 * @argv: an array of the arguments
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", *x, *y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
