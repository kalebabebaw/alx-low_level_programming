#include "main.h"

/**
 * _strcpy - copies the string pointed to by scr into dest
 * @dest: destination
 * @scr: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *scr)
{
	int i;

	for (i = 0; *(scr + i) != '\0'; i++)
	{
		dest[i] = *(scr + i);
	}
	dest[i] = '\0';

	return (dest);
}
