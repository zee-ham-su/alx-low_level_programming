#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strchr - finds a character in string
 *@c: character
 *@s: string character
 *Return: return pointer to first occurrence of c character
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
++s;
}
return (NULL);
}
