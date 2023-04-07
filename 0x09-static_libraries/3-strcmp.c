#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compares two strings
 *@s1: string one
 *@s2: string two
 *Return: return 0 if the strings are the same and other if not 0
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}
