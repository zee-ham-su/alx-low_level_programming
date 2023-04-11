#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Allocate and initialize an array of characters.
 *
 * @size: Number of characters to allocate.
 * @c: Value to initialize each element with.
 *
 * Return: Pointer to the allocated array, or NULL on failure.
 */


char *create_array(unsigned int size, char c)
{
char *array = malloc(size * sizeof(char));
unsigned int i = 0;

if (array == NULL)
return (NULL);

if (size == 0)
return (NULL);

do {
array[i] = c;
i++;
} while (i < size);

return (array);
}
