#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int len = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup_str = malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}
