#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function
 *struct dog - structure
 *@name: char1
 *@age: float
 *@owner: char2
 */

struct dog
{
  char *name;
  float age;
  char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  struct dog *d(char *name, float age, char *owner)
  {
    struct dog *d;
    d->name = name;
    d->age = age;
    d->owner = owner;
    return *d;
  }
}