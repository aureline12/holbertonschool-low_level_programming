#include "holberton.h"
/**
* malloc_checked - Function that allocates memory using malloc.
* @b: integer to comparate
* Return: pointer to check
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b); /* We genve the Pointer Malloc  */

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);

}
