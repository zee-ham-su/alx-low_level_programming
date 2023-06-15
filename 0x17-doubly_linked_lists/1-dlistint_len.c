#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: number of elements in a list.
 */

size_t dlistint_len(const dlistint_t *h)
{

const dlistint_t *tmp = h;
size_t count = 0;
if (tmp == NULL)
return (0);

while (tmp->next != NULL)
tmp = tmp->next;

while (tmp != NULL)
{
count++;
tmp = tmp->prev;
}

return (count);

}
