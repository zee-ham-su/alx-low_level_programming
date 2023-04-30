#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
* free_listint2 - free singly linked list.
* @head: head of the linked list to print
*
* Return: zilch.
*/


void free_listint2(listint_t **head)
{
listint_t *curr;
curr = *head;
if (head == NULL)
return;

do {
*head = (*head)->next;
free(curr);
} while (*head != NULL);

*head = NULL;
}
