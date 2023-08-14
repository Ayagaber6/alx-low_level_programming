#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * Description: The last digit
 *
 * Return: 0 that mean success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n.length - 1 > 5)
	{
	printf("%d is %d and is greater than 5\n", n, n.length-1);
	}
	else if (n.length-1 < 6)
	{
	printf("%d is %d and is less than 6 and not 0\n", n, n.length-1);
	}
	else
	{
	printf("%d is %d and is 0\n", n, n.length-1);
	}	
	return (0);
}
