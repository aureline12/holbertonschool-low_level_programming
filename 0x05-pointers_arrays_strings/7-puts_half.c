#include "holberton.h"

/**
 * puts_half - this function print only the even numbers.
 * @str: is the principal parameter.
 */
void puts_half(char *str)
{
	int i, len, m;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if ((len  % 2) == 0)
		m = (len / 2);
	else
		m = (len - 1) / 2;

	for (i = m; i < len; i++)
	{
		if (str[i] == ' ')
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
