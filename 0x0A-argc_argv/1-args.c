#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: The number of arguments
 * @argv: An array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
