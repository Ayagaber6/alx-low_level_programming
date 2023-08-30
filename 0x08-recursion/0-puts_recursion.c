#include "main.h"

/**
 * main- entry point
 *
 * Description: print string
 * @s: string pointer
 */
void _puts_recursion/*print string*/(char *s)
{
	if  (*s != '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s);
		_puts_recursion(s + 1);
	}
}
