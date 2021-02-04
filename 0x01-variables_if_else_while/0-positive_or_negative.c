#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * I can see if positive or negative number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	
		printf("is positive %i\n", n);
	
	else if (n == 0)
	
		printf("is zero %i\n", n);
	
	else
	
		printf("is negative %i\n", n);
	
	return (0);
}
