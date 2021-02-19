#include "holberton.h"

/**
 * string_toupper - this fuction print in upper.
 * @str: is the string to comparate.
 * Return: i.
 */
char *string_toupper(char *str)
{
	char *i = str;

	for (; *str != '\0'; str++)
		if (*str > 'a' && *str < 'z')
			*str -= ' ';
	return (i);
}
