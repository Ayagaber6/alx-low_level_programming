#include "main.h"

/**
 * main- entry point
 *
 * Descritpion: fills memiory
 * @s: pointer
 * @b: input character
 * @n: input unsigned value
 * Return: pointer to the memory area
 */
char *_memset/* fill memory */(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
