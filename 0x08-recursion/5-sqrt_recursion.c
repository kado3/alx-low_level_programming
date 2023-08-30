#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to calculate the square root
 * Return: Natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - Helper function to calculate the natural square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 * Return: Natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int guess)
{
if (n < 0)
{
return (-1);
}
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (sqrt_helper(n, guess + 1));
}
