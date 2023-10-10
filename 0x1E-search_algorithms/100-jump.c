#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted
 * array using Jump search.
 *
 * @array: Pointer to the first element of the array.
 * @size: array size.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 *         or if the array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
int step, jump, prev, current;

if (array == NULL || size == 0)
return (-1);

jump = (int)sqrt((double)size);
step = 0;
prev = current = 0;

do {
printf("Value checked array[%d] = [%d]\n", current, array[current]);

if (value == array[current])
return (current);
step++;
prev = current;
current = step *jump;

} while (current < (int)size && array[current] < value);

printf("Value found between indexes [%d] and [%d]\n", prev, current);

while (prev <= current && prev < (int)size)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
prev++;
}

return (-1);
}
