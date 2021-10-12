#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - a function that prints all the elements of a listint_t list
 *@h :  listint type
 *Return: size_t type
 */
size_t print_listint(const listint_t *h)
{
size_t a = 0;
if (h->next != NULL)
{
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return (a);
}
return (1);
}
