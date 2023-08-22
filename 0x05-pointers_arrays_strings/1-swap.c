#include "main.h"
/**
 * main- entry point
 *
 * Description: swap tow integers
 * @a: input value
 * @b: input value
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
