#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of doubly linked list.
 * @head: Pointer to the head of list.
 * @index: Index of a  node to fetch.
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node_count = 0;

do {
if (head == NULL)
return (NULL);

if (node_count == index)
return (head);

head = head->next;
node_count++;
} while (head != NULL);

return (NULL);
}
