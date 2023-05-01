#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to the head of the listint_t list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *rear = *head;
listint_t *curr = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

for (i = 0; i < index && curr != NULL; i++)
{
rear = curr;
curr = curr->next;
}

if (curr == NULL)
return (-1);

rear->next = curr->next;
if (curr == *head)
*head = curr->next;
free(curr);
return (1);
}
