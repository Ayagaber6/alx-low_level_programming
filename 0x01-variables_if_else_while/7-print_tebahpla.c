#include <stdio.h>
/**
 * main- entry point
 *
 * Description: reverse lowercase alphabet
 *
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar ('\n');
	return (0);
}
