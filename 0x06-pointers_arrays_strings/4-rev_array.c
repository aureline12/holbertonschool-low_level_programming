#include "holberton.h"

/**
 * reverse_array - print an reverse array.
 * @a: an array of integers
 * @n: the number of elements
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *ini = a, tmp;

	a += n - 1;

	while (ini < a)
	{
		tmp = *ini;
		*ini = *a;
		*a = tmp;
		ini++;
		a--;
	}
}
