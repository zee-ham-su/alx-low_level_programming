#include <stdio.h>
#include "main.h"


/**
 * print_binary - Provide the binary representation of a number.
 * @n: number to be printed
 * return: void
 */


void print_binary(unsigned long int n)
{
unsigned long int visor = 1;

printf("Binary: ");

while ((n & (~0 << visor)) != 0)
visor++;
while (visor > 0)
{
visor--;
if ((n & (1 << visor)) != 0)
printf("1");
else
printf("0");
}

printf("\n");
}
