#include <stdio.h>

/**
 * main - print product of multiplication of two arguments
 * @argc: counter of arguments
 * @argv: arguments
 * Return: (Success) : 1
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
