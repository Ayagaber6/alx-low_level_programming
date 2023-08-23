#include "main.h"
/**
 * main- entry point
 *
 * Description: print every other char
 * @str: input character
 */
void puts_half/*print last half of srting*/(char *str)
{
	int i, length, mid;

	length = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		length++;
	}
	mid = (length - 1) / 2;
	for (i = mid + 1 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
