#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: hash table size.
 *
 * Return: pointer to a created sorted hash table.
 */


shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}
/**
 * insert_sorted_node - Inserts a node into the sorted
 * linked list.
 * @ht: The sorted hash table.
 * @node: The node to insert.
 */

void insert_sorted_node(shash_table_t *ht, shash_node_t *node)
{
shash_node_t *current;

if (ht->shead == NULL || strcmp(node->key, ht->shead->key) < 0)
{
node->snext = ht->shead;
node->sprev = NULL;
if (ht->shead != NULL)
ht->shead->sprev = node;
else
ht->stail = node;
ht->shead = node;
}
else
{
current = ht->shead;
while (current->snext != NULL && strcmp(node->key,
current->snext->key) > 0)
current = current->snext;

node->sprev = current;
node->snext = current->snext;
if (current->snext != NULL)
current->snext->sprev = node;
else
ht->stail = node;
current->snext = node;
}
}

/**
 * shash_table_set - Adds or updates an element in a
 * sorted hash table
 * @ht: The hash table
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *node, *temp;
char *new_value;
if (ht == NULL || key == NULL || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);
free(temp->value);
temp->value = new_value;
return (1);
}
temp = temp->next;
}
node = malloc(sizeof(shash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (0);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
insert_sorted_node(ht, node);
return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * in a sorted hash table
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if
 * key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *node;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The sorted hash table to print.
 */

void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
int flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->shead;
while (node != NULL)
{
if (flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in
 * reverse order.
 * @ht: The sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
int flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->stail;
while (node != NULL)
{
if (flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: The sorted hash table to delete.
 */

void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *temp;
unsigned long int j;

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
