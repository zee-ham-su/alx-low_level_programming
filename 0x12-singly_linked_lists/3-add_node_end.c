#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - Add a new node at the end of a linked list
 * @head: The head of the linked list
 * @str: The string to be added as a new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
int i;

if (head == NULL || str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

for (temp = *head, i = 0; temp->next != NULL; temp = temp->next)
i++;

temp->next = new_node;

return (new_node);

}
