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
	int length;

        for (length = 0 ; *s != '\0' ; s++)
        {
                length++;
        }
	for (i = (length - 1) ; i >= 0 ; i--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
