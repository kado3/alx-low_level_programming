#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to a string
 * @return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
/**
 * rev_string - Reverses the characters in a string
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
int length = _strlen(s);
char temp;
for (int i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
