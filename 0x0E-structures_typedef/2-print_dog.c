#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */



void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.1f\n", d->age);
printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
