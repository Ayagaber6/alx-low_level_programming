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
		_putchar(s);
	}
	_putchar('\n');
}
