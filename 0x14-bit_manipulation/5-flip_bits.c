#include "main.h"
/**
* flip_bits - Returns the number of bits needed to flip to get from n to m.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m; // XOR of n and m
unsigned int count = 0;
while (diff > 0)
{
count += diff & 1; // Check the least significant bit
diff >>= 1; // Right shift to check the next bit
}
return (count);
}
