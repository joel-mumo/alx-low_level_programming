#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it's own opcodes
 * @argc: number of arguments
 * @argv: an array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ary = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", ary[j]);
			break;
		}
		printf("%02hhx\n", ary[j]);
	}
	return (0);
}
