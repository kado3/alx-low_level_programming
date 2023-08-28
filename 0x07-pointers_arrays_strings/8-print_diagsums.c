#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
int sum_diag1 = 0;
int sum_diag2 = 0;
int row, col;
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (row == col)
sum_diag1 += a[row * size + col];
if (row + col == size - 1)
sum_diag2 += a[row * size + col];
}
}
printf("Sum of diagonal 1: %d\n", sum_diag1);
printf("Sum of diagonal 2: %d\n", sum_diag2);
}
