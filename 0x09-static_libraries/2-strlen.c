#include "main.h"

/**
 * _strlen - length of the string
 * @s: input string
 *Return: return string length
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
