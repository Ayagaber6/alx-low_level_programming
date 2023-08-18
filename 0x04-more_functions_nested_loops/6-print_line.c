#include "main.h"
/**
 * main- entry poiny
 *
 * Description: print straight line
 * @n: input number
 * @i more_numbers - counter
 */
void print_line/*print line using _*/(int n)
{
	int i, n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
