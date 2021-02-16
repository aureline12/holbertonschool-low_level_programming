#include "holberton.h"
/**
 * _strlen - this functoin change the initial
 * @s: this is a parameter to change
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
