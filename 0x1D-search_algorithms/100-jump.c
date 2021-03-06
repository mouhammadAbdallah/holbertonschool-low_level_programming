#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: array to search in
 * @size: size of arry
 * @value: value to look for
 *
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	int l = 0, r, lft, rgt;
	int int_size = (int)size;

	if (array != NULL && size != 0)
	{
		jump = sqrt(size);
		while (l < int_size && array[l] <= value)
		{
			printf("Value checked array[%u] = [%i]\n", l, array[l]);
			r = min(int_size - 1, l + jump);
			if (array[l] <= value && array[r] >= value)
				break;

			l += jump;
		}
		lft = min(l, r);
		rgt = max(l, r);
		printf("Value found between indexes [%u] and [%u]\n", lft, rgt);
		l = lft;
		if (l >= int_size || array[l] > value)
			return (-1);
		r = min(int_size - 1, rgt);
		while (l <=  r && array[l] <= value)
		{
			printf("Value checked array[%u] = [%i]\n", l, array[l]);
			if (value == array[l])
				return (l);
			l++;
		}
	}
	return (-1);
}

/**
 * min - finds minimum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: smaller number
 */

int min(int a, int b)
{
	return (a < b ? a : b);
}


/**
 * max - finds maximum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: bigger number
 */

int max(int a, int b)
{
	return (a > b ? a : b);
}
