#include "3-calc.h"
#include <stdio.h>



/**
 * perform_operation - Performs a mathematical operation on two integers
 * @a: The first integer
 * @b: The second integer
 * @op: The operator to use (+, *, -, %, /)
 *
 * Return: The result of the operation
 */



int perform_operation(int a, int b, char op)
{
switch (op)
{

case '-':
return (a - b);
case '+':
return (a + b);
case '/':
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
case '*':
return (a * b);
case '%':
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
default:
printf("Error\n");
exit(99);
}
}
