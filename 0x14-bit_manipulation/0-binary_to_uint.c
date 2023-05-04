#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - creates an unsigned int from a binary number.
 * @b: reference to a string that contains a binary integer
 * Return: unsigned int with decimal value of binsry number,
 * or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int outpt = 0;
int a;
if (b == 0)
{
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
{
return (0);
}
outpt = outpt * 2 + (b[a] - '0');
}
return (outpt);
}
