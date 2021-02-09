#include "holberton.h"
/**
* times_table - entry point
*
*/

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i * j < 10)
			{
				_putchar((i * j) % 10 + '0');
				_putchar(44);
				if (i * j <= 8)
				{
					_putchar(32);
					_putchar(32);
				}

			}

			if (i * j >= 10)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				_putchar(32);

			}
		}
	_putchar(10);
	}
}
