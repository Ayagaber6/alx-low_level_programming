#include "main.h"
/**
 * main- entry point
 *
 * Description: print reverse string
 * @s: input character
 * Return: string
 */
void print_rev/*print reverse striong*/(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; i++)
		*s++
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
