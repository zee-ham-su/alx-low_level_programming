#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value.
 * @key: The key to be added/updated. Cannot be an
 * empty string.
 * @value: The value associated with the key. Can be an
 * empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL, *temp = NULL;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
