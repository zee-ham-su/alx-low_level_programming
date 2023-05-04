#include <stdio.h>
#include "main.h"


/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at the given index or -1 if an error occurred
 */


int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int visor = 1;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

visor <<= index;
return ((visor & n) != 0);
}
