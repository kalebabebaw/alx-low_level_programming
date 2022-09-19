#include "main.h"
/**
 * _strcpy - function that copies the string pointed by scr
 * @dest: input
 * @scr: input
 * Return: value the pointed to dest
 */
char *strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (scr[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = scr[i];
	}
	return (dest);
}
