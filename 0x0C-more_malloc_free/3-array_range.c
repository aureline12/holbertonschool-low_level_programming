#include "holberton.h"
/**
* array_range - Function that creates an array of integers.
* @min: is the min
* @max: is the mix
* Return: s.
*/
int *array_range(int min, int max)
{
	int i, length = (max - min); /* Here we drowned the amount to find */
	int *array;

	if (min >= max)
	{
		return (NULL);
	}

	array = malloc(length * sizeof(*array));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min < max; min++, i++)
	{
		*(array + i) = min;
	}

	return (array);
}
