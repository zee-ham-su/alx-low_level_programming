#include "main.h"
#include <stdlib.h>


/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: pointer of an array of chars
 */


char *str_concat(char *s1, char *s2)
{
char *new_str;
int i = 0, j = 0, len1 = 0, len2 = 0;

if (s1 != NULL)
while (s1[len1])
len1++;

if (s2 != NULL)
while (s2[len2])
len2++;

new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
return (NULL);

while (i < len1)
{
new_str[i] = s1[i];
i++;
}
while (j < len2)
{
new_str[i] = s2[j];
i++;
j++;
}

new_str[len1 + len2] = '\0';
return (new_str);
}
