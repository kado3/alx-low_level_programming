#include "main.h"
/**
 * is_prime_number - Checks if the input integer is a prime number
 * @n: The integer to be checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return 0;
}
return check_prime(n, 2);
}
/**
 * check_prime - Recursive function to check if n is prime
 * @n: The integer to be checked
 * @divisor: The divisor to check divisibility with
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
if (divisor == n)
{
return 1;
}
if (n % divisor == 0)
{
return 0; 
}
return check_prime(n, divisor + 1);
}
