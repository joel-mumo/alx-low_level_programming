#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - check if there is a digit in a string
 * @str: An array of strings
 * Return: 0 on success
 */
int check_num(char *str)
{
	unsigned int ct;

	ct = 0;
	while (ct < strlen(str))
	{
		if (!isdigit(str[ct]))
		{
			return (0);
		}
		ct++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ct;
	int string_int;
	int sum = 0;

	ct = 1;
	while (ct < argc)
	{
		if (check_num(argv[ct]))
		{
			string_int = atoi(argv[ct]);
			sum += string_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		ct++;
	}
	printf("%d\n", sum);
	return (0);
}
