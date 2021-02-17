#include "holberton.h"

/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != 0)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		else
			_putchar(0);
		i++;
	}
	_putchar('\n');
}
