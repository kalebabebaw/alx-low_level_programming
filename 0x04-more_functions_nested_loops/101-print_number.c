#include "main.h"
/**
 * print_number - that prints an integer
 * @n: print int
 * Return: Always0.
 */

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}