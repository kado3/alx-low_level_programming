#include "main.h"
#include <stdbool.h

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 * Return: true if c is a separator, false otherwise
 */
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
for (int i = 0; separators[i]; i++)
{
if (separators[i] == c)
return true;
}
return false;
}
/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to the input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;
bool new_word = true; // Indicates if the current character is the start of a new word
while (s[i] != '\0')
{
if (new_word && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= -32;
}
new_word = is_separator(s[i]); // Check if current character is a separator
i++;
}
return s;
}
