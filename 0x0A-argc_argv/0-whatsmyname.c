#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: the number of arguments
 * @argv: An array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
