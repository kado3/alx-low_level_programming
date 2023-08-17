#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
/**
 * print_triangle - Prints a right-angled triangle of '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
