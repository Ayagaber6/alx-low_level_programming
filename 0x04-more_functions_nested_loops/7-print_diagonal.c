#include "main.h"
/**
 * main- entry point
 * Description: draw diagonal
 * @n: input number
 * Return: void
 */
void print_diagonal/*draw diagonal*/(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
