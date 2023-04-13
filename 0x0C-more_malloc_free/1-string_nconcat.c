#include <stdlib.h>
#include "main.h"
#include <stddef.h>


/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @s1: The first string
 * @s2: The second string to concatenate from
 * @n: The number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


len1 = str_len(s1);
len2 = str_len(s2);


if (n < len2)
p = malloc(sizeof(char) * (len1 + n + 1));
else
p = malloc(sizeof(char) * (len1 + len2 + 1));

if (p == NULL)
return (NULL);

for (i = 0; i < len1; i++)
p[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
p[len1 + j] = s2[j];

p[len1 + j] = '\0';

return (p);
}

/**
 * str_len - Returns the length of a string
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
unsigned int str_len(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
