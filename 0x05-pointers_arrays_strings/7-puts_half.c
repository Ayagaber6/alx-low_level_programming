#include "main.h"
/**
 * main- entry point
 *
 * Description: print every other char
 * @str: input character
 */
void puts_half/*print last half of srting*/(char *str)
{
	int i, length,  mid, lower, upper;

	length = 0;

	for (i = 0 ; *str != '\0' ; i++)
	{
		length++;
	}
	mid = length / 2;
	for (lower = mid + 1 ; lower != '\0' ; lower++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
