#include "hash_tables.h"

/**
 * hash_table_get - to retrive a value associated with a key
 * @ht: hash table to look into
 * @key: key
 *
 * Return: value or NULLif key couldn't be found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp = NULL;
unsigned long int indx;

if (ht == NULL || key == NULL)
return (NULL);
while (ht->size > indx)
{
temp = ht->array[indx];
while (temp != NULL)
{
/* if we find key throuh runing in the table*/
if (strcmp(temp->key, key) == 0)
return (temp->value);
temp = temp->next;
}
indx++;
}
return (NULL);
}
