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
	int i, len;
	len = 0;
	while(*s != '\0')
	{
		len ++;
		s++;
	}
	for (i = len ; i >= 0 i--)
	{
		_putchar(*s + 0);
	}
	_putchar('\n');
}
