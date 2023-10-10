#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - using binary search to search
 * for a value in a sorted array
 * @array: Pointer to the 1st array element
 * @size: number of array elements
 * @value: value of what to search for
 * Return: Index of value in array or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
size_t start = 0, end = size - 1, middle, i;

if (array == NULL)
return (-1);

while (start <= end)
{
printf("Searching in array: ");
for (i = start; i < end; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

middle = (start + end) / 2;
if (array[middle] == value)
return (middle);
if (array[middle] < value)
start = middle + 1;
else
end = middle - 1;
}
return (-1);
}

/**
 * exponential_search - searches for a value in a sorted
 * array using exponential search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;

if (array == NULL || size == 0)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);

return (binary_search(array, bound / 2, bound < size - 1 ? bound : size - 1));
}
