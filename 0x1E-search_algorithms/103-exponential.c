#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_help - searches for a value in an array using binary search
 * @array: pointer to the first element of the array
 * @low: starting index of the array
 * @high: ending index of the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search_help(int *array, size_t low, size_t high, int value)
{
size_t mid;
size_t i;

while (low <= high)
{
mid = (low + high) / 2;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
else
printf("\n");
}

if (array[mid] == value)
return (mid);

if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
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
size_t range = 1;

if (array == NULL || size == 0)
return (-1);

while (range < size && array[range] < value)
{
printf("Value checked array[%lu] = [%d]\n", range, array[range]);
range *= 2;
}
printf("Value found between indexes [%lu] and [%lu]\n", range / 2, range);

return (binary_search_help(
array,
range / 2,
range < size - 1 ? range : size - 1,
value));
}
