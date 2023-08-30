#include "main.h"
/**
 * main- entry point
 * Description: return the natural square root of a num
 * @n: input value
 * Return: square root of num
 */
int _sqrt_recursion/*square root*/(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squrt(n));
}
int squrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squrt(n, i + 1));
}
