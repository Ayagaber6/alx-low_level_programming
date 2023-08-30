#include "main.h"
/**
 * main- entry point
 *
 * Description: power of number
 * @x: input value
 * @y: input power
 * Return: power value
 */
int _pow_recursion/*power of an number*/(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return(x);
	else
		return (x* _pow_recursion(x, y - 1));
}
