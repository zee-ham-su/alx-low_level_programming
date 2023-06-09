#include <stdio.h>
#include "main.h"

/**
 * power_operation - Calculates the natural square root of a number
 * @n: The number to find the square root of
 * @i: An iterator used
 * Return: The natural square root of n or -1
 */

int power_operation(int n, int i)
{

if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (power_operation(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 *@n: The number to find the square root of
 *Return: the natural square root
 */


int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (power_operation(n, 0));
}
