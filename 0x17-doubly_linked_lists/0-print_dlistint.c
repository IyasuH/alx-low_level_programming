#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of dlistint_t
 * @h: const dlistint_t
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t a = 0;
const dlistint_t *tmp = h;
if (h->next != NULL && h->prev == NULL)
{
if (&h->n != NULL)
{
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return (a);
if (tmp == NULL)
return (1);
return (0);
}
else
{
a = 0;
a += 1;
while (h != NULL)
{
h = h->next;
a += 1;
return (a);
}
}
if (tmp == NULL)
return (1);
return (0);
}
return (1);
}
