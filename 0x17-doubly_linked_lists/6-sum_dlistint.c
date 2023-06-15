#include <stdlib.h>
#include "lists.h"


/**
 * sum_dlistint - Computes sum of all the data values in linked list.
 * @head: Pointer to the head the list.
 * Return: Sum of the data values, or 0 if the list is empty.
 */


int sum_dlistint(dlistint_t *head)
{
int aggre = 0;
dlistint_t *crnt = head;

while (crnt != NULL)
{
aggre += crnt->n;
crnt = crnt->next;
}

return (aggre);
}
