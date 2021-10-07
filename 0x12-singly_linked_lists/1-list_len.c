#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - a function that returns the number of elements in a linked
 *lisst_t list
 *@h: const list_t
 *Return: numer of elements
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
