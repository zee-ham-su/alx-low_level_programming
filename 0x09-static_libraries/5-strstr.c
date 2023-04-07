#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strstr -locate a string
 *@needle: the substring
 *@haystack: the whole string
 *Return: return pointer to the beginning of substring location or
 *NULL: if nothing is located.
 */


char *_strstr(char *haystack, char *needle)
{
char *p;
size_t needle_len = strlen(needle);
for (p = haystack; *p; p++)
{
if (strncmp(p, needle, needle_len) == 0)
{
return (p);
}
}
return (NULL);
}
