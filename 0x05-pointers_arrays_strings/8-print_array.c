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

	for (i = 0 ; i < n ; i++)
	{
		if (a[i] != '\0')
		{
			printf("%d, ", a[i];
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
