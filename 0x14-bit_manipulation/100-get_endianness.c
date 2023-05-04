#include <stdio.h>
#include "main.h"


/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
short u = 1;
char *w = (char *)&u;
return ((*w == 1));
}
