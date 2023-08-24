#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @s: Pointer to the input string
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32; // Convert lowercase to uppercase ASCII value
}
i++;
}
return s;
}
