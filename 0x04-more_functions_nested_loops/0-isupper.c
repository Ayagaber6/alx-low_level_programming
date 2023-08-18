#include "main.h"
/**
 * main- entry point
 *
 * Description: upeercase or not
 * @c: input character
 *
 * Return: 1 if upper else 0
 */
int _isupper/*check char is upper or lower*/(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
