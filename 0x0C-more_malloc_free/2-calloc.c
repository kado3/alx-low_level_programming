#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory (initialized to zero)
 *         NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
// Initialize memory to zero
for (unsigned int i = 0; i < total_size; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
