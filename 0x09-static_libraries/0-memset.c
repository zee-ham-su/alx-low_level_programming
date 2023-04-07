#include "main.h"


/**
 *_memset - fills first bytes memory area pointed to by s with constant byte
 *@b:constant byte.
 *@n: bytes to be filled.
 *@s: area of memory.
 *Return: the pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
do {
*p++ = b;
} while (--n > 0);
return (s);
}
