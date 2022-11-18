#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform an op
 * @s: The operator given by user
 * Return: A pointer to the function that corresponds to
 * the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;

	while (ops[j].op)
	{
		if (strcmp(ops[j].op, s) == 0)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
