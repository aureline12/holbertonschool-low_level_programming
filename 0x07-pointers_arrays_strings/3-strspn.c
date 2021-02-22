#include "holberton.h"
int _includes(char *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return(1);
        str += 1;
    }
    return (0);
}

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:
 * @accept:
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;
    
    for (i = 0; *(s + i) != '\0'; i++)
        if (_includes(accept, *(s + i)))
            count++;
        else
            break;
    return (count);
}