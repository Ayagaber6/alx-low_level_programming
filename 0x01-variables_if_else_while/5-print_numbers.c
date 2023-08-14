#include <stdio.h>
/**
 * main- entry point
 *
 * Description: program that prints all single digit numbers of base 10
 *
 * Return: 0 mean success
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		if (i%2)
		{
			continue;
		}
		else 
		{
			printf("%d \n", i);
		}
	}
	return (0);
}
