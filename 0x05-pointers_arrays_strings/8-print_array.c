#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to an array of integers
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
int i; // Declare the loop variable outside the loop
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
