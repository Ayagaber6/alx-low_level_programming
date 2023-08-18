#include "main.h"
/**
 * main- entry poiny
 *
 * Description: print straight line
 *
 * Return: always 0
 */
void print_line(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar( n * '_');
		_putchar('\n');
	}
	return (0);
}
