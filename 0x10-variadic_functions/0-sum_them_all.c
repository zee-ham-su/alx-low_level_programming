#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters to sum
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */


int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int *argp = (int *)&n;
unsigned int i;

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += *(argp + i);

return (sum);
}
