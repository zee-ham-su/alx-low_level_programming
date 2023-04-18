#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>


/**
 * new_dog - Creates a new dog_t structure
 * @name:dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: A pointer to the new dog_t structure, or NULL if memory fails
 */


dog_t *new_dog(char *name, float age, char *owner)
{


dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(strlen(name) + 1);

if (dog->name == NULL)
{
free(dog);
return (NULL);
}

for (size_t i = 0; i <= strlen(name); i++)
dog->name[i] = name[i];

dog->owner = malloc(strlen(owner) + 1);

if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

for (size_t i = 0; i <= strlen(owner); i++)
dog->owner[i] = owner[i];



dog->age = age;


return (dog);
}
