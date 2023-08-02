#include "main.h"

/**
* is_prime_number_helper - helper function to check if a number is prime
* @n: the number to check
* @i: the current possible divisor
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number_helper(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (is_prime_number_helper(n, i + 1));
}

/**
* is_prime_number - returns 1 if the input is a prime, otherwise return 0
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_number_helper(n, 2));
}