#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0') // If all characters in needle match
return (&haystack[i]);
}
return (NULL);
}
