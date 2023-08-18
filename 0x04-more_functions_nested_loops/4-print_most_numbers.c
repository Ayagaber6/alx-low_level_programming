#include "main.h"
/**
 * Description: print to num 9 exept 2 and 4
 */
void print_most_numbers/*print number exept 2 numbers*/(void)
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
