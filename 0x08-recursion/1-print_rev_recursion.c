#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in a reverse order
 * @s: string character
 *return: zilch
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
