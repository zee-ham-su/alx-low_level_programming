#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely (avoiding loops)
 *
 * @head: A pointer to the head node of the linked list
 *
 * Return: The number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
const listint_t *slowpoke = head, *cheetah = head;
size_t count = 0;

if (head == NULL)
exit(98);

while (cheetah != NULL && cheetah->next != NULL)
{
slowpoke = slowpoke->next;
cheetah = cheetah->next->next;

if (slowpoke == cheetah)
{
printf("[%p] %d\n", (void *)slowpoke, slowpoke->n);
exit(98);
}

printf("[%p] %d\n", (void *)slowpoke, slowpoke->n);
count++;
}

printf("[%p] %d\n", (void *)slowpoke, slowpoke->n);
count++;

return (count);
}
