#include <stdlib.h>
#include "lists.h"


/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tep;

do {
tep = *h;
if (tep == 0)
break;
h = &(*h)->next;
free(tep);
count++;
} while (tep < *h);

*h = NULL;
return (count);
}
