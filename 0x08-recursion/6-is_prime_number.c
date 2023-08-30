#include "main.h"
/**
 * main- entry point
 *
 * Description: check input
 * @n: input value
 * Return: 0 success
 */
int is_prime_number/*check number*/(int n)
{
	return (check(n, 2));
}
int check(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check(n, i + 1));
}
