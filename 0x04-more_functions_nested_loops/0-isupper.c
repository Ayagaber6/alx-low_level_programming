#include "main.h"
/**
 * main- entry point
 *
 * Description: upeercase or not
 *
 * Return: 1 if upper else 0
 */
int _isupper/*check uppercase or lowercase*/(int c/*input character*/)
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
