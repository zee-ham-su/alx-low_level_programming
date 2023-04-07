#include "main.h"
#include <stdio.h>

/**
 *_strncpy - copies a tsring from src to dest, up to n characters
 *@src: pointer to a char
 *@dest: pointer to a char
 *@n: amount of bytes from src
 *Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0';
i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
