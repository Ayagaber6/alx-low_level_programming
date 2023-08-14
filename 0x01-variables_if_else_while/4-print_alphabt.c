#include <stdio.h>
/**
 * main- entry point
 *
 * Description: alphabet in lowercase except q and e
 *
 * Return: 0 that mean success
 */
int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
