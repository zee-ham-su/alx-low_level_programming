#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - output the string length
 *@s: string character
 *Return: the string length
 */

int _strlen_recursion(char *s)
{
if (s == NULL || *s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
