#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point
 * I can see if positive or negative number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("the last digit of %d, and is greater than %d\n" ,n , lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("the last digit of  %d,  %d\n ", lastDigit, n);
	}
	else
	{
		printf("is negative %d and last digit %d \n", n, lastDigit);
	}
	return (0);
}
