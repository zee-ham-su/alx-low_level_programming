#include "main.h"
#include <stdio.h>

/**
 *_strncat - concat dest and src char data type
 *@dest: pointer to a char
 *@src: pointer to a char
 *@n: bytes used by src
 *Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
