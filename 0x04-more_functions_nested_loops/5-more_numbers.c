#include "main.h"
/*i*
 * Description: print num from 0 to 14 - 10 times
 * @i more_numbers - counter
 * @n more_number - input number
 */
void more_numbers/*print numbers 10 times*/(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
