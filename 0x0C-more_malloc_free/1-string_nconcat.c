#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (i = 0; i < n; i++)
result[len1 + i] = s2[i];
result[len1 + n] = '\0';
return (result);
}
