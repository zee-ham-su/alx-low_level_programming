#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: pointer to the array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of first element where cmp function does not return 0,
 *         or -1 if no element matches or size <= 0
 */



int int_index(int *array, int size, int (*cmp)(int))
{
int index = -1;
int i = 0;
 
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

while (i < size)
{
if (cmp(array[i]))
{
index = i;
break;
}
i++;
}

return (index);
}
