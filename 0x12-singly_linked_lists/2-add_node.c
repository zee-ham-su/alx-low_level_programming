#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list
 * @str: string to add as data to new node
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = NULL;

if (!head || !str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head)
new_node->next = *head;

*head = new_node;

return (new_node);
}
