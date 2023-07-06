#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */


void hash_table_print(const hash_table_t *ht)
{
unsigned long int j;
int flag = 0;
hash_node_t *node = NULL;

if (ht == NULL)
return;

printf("{");
for (j = 0; j < ht->size; j++)
{
node = ht->array[j];
while (node != NULL)
{
if (flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
}
}
printf("}\n");
}
