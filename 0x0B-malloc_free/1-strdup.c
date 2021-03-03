#include "holberton.h"


/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: is the first string to use to copy.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, j;

	/* Validate if is NULL */
	if (str == NULL)
		return (NULL);
	/* Get the space reserved in memory  */

	/* Tomamos el tamaño del string para reservar los espacio  */
	for (i = 0; str[i] != 0; i++)
	{}

	new_str = malloc(*str * sizeof(char) + 1);

	/*check if the new sting is null */
	if (new_str == NULL)
	{
		return (NULL);
	}

	/* Stores the content of str in new str */
	for (j = 0; j <= i; j++)
	{
		*(new_str + j) = str[j];
	}
	return (new_str);
}
