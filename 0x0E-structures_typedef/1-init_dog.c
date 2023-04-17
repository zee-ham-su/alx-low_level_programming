#include "dog.h"


/**
 * init_dog - function that sets values for a variable of type "struct dog"
 * @d: Pointer to a struct dog
 * @name:dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no return
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
