#include "main.h"
#include <math.h>
int check_square(int n, int i);
/**
 * main- entry point
 * Description: return the natural square root of a num
 * @n: input value
 * Return: square root of num
 */
int _sqrt_recursion/*square root*/(int n)
{
	return (check_square(n, 1));
}
/**
 * check_square- return square root
 * @n: input value
 * @i: square root
 * Return: square
 */
int check_square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (check_square(n, i + 1));
	else
		return (-1);
}
