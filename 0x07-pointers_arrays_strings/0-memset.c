#include "main.h"

/**
 * main- entry point
 *
 * Descritpion: fills memory
 * @s: pointer
 * @b: input character
 * @n: input unsigned value
 */
char *_memset/* fill memory */(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
