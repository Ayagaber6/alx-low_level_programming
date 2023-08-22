#include "main.h"
/**
 * main- entry point
 *
 * Description: print array integer elements
 * @a: pointer
 * @n: input element
 */
void print_array/*print elements of an array*/(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1)  ; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	_putchar('\n');
}
