#include "main.h"
#include <math.h>
int _sqrt(int n, int i);
/**
 * main- entry point
 * Description: return the natural square root of a num
 * @n: input value
 * Return: square root of num
 */
int _sqrt_recursion/*square root*/(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt- return square root
 * @n: input value
 * @i: square root
 * Return: square
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
