#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Pointer to a string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n'); // Print a new line when the end of the string is reached
return;
}
putchar(*s); 
_puts_recursion(s + 1); 
}
