#include "main.h"
/**
 * main- entry poiny
 *
 * Description: print straight line
 * @n: input number
 */
void print_line/*print line using _*/(int n)
{
	int n;

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
	return (0);
}
