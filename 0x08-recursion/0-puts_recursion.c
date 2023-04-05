#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: a string to be printed
 *Return - return
 */

void _puts_recursion(char *s)
{
if (s == NULL)
return;
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
