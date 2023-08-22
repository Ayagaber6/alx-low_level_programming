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

	for (len = 0 ; *s != '\0' ; s++)
        {
                len++;
        }

	for (i = len ; i = 0 i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
