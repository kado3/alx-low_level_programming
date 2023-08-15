#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
_putchar('0');
else
{
int result = i * j;
if (result < 10)
_putchar(' ');
else
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
