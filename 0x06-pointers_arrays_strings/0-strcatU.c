#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *	@dest: pointer od destination.
 *	@src: pointer of src.
 * Return: Always 0.
 */
int len(char *dest)
{
	/* int len; */
    /*
	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	} */
    return ((*dest != '\0') ? 1 + len(dest + 1): 0);
	/* return (len); */
}
char *_strcat(char *dest, char *src)
{
    char *d_itter = dest + len(dest) - 1;

    while (*src != '\0')
    {
        *d_itter = *src;
        src = src +1;
        d_itter = d_itter + 1;
    }
    *d_itter = *src;
    return (dest);



}