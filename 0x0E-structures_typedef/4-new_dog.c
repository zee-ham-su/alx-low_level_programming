#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to struct dog.
 * If fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
size_t name_len, owner_len;
dog_t *dog;


if (!name || !owner)
return (NULL);

name_len = strlen(name) + 1;
owner_len = strlen(owner) + 1;

dog = malloc(sizeof(*dog));
if (!dog)
return (NULL);

dog->name = malloc(name_len);
if (!dog->name)
{
free(dog);
return (NULL);
}

dog->owner = malloc(owner_len);
if (!dog->owner)
{
free(dog->name);
free(dog);
return (NULL);
}

memcpy(dog->name, name, name_len);
dog->age = age;
memcpy(dog->owner, owner, owner_len);

return (dog);
}
