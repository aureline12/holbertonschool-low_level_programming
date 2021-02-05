#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all alphabet
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; ++n)
	{
		if ((n != 101) && (n != 113))
		putchar(n);
	}
	putchar('\n');
	return (0);
}
