#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: counts of numbers.
 * Return: all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{

	if (n == '\0')
		return (0);

	va_list args;
	int n = 0;

	va_start(args, n);
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		n += va_arg(args, int);
	}
	va_end(args);
	return (n);
}
