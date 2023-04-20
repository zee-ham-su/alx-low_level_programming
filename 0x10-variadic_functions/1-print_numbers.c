#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to print between numbers
 * @n: the number of integers passed to the function
 * @...: the integers to print
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
int *argp = (int *)&n;
unsigned int i;

for (i = 0; i < n; i++)
{
printf("%d", *(argp + i));

if (separator != NULL && i != n - 1)
printf("%s", separator);
}

printf("\n");
}
