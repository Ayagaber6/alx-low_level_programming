#include "main.h"
/**
 * main- entry point
 *
 * Description: print reverse string
 * @s: input character
 */
void rev_string/*reverse string*/ (char *s)    
{
	int i, length;

	length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	for (i = (length - 1) ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
