#include "main.h"
/**
 * is_palindrome- check string is a palidrome or not
 * @s: string pointer
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{       
        int i = 0;
        int n = strlen(*s);

        if (*s[i] == *s[n-1])
        {
                is_palindrome(i + 1, n - 1);
                return (1);
        }
        else
                return (0);
