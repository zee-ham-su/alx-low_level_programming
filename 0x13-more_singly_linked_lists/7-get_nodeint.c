#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *curr = head;
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (i < index && curr != NULL)
{
curr = curr->next;
i++;
}

return (curr);
}
