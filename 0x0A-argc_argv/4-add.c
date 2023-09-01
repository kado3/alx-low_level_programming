#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
