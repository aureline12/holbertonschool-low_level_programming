#include "holberton.h"
/**
 * times_table - print multiplication tables from 0 to 9.
 */
void times_table(void)
{
	int tables, column;

	for (tables = 0; tables < 10; tables++)
	{
		_putchar('0');
		for (column = 1; column < 10; column++)
		{
			if ((tables * column) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((tables * column) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((tables * column) / 10) + '0');
				_putchar(((tables * column) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
