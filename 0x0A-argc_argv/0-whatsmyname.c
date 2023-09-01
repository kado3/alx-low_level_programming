#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
_puts(argv[0]);
return (0);
}
return (1);
}
