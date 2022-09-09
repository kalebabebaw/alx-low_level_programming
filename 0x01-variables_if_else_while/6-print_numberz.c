#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digits of base 10 followed by new line
 *
 * Return: returns 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
