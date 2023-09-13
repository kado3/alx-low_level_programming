#include "function_pointers.h"
#include <stddef.h> // for size_t
/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: A function pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
