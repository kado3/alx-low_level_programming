#include "main.h"
#include <stdio.h>
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to a string
 * @return: Length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to a string
 */
void print_rev(char *s)
{
    int length = _strlen(s);

    for (int i = length - 1; i >= 0; i--)
    {
    putchar(s[i]);
    }

    putchar('\n');
}       
