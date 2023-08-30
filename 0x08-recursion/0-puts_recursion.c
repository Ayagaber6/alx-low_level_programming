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
		_puts_recursion(s);
	}
	return (s);
	_putchar('\n');
}
