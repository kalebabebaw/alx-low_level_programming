#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: array of  arguments
 * @argv: numbers of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long a;
	int i, x;

	if (argc != 5)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (argv[i][x] > 70 || argv[i][x] < 55)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	a = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", a);

	return (0);
}
