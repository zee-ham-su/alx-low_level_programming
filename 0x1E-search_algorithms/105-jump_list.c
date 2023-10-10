#include "search_algos.h"
#include <stdio.h>

/**
 *jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 * @list: input list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value, or -1 if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, step_size;
listint_t *node, *jump;

if (!list || !size)
return (NULL);

step = 0;
step_size = sqrt(size);
node = jump = list;

while (jump->index + 1 < size && jump->n < value)
{
node = jump;
for (step += step_size; jump->index < step; jump = jump->next)
{
if (jump->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jump->index);

while (node->index < jump->index && node->n < value)
{
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
node = node->next;
}

printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

if (node->n == value)
return (node);
else
return (NULL);

}
