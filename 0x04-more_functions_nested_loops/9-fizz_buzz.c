#include <stdio.h>
/**
 * main-enrty point
 *
 * Description: fizz buzz program
 * Return: always 0
 */
int main/*print fizz if multi 3 and buzz if multi 5 */(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
		printf("\n");
		return (0);
}
