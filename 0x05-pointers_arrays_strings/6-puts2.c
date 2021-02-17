#include "holberton.h"
/**
 * puts2 - this function print only the even numbers.
 * @str: is the principal parameter.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}
