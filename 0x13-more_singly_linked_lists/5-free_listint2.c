#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
* free_listint2 - free singly linked list.
* @head: head of the linked list to print
*
* Return: zilch.
*/


void free_listint2(listint_t **head)
{
listint_t *curr_node = *head;
listint_t *next_node;

while (curr_node != NULL)
{
next_node = curr_node->next;
free(curr_node);
curr_node = next_node;
}

*head = NULL;
}
