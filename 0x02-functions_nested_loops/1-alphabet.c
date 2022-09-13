#include "stdio.h"

/**
 * print_alphabet  prints the lowercase alphabet
 * Description: prints lowercase alphabets
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
