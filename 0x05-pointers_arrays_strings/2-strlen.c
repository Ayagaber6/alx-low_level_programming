#include "main.h"
/**
 * main- entry-point
 *
 * Description: length of a string
 * @s: input character
 */
int _strlen/* length of string*/(char *s)
{
	int length;
	length = 0;

	while (*s != '\0')
	{
		s++;
	}
	do {
		length++;
	}
	return (length);
}
