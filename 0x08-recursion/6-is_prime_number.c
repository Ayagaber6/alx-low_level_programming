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
	return (check_num(n, 1));
}
int check_num(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_num(n, i + 1));
}
