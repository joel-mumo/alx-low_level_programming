#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  multiplies two positive numbers
 * @argc: number of arguments
 * @argv: an array of the arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned int h;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	h = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", h);

	return (0);
}
