#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input
 * @Retrun: output
 */
void rev_string(char *s)
{
	int l = 0;
	int r = 0;
	char tmp;

	while (s[1] != '\0')
	{
		l++;
	}
	l--;
	while (l > r)
	{
		tmp = s[r];
		s[r] = s[l];
		s[l] = tmp;
		l--;
		r++;
	}
}
