#include "main.h"
/**
 * main- entry point
 *
 * Description: print reverse string
 * @s: input character
 */
void rev_string/*print reverse string*/(char *s)
{
	int i;

	for (i = 10 ; i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

