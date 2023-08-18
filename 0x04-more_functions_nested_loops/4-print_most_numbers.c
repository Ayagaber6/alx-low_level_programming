#include "main.h"
/**
 * main- enrty point
 *
 * Description: print to num 9 exept 2 and 4
 * 
 * Return: always 0
 */
void print_most_numbers(int n)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar (n + 48);
		}
	}
	_putchar('\n');
}
