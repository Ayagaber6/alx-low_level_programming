#include "main.h"
/**
 * main- entry-point
 *
 * Description: length of a string
 * @s: input character
 * Return: length of string
 */
int _strlen/* length of string*/(char *s)
{
	int length;

	for (length = 0 ; *s != '\0' ; s++)
	{
		length++;
	}
	return (length);
}
