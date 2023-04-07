#include "main.h"

/**
 *_memcpy - memory from source to destination location
 *@src: pointer to the data source to be copied
 *@dest: pointer to the destination source
 *@n: amount of bytes to be copied
 *Return: return to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d;
char *s;

d = dest;
s = src;

while (n--)
{
*d++ = *s++;
}
return (dest);
}
