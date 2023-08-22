#include "main.h"
/**
 * main- entry point
 *
 * Description: print string
 * @str: input character
 * Return: string
 */
void _puts/*print string*/(char *str)
{
	int i;

	for( i = 0 ; i != '\0' ; i++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
