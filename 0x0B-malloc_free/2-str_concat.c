#include "holberton.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: firts tring to concatenate
 * @s2: second string to concatenate
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *sum_size;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (i = 0; s1[i] != '\0' ; i++) /* get size of s1 */
	{}

	for (j = 0; s2[j] != '\0'; j++) /* get size of s2 */
	{}

	sum_size = malloc((i + j * sizeof(char) + 1)); /* get size of s1 and s2 */

	for (i = 0; *(s1 + i) != 0; i++) /* add values of sum_size to s1*/
		sum_size[i] = *(s1 + i);

	for (j = 0; *(s2 + j) != 0; j++) /* add values of s1 to s2 */
	{
		sum_size[i]  = *(s2 + j);
		i++;
	}
	return (sum_size);
}
