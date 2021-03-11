#include "variadic_functions.h"


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d",va_arg(args, int));
		else
			printf("%d%s",va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
