#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - Function that allocates memory using malloc.
* @nmemb: is the each
* @size: is the size to find
* Return: s.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m_size;

	m_size = malloc(size); /* obtenemos la memoria de mall */

	/* error if is null */
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	/* malloc - reserve memory space */

	m_size = malloc(size * sizeof(char));

	/* possible error */
	if (m_size == NULL)
	{
		return (NULL);
	}

	/* we go through the arrangement of malloc */
	for (i = 0; i < size; i++)
	{
		*(m_size + i) = nmemb;
	}
	return (m_size);
}
