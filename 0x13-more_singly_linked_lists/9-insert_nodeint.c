#include <stdlib.h>
#include <stdio.h>
#include "lists.h"




listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
listint_t **curr_node = head;
listint_t *latest_node = malloc(sizeof(listint_t));

while (*curr_node && idx > 0)
{
curr_node = &(*curr_node)->next;
idx--;
}
if (idx > 0)
{
return (NULL);
}

if (!latest_node)
{
return (NULL);
}
latest_node->n = n;
latest_node->next = *curr_node;
*curr_node = latest_node;
return (latest_node);
}
