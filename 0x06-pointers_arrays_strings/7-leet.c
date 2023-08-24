#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: Pointer to the input string
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
char leet_replace[] = "aeotlAEOTL";
char leet_encoded[] = "4307104310";
for (int i = 0; s[i] != '\0'; i++)
{
for (int j = 0; leet_replace[j] != '\0'; j++)
{
if (s[i] == leet_replace[j])
{
s[i] = leet_encoded[j];
break;
}
}
}
return s;
}
