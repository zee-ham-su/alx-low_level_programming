#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */


size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}
