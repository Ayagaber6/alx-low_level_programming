#include <stdio.h>
/**
 * main- print the number of arguments
 * @argc: input value
 * @argv: input array
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
