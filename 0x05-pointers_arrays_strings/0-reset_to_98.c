#include "main.h"
/**
 * main- entry point
 *
 * Description: reset value to 98
 * @n: input value
 */
void reset_to_98(int *n)
{
	int *ptr;
	ptr = &n;
	*ptr = 98;

	putchar(*ptr);
}
