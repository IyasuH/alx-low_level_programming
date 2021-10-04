#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - function
 *@name: char1
 *@age: int
 *@owner: char2
 *Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
if (d != NULL)
return (d);
else
return (NULL);
}
