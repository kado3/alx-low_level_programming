#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* is_digit - Check if a string is composed of digits
* @str: The string to check
*
* Return: 1 if composed of digits, 0 otherwise
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
/* Convert command-line arguments to integers and multiply */
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return (0);
}
