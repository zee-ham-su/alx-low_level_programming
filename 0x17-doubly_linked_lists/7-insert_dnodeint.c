#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at specified position
 * @h: pointer to the pointer that points to the list's head.
 * @idx: Index which new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx,
int n)
{
dlistint_t *evolved_node, *up_to_date = *h;
unsigned int mark = 0;

if (*h == NULL || idx == 0)
return (add_dnodeint(h, n));
while (up_to_date != NULL)
{
if (mark >= idx - 1)
break;

up_to_date = up_to_date->next;
mark++;
}
if (up_to_date == NULL)
return (NULL);

evolved_node = malloc(sizeof(dlistint_t));
if (evolved_node == NULL)
return (NULL);

evolved_node->n = n;
evolved_node->prev = up_to_date;
evolved_node->next = up_to_date->next;
if (up_to_date->next != NULL)
{
evolved_node->next = up_to_date->next;
up_to_date->next->prev = evolved_node;
}

up_to_date->next = evolved_node;

return (evolved_node);
}

