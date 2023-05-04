#include <stdio.h>
#include "main.h"


/**
 * clear_bit - pegs the worth of a bit to 0 at a given index
 * @n: parameter
 * @index: bit index to be set
 * Return: 1 if run, -1 if an error occurs
 */


int clear_bit(unsigned long int *n, unsigned int index)

{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = (*n ^ (1UL << index)) & ~(1UL << index);


return (1);
}

