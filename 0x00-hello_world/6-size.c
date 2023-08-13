#include <stdio.h>
/*
 * main- entery point
 *
 * Descritption: program that prints the size of various types on the computer
 *
 * Return: 0 success
 */
int main(void)
{
	printf("size of a char: %ld byte(s)",sizeof(char));
	printf("size of an int: %ld byte(s)",sizeof(int));
	printf("size of a long int: %ld byte(s)",sizeof(long int));
	printf("size of a long long int: %ld byte(s)",sizeof(long long int));
	printf"size of a float: %ld byte(s)",sizeof(float));
	return (0);
}
