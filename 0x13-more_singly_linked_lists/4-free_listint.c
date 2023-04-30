#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint - free singly linked list.
* @head: head of the linked list to print
*
* Return: zilch.
*/


void free_listint(listint_t *head)
{
listint_t *curr;
do {
curr = head;
head = head->next;
free(curr);
} while (head != NULL);
}
