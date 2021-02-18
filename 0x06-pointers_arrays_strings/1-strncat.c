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
 * _strncat - check the code for Holberton School students.
 *	@dest: pointer od destination.
 *	@src: pointer of src.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = len(dest);

	for (i = 0; i < n; i++)
	{
		*(dest + i + log) = *(src + i);
	}
	return (dest);
}
