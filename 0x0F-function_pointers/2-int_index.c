#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array to search in
 * @size: size of an array
 * @cmp: a pointer to the comparing function.
 *
 * Return: the index for the first element for
 * which the cmp funct. does not return 0,
 * or -1 when no match is found or size is
 * negative.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
