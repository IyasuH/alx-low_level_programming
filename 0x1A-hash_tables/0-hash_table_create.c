#include "hash_tables.h"

/**
 * hash_table_create - hash table
 * @size: the size of an array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *newtable;
newtable = malloc(sizeof(hash_table_t));
if (newtable == NULL || size == 0)
return (NULL);
newtable->array = malloc(sizeof(hash_table_t *) * size);
if (newtable->array == NULL)
{
free(newtable);
return (NULL);
}
for (i = 0; i < size; i++)
{
newtable->array[i] = NULL;
}
return (newtable);
}
