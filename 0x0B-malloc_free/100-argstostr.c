#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *argstostr - Concatenates all the arguments of a program
 *@ac: The number of arguments.
 *@av: The argument vector.
 *Return: Pointer to an array of characters.
*/



char *argstostr(int ac, char **av)
{
char *s;
int i, j, len = 0, k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++;
}

s = malloc((len + 1) * sizeof(char));
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
s[k] = av[i][j];
j++;
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
