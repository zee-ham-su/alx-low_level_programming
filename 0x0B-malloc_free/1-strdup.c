#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - Duplicates a string by allocating memory for a new copy
 * @str: The input string to be duplicated
 *
 *Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
int i;
char *new_str;
int len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;
new_str = malloc(len + 1);


if (new_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
new_str[i] = str[i];
return (new_str);
}
