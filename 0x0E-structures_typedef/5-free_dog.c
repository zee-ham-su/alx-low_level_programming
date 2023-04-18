#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 * Return: no return.
 */


void free_dog(dog_t *d)
{
if (d == NULL)
{
printf("Error: the dog pointer is NULL.\n");
return;
}

free(d->owner);
free(d->name);
free(d);
}
