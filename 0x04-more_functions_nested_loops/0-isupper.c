#include "holberton.h"

/**
* _isupper - This function verify if is upper.
* @c: the parameter char to comparate.
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
