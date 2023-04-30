#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 * linked list and returns its data.
 * @head: A double pointer to the head node of the linked list.
 * Return: The data of the deleted head node, or 0 if
 * the linked list is empty.
 */


int pop_listint(listint_t **head)
{

int data = 0;
listint_t *temp = *head;

switch (*head != NULL)
{
case 1:
data = (*head)->n;
*head = (*head)->next;
free(temp);
break;
}

return (data);
}
