#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: chaeck if input digit or otherwise
 * @c: input character
 * Return: 1 if digi else 0
 */
int _isdigit/*function return digit or alphabet*/(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
