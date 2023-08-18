#include "main.h"
/**
 * main- entry point
 *
 * Description: drwa square
 * @size: input number
 */
void print_square/*draw square using '#'*/(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
