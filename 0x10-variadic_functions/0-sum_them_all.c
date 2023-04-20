#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the parameters numbers
 * @...: the parameters to sum
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */


int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list valist;
unsigned int i;
va_start(valist, n);

for (i = 0; i < n; i++)
sum += va_arg(valist, int);

if (n == 0)
return (0);
va_end(valist);

return (sum);
}
