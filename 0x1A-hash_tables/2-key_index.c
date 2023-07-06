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
unsigned long int hash = 0;
unsigned long int index;
unsigned int prime = 5381;

while (*key)
{
hash = (hash ^ *key) * prime;
key++;
}

index = hash % size;

return (index);
}
