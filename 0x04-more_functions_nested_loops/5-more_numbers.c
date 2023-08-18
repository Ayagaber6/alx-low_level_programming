#include "main.h"
/**
 * main- enrty point
 *
 * Description: print num from 0 to 14 - 10 times
 * @i more_numbers: counter
 * @n more_number: inputer number
 *
 * Return: always 0
 */
void more_numbers/*print numbers 10 times*/(void)
{
	int i, n;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (n = 0 ; i <= 14 ; i++)
		{
			_putchar(n + 48);
		}
		_putchar('\n');
	}
	return (0);
}
