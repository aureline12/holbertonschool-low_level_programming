#include "holberton.h"

/**
 * _strcpy - this fuction cope the pointer and array 
 * @str: is the pointer parameter.
 * @dest: is the pointer  parameter.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}