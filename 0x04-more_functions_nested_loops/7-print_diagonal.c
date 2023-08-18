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

		for (i = 1 ; i <= n ; i++)
		{
			for (j = 0 ; j < n ; i++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
