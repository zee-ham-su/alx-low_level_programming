#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function prints a linked list.
 * @head: Pointer to the head node of the list.
 * Return: number of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp;
size_t count = 0;

while (head)
{
printf("[%lu] [%p] %d\n", count, (void *)head, head->n);
count++;
temp = head;
head = head->next;
if (temp <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}
}
return (count);
}
