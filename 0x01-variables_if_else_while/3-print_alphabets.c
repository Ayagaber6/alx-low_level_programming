#include <stdio.h>
/**
 * main- entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: 0 mean success
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
    {
        putchar(x);
    }
	for(int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
	return (0);
}
