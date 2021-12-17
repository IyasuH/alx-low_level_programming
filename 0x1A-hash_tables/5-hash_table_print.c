#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;
unsigned long int indx;
if (ht != NULL)
{
printf("{");
while(ht->size > indx)
{
temp = ht->array[indx];
while(temp != NULL)
{
printf("'%s': '%s',", temp->key, temp->value);
temp = temp->next;
}
indx++;
}
printf("}");
printf("\n");
}
}
