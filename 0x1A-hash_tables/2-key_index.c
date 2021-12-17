#include "hash_tables.h"
0;136;0c
/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: the size
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = (hash_djb2(key) % size);
return (index);
}
