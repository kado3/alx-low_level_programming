#include "main.h"
/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: A pointer to the number to modify.
* @index: The index of the bit to set (0-based).
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8)) // Ensure index is within bounds
return (-1);
*n |= (1 << index); // Set the bit at the specified index to 1
return (1);
}
