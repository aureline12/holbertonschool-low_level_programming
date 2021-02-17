#include "holberton.h"
/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}

	while (i <= len)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
