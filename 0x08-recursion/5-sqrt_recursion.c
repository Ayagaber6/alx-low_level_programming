#include "main.h"
/**
 * main- entry point
 * Description: return the natural square root of a num
 * @n: input value
 * Return: square root of num
 */
int _sqrt_recursion/*square root*/(int n)
{
	return (sqrt(n, 1));
}
/**
 * sqrt- return square root
 * @n: input value
 * @i: square root
 * Return: square
 */
int sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqrt(n, i + 1));
	else
		return (-1);
}
