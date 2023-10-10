#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - searches for a value in a skip list
 * @list: pointer to the head of the skip list to traverse
 * @value: value to search for
 * Return: pointer to the first node where value is located,
 * or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current = NULL, *express = NULL, *stop = NULL;

if (!list)
return (NULL);
current = list;
express = list->express;

while (express)
{
printf("Value checked at index [%lu] = [%i]\n",
express->index, express->n);

if (express->n >= value)
break;

current = express;
express = express->express;
}

stop = express ? express : current;

printf("Value found between indexes [%lu] and [%lu]\n",
current->index, stop->index);

while (current != stop && current->n < value)
{
printf("Value checked at index [%lu] = [%i]\n",
current->index, current->n);
current = current->next;
}

printf("Value checked at index [%lu] = [%i]\n",
current->index, current->n);

return (current == stop ? NULL : current);
}
