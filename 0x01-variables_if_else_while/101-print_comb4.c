#include <stdio.h>
/**
 * main-entry point
 *
 * Description: possible different combinations of three digits
 *
 * Return: 0 success
 */
int main(void)
{
	int x, y, z;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			for (z = 0 ; z <= 9 ; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar(z + '0');
					putchar(x + '0');
					putchar(y + '0');
					putchar(',');
					putchar(' ');
				}
				else
				{
					break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
