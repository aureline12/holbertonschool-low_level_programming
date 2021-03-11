#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: is the array to iterate
 * @size: is the size of the array
 * @action: pointer to the function you need to use
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (0);
}
