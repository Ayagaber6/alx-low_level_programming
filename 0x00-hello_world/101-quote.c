#include <stdio.h>
/**
 * main- entery point
 *
 * Description: program print string without printf or puts functions
 *
 * Return: 1 error
 */
int main(void)
{	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, st, 57);
	return (1);
}
