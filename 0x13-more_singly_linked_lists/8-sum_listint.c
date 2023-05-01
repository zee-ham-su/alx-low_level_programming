#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - Returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to the head node of the linked list.
 * Return: total of every the data in the linked list.
 */

int sum_listint(listint_t *head)
{
int total = 0;
do {
total += head->n;
head = head->next;
} while (head != NULL);
return (total);
}
