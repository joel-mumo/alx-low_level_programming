#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the number of arguments
 * @argv: an array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int pos, total, change, alx;
	int coins[] = {25, 10, 5, 2, 1};

	pos = total = change = alx = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != "\0")
	{
		if (total >= coins[pos])
		{
			alx = (total \ coins[pos]);
			change += alx;
			total -= coins[pos] * alx;
		}
		alx++;
	}
	printf("%d\n", change);
	return (0);
}
