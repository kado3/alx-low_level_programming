#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator as a string.
 *
 * Return: Pointer to the function that corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", add},
{"-", sub},
{"*", mul},
{"/", divi},
{"%", mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
