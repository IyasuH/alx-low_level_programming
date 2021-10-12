#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 *@h: listint_t type
 *Return: the number of elemets
 */
size_t listint_len(const listint_t *h)
{
size_t a = 0;
while (h != NULL)
{
h = h->next;
a++;
}
return (a);
}
