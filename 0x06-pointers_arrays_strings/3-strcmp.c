#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: is a first string
 * @s2: is a second string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	int r = *s1 - *s2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		return (r);
	}
	return (0);
}
