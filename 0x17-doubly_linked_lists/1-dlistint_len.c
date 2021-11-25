#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in linked list
 * @h: const dlistint_t
 *
 * Return: the number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t a = 0;
while (h != NULL)
{
h = h->next;
a++;
}
return (a);
}
