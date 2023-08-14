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
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n+ '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar ('\n');
	return (0);
}
