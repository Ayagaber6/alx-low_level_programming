#include "main.h"
/**
 * main- entry point
 *
 * Description: return factorial of an number
 * @n: input number
 * Return: fact of num
 */
int factorial/*fact*/(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
