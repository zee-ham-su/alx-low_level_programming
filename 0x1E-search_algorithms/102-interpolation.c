#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * using Interpolation search
 * @array: Pointer to the first element of the array
 * @size: array size
 * @value: Value to search for
 * Return: Index where the value is located,
 * or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t start = 0, end = size - 1;
size_t pos;

if (array == NULL)
return (-1);
while (start <= end && value >= array[start] && value <= array[end])
{
pos = start +
(((double)(end - start) / (array[end] - array[start])) *
(value - array[start]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

if (array[pos] < value)
start = pos + 1;
else
end = pos - 1;
}
if (start <= end)
printf("Value checked array[%lu] is out of range\n", pos);
else
printf("Value checked array[%lu] is out of range\n", start);
return (-1);
}
