#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - function
 *@d: dog_t
 *
 */
void free_dog(dog_t *d)
{
free(d);
}
