#include <stdio.h>
#include "main.h"


/**
 * set_bit - sets value of  bit to 1 at a known index
 * @n: pointer to the number
 * @index: bit index to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n | (1UL << index);

return (1);
}
