#include <stdlib.h>
#include "lists.h"



/**
 * delete_dnodeint_at_index - Deletes node in a  given position
 * @head: Pointer to a pointer to head list.
 * @index: Index of the node to be deleted.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *up_to_date = *head;
unsigned int mark = 0;
if (*head == NULL)
return (-1);

if (index == 0)
{
if ((*head)->next != NULL)
{
(*head)->next->prev = NULL;
}
*head = (*head)->next;
free(up_to_date);
return (1);
}

for (mark = 0; up_to_date != NULL; mark++)
{
if (mark >= index)
break;
up_to_date = up_to_date->next;
}

if (up_to_date == NULL)
return (-1);

up_to_date->prev->next = up_to_date->next;
if (up_to_date->next != NULL)
up_to_date->next->prev = up_to_date->prev;
free(up_to_date);

return (1);
}
