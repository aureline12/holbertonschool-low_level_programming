#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * I can see if positive or negative number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive \n", n);
	else if (n < 0)
		printf("%i is negative \n", n);
	else
		printf("%i is zero \n", n);
	return (0);
}
