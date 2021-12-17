#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
struct hash_node_s *node;
struct hash_node_s *temp;
unsigned long int indx;
temp = malloc(sizeof(hash_node_t));
node = malloc(sizeof(hash_node_t));
if (ht == NULL || key == NULL)
return (0);
indx = key_index((const unsigned char *)key, ht->size);
temp = ht->array[indx];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}

if (node == NULL)
return (0);

node->value = strdup(value);
node->key = strdup(key);
node->next = NULL;

if(ht->array[index] != NULL)
node->next = ht->array[index];
 
ht->array[0] = temp;
return (1);
}
