#include "main.h"
/**
 * main- entry point
 *
 * Description: swap tow integers
 * @a: input value
 * @b: input value
 */
void swap_int/*swap 2 integer value*/ (int *a, int *b)
{
	putchar("a= %d, b= %d", a, b);
	putchar('\n');
	*a = b;
	*b = a;
	putchar("a= %d, b= %d", a, b);
}
