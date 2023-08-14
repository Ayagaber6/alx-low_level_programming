#include <stdio.h>
/**
 * main- entry point
 *
 * Description: different combinations of two digits
 *
 * Return: 0 success
 */
int main(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			if (x != y)
			{
				putchar (y + '0');
				putchar (x + '0');
				/*putchar(',');
				putchar(' ');*/
			}
			else
			{
				putchar(',');
				putchar(' ');
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
