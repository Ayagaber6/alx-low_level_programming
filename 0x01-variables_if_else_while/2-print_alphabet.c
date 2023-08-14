#include <stdio.h>
/**
 * main-entry point
 *
 * Description: program print alphabet in lowercase
 *
 * Return: 0 that mean success
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
	return (0);
}
