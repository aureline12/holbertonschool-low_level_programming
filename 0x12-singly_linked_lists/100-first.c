#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void __attribute__ ((constructor)) beforeMain (void)
{
    printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
