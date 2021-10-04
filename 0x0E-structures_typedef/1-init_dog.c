#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - function
 *struct dog - structure
 *@name: char1
 *@age: float
 *@owner: char2
 *@d: pointer to the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
