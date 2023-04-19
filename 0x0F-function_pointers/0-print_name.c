#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - prints a name using a function pointer.
 * @name: pointer to the name to be printed.
 * @printer: pointer to a function that prints a string.
 *
 * Return: void.
 */

typedef void (*name_printer_t)(char *);


void print_name(char *name, name_printer_t printer)
{
if (name && printer)
printer(name);
}
