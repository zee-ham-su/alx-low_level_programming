#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @func: pointer to a function that takes an integer argument and returns void
 *
 * Return: void
 */

typedef void (*int_func_t)(int);


void array_iterator(int *array, size_t size, int_func_t func)
{

size_t i;
if (array && func)
{
for (i = 0; i < size; i++)
{
func(array[i]);
}
}
}
