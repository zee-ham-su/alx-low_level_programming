#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t **rear = head;
while (*rear != NULL)
rear = &(*rear)->next;


*rear = malloc(sizeof(listint_t));

if (*rear == NULL)
return (NULL);

(*rear)->n = n;
(*rear)->next = NULL;

return (*rear);
}
