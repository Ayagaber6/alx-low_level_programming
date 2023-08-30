#include "main.h"
/**
 * main- entry point
 *
 * Description: print string in reverse
 * @s: string pointer
 */
void _print_rev_recursion/*print reverse string*/(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar(0);
}
