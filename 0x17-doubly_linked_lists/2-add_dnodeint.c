#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint - include new node at the start of doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value stored in the new node.
 *
 * Return: address of new element, or NULL if it fails.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *evolve = malloc(sizeof(dlistint_t));

if (evolve == NULL)
return (NULL);
evolve->n = n;
evolve->prev = NULL;
evolve->next = *head;
if (*head != NULL)
(*head)->prev = evolve;
*head = evolve;
return (evolve);
}
