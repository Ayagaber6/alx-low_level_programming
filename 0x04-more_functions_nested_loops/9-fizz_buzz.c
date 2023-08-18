#include "main.h"
#include <stdio.h>
/**
 * main-enrty point
 *
 * Description: fizz buzz program
 * @n: input number
 */
int fizz_buzz/*print fizz if multi 3 and buzz if multi 5 */(int n)
{
	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3)
		{
			printf("Fizz");
			_putchar(' ');
		}
		else if (n % 5)
		{
			printf("Buzz");
			_putchar(' ');
		}
		else
		{
			printf("%d", n);
			_putchar(' ');
	}
		_putchar('\n');
}
