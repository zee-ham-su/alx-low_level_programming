#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - append new node at end of a doubly linked list.
 * @head: Pointer to a pointer to  head of linked list.
 * @n: Value to be stored in the new node.
 * Return: address of a new element, or NULL if it failed.
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *evolved_node = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

if (evolved_node == NULL)
return (NULL);
evolved_node->n = n;
evolved_node->next = NULL;
if (*head == NULL)
{
evolved_node->prev = NULL;
*head = evolved_node;
}
else
{

while (!(tmp->next == NULL))
tmp = tmp->next;
tmp->next = evolved_node;
evolved_node->prev = tmp;
}
return (evolved_node);
}
