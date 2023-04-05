#include "main.h"

/**
 * factorial - Compute the factorial of a number
 * @n: numerical value
 *Return: number factorial
 */


int factorial(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
