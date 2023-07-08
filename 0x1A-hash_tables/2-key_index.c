#include "hash_tables.h"


/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key for which to compute the index.
 * @size: The size of the hash table array.
 *
 * Return: The computed index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
unsigned long int index = hash % size;

return (index);
}
