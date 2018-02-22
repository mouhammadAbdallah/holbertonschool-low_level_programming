#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform on arguments
 * @s: operator passed to arguments
 *
 * Return: pointer to correct function
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
	int i = 0;

	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}


	return (0);
}
