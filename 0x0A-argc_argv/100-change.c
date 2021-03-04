#include <stdio.h>
#include <stdlib.h>

/**
* main - print product of multiplication of two arguments
* @argc: counter of arguments
* @argv: arguments
* Return: (Success)
*/

int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	unsigned int i = 0, count_coins = 0, convert_nums;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	convert_num = atoi(argv[1]);

	if (convert_num < 0)
	{
		return (1);
	}

	while (convert_num)
	{
		convert_num -= change[i];
		count_coins += 1; /* add count the amount of coins */
		if (convert_num < 0) /* Verify if the result is negative */
		{
			convert_num += change[i];
			count_coins -= 1; /* rest count the amount of coins */
			i += 1; /* change of coin  */
		}
	}
	printf("%d\n", count_coins);
	return (0);
}
