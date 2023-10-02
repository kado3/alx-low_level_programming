#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using the provided printing function.
 * @name: The name to print.
 * @f: A function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
