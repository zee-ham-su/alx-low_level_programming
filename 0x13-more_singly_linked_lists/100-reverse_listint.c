#include "lists.h"
#include <stdlib.h>


/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to pointer to the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *temp = NULL;
listint_t *prev = NULL;
listint_t *curr = *head;
while (curr != NULL)
{
temp = curr->next;
curr->next = prev;
prev = curr;
curr = temp;
}
*head = prev;
return (prev);
}
