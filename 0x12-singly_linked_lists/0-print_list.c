#include<string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include<stddef.h>
/**
 *print_list - function that prints all the elements of list_t
 *@h: const list_t
 *Return: the number tof nodes
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
if (h->next != NULL)
{
if (h->str != NULL)
{
while (h != NULL)
{
printf("[%d] %s\n", (h->len), h->str);
h = h->next;
n++;
}
return (n);
if (h == NULL)
return (0);
}
else
{
n = 0;
printf("[0] (nil)\n");
n += 1;
while (h != NULL)
{
h = h->next;
printf("[%d] %s\n", (h->len), h->str);
h = h->next;
n += 1;
return (n);
}
}
if (h == NULL)
return (0);
}
return (0);
}
