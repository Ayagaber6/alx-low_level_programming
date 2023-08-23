#include "main.h"
/**
 * main- entry point
 *
 * Description: print every other char
 * @str: input character
 */
void puts2/*print even numb*/(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; i++)
	{
		if (i == 0)
		{
			_putchar(str[0]);
		}
		else if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
