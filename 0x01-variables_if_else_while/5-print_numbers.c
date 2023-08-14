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

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	putchar ('\n');
	return (0);
}
