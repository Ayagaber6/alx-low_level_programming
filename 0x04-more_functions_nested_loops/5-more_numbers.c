#include "main.h"
/*i*
 * Description: print num from 0 to 14 - 10 times
 * @i more_numbers - counter
 * @n more_number - input number
 */
void more_numbers/*print numbers 10 times*/(void)
{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
			if (i > 9)
			{
				_putchar('1' + j % 10 + '0');
			}
			else
			{
			_putchar(n + 48);
			}
		_putchar('\n');
	}
}
