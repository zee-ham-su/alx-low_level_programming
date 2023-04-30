#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints every elements ina linked list
 * @h: linked list to be printed
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
if (h == NULL)
{
return (0);
}
else
{
return (1 + listint_len(h->next));

}

}
