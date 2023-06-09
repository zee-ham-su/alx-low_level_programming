#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - calculates value of base number raised to a power
 * @y:The exponent value
 * @x: The base number
 * Return: The result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
switch (y)
{
case 0:
return (1);
case 1:
return (x);
default:
if (y < 0)
return (-1);
else
return (x * _pow_recursion(x, y - 1));
}
}
