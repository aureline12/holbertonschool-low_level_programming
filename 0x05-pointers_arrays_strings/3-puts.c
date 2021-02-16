#include "holberton.h"
/**
 * _puts - this function change the initial.
 * @str: this is a parameter to change.
 *
 */
void _puts(char *str)
{
	int i;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
