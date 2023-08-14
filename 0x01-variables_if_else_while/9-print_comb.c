#include <stdio.h>
#include <string.h>
/**
 * main- entry point
 *
 * Description: print all possible cominations of single num
 *
 * Return: 0 success
 */
int main(void)
{
	char n;
	char st=", ";

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
		putchar(st);
	}
	putchar ('\n');
	return (0);
}
