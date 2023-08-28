#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the substring of accepted characters
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0' && _strchr(accept, *s) != NULL)
{
count++;
s++;
}
return (count);
}
