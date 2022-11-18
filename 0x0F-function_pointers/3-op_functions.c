#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - calulates the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calulates the difference of two integers
 * @a: First integer
 * @b: Second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: result of dividing a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the reminder of diving two integers
 * @a: First integer
 * @b: Second integer
 * Return: The remainder of dividing a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
