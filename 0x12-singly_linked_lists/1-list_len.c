#include "lists.h"


/**
 * list_len - returns the size of a linked list_t list's element count.
 * @h: a reference to the list_t list's head
 * Return: number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
size_t count;

for (count = 0; h != NULL; count++)
h = h->next;

return (count);
}
