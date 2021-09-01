#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: int (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg = 0, mid, end = size - 1;

	if (array == NULL)
		return (-1);

	while (beg <= end)
	{
		mid = (beg + end) / 2;
		print_array(array, beg, end);

		if (array[mid] < value)
			beg = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
/**
 * print_array -  print information of the array
 *
 * @array: array for print
 * @beg: beginning of arrangement
 * @end: end of arrangement
 */
void print_array(int *array, size_t beg, size_t end)
{
	printf("Searching in array: ");

	for (beg = beg; beg < end; beg++)
		printf("%d, ", array[beg]);

	printf("%d\n", array[beg]);
}
