#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Retrun: 0 (Success)
 */
int main(void)
{
	int sum = 2772;
	int n;

	srand(time(0));
	while (sum)
	{
		n = rand() % 100;
		if (n <= 94)
			n += 32;
		else
			continue;
		if (sim - n == 0)
		{
			sum -= n;
			printf("%c", n);
		}
		else if (sum - n - 32 > 0)
		{
			sum -= n;
			printf("%c", n);
		}
	}
	return (0);
}
