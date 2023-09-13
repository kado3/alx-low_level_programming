#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return i;
}
}
}
return (-1);
}
