#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: The number of arguments
 * @argv: An array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ct = 0;

	if (argc > 0)
	{
		while (ct < argc)
		{
			printf("%s\n", argv[ct]);
			ct++;
		}
	}
	return (0);
}
