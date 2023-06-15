#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: no return
*/


void free_dlistint(dlistint_t *head)
{
dlistint_t *crnt = head;
dlistint_t *next;

while (crnt != NULL)
{
next = crnt->next;
free(crnt);
crnt = next;
}

}
