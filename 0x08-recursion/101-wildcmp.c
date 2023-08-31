#include "main.h"
/**
 * wildcmp- compares two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (1);
	}
	else
		return (0);
}
