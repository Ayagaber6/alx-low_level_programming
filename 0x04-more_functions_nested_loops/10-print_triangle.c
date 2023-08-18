#include "main.h"
/**
 * main- enrty point
 *
 * Description: print triangle with # character
 * @size: input number
 * Return: void
 */
void print_triangle/*print shape*/(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= size - 1 ; i++)
		{
			_putchar(' ');
			for (j = 1 ; j <= size ; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
