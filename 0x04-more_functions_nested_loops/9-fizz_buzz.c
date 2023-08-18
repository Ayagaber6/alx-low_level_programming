#include "main.h"
#include <stdio.h>
/**
 * main-enrty point
 *
 * Description: fizz buzz program
 */
int fizz_buzz/*print fizz if multi 3 and buzz if multi 5 */(void)
{
	int n;
	i
	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0) && (n % 5 ==0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf (" ");
	}
		_putchar('\n');
}
