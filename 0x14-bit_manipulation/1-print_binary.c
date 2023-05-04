#include <stdio.h>
#include "main.h"


/**
 * print_binary - Provide the binary representation of a number.
 * @n: number to be printed
 * return: void
 */


void print_binary(unsigned long int n)
{
unsigned long int tally = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (1UL * (1UL << tally) <= n)
{
tally++;
}
tally--;
while (tally + 1 > 0)
{
if ((n >> tally) &1)
{
printf("1");
}
else
{
printf("0");
}
tally--;
}
printf("\n");
}
