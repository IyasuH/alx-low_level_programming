#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: the head of linked list
 * @index: the index of node
 *
 * Return: the node if exist or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a = 0;
struct dlistint_s *b = head;
int c = 0, d = 0;

while (head != NULL)
{
if (a == index)
{
c = 1;
b->n = head->n;
}
head = head->next;
a++;
}
if (c == 1 || d == 1)
{
return (b);
}
else
return (NULL);
}
