#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *cnt = head;
listint_t *mve = head;

while (mve != NULL && mve->next != NULL)
{
mve = mve->next;
}

{
cnt = cnt->next;
mve = mve->next->next;

if (cnt == mve)
{

}
if (mve == NULL || mve->next == NULL)

return (NULL);
}
cnt = head;

while (cnt != mve)
{
cnt = cnt->next;
mve = mve->next;
}

return (cnt);

}
