#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* Unused parameter */
printf("%d\n", argc - 1);
return (0);
}
