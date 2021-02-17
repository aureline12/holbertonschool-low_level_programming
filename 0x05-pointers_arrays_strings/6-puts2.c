#include "holberton.h"
/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
