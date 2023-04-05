#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - checks if 'n' is a prime number.
 * @n: input number.
 * @i : an iter value
 * Return: 1 if true, 0 if false.
 */


int is_prime_helper(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if 'n' is a prime number.
 * @n: input number.
 * Return: 1 if true, 0 if false.
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}
