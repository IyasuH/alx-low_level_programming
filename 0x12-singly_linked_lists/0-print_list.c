#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - function that prints all the elements of list_t
 *@h: const list_t
 *Return: the number tof nodes
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
if (h->str != NULL)
{
while (h != NULL)
{
printf("[%d] %s\n", (h->len), h->str);
h = h->next;
n++;
}
}
else
printf("[0] (nil)\n");
return (n);
}
