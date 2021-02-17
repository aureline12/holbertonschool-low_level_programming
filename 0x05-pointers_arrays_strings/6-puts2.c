#include "holberton.h"
/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 9; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
