#include "main.h"
/**
 * main- entry point
 * Description: return the natural square root of a num
 * @n: input value
 * Return: square root of num
 */
int _sqrt_recursion/*square root*/(int n)
{
	return (squrt(n, 1));
}
int squrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if
		return (squrt(n, i + 1));
	else
		return (-1);
}
