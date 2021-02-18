#include "holberton.h"
/**
 * len - duplicate the pinter..
 *	@dest: pointer od destination.
 * Return: Always 0.
 */
int len(char *dest)
{
	return ((*dest != '\0') ? 1 + len(dest + 1) : 0);
}
/**
 * _strcat - duplicate the pinter..
 *	@dest: pointer od destination.
 *	@src: pointer of src.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *d_itter = dest + len(dest) - 1;

	while (*src != '\0')
	{
		*d_itter = *src;
		src++;
		d_itter++;
	}
	*d_itter = *src;
	return (dest);
}
