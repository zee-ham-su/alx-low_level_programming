#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */


void hash_table_delete(hash_table_t *ht)
{
unsigned long int j;
hash_node_t *node, *temp;

if (ht == NULL)
return;

for (j = 0; j < ht->size; j++)
{
node = ht->array[j];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}
