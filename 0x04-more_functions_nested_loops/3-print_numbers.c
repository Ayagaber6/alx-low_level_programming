#include "main.h"

/**
 * main- entery ponit
 *
 * Description: print num from 1 to 9
 *
 * Return: void
 */
void print_numbers/*function print num*/(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + 48);
	}
	_putchar ('\n');
}
