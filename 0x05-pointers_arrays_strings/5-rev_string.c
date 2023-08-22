#include "main.h"
/**
 * main- entry point
 *
 * Description: print reverse string
 * @s: input character
 */
void rev_string/*reverse string*/(char *s)
{
	int i, len;

	for (len = 0 ; *s != '\0' ; s++)
	{
		len++;
	}

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(*s);
	}
}
