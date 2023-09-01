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
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
