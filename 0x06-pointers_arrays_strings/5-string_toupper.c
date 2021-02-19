#include "holberton.h"

/**
 * string_toupper - this fuction print in upper.
 * @str: is the string to comparate.
 * Return: i.
 */
char *string_toupper(char *str)
{
	char *i;

	for (i = str; *str != '\0'; str++)
		if (*str > 'a' && *str < 'z')
			*str -= 32;
	return (i);
}
