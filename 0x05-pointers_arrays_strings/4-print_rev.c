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
	int i, length;

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
