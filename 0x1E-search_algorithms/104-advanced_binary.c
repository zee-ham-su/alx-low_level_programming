#include "search_algos.h"
#include <stdio.h>

/**
 * custom_search - Searches for a value in a sorted
 * array using binary search.
 * @arr: Pointer to the first element of the array.
 * @sz: Size of the array.
 * @val: Value to search for.
 * Return: Index of the value in the array. If not found, returns -1.
 */

int custom_search(int *arr, size_t sz, int val)
{
size_t hlf = sz / 2;
size_t i;

if (!arr || !sz)
return (-1);

printf("Searching in array");

for (i = 0; i < sz; i++)
printf("%s %d", (i == 0) ? ":" : ",", arr[i]);

printf("\n");

if (hlf && !(sz % 2))
hlf--;

if (arr[hlf] == val)
{
if (hlf > 0)
return (custom_search(arr, hlf + 1, val));
return ((int)hlf);
}
if (val < arr[hlf])
return (custom_search(arr, hlf + 1, val));
hlf++;
return (custom_search(arr + hlf, sz - hlf, val) + hlf);
}

/**
 * advanced_binary - Searches for a value in a sorted
 * array using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value in the array. If not found, returns -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
int position;

position = custom_search(array, size, value);
return ((position >= 0 && array[position] != value) ? -1 : position);
}
