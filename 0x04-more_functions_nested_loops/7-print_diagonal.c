#include "main.h"
/**
 * main- entry point
 * Description: draw diagonal
 * @n: input number
 */
void print_diagonal/*draw diagonal*/(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
