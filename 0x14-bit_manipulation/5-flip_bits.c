#include <stdio.h>
#include "main.h"

/**
 * flip_bits - tally the number of bits to convert
 * to acquire from one number to another number
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to convert
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_value = n ^ m;
unsigned int total = 0;
while (!(xor_value == 0))
{
xor_value &= (xor_value - 1);

total++;
}
return (total);
}
