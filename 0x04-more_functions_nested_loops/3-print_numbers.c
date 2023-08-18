#include "main.h"

/**
 * main- entery ponit
 *
 * Description: print num from 1 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + 48);
	}
	_putchar ('\n');
}
