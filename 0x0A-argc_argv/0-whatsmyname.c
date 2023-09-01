#include "main.h"
#include <stdio.h>
/**
 * _myname- print its name
 * @argc: input value
 * @argv: input array
 * Return: 0 success
 */
int _myname(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
