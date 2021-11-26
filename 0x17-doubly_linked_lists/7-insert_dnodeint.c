#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position
 * @h: head
 * @idx: position for new node to be insetred
 * @new: elemnt to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int new)
{
struct dlistint_s *temp = malloc(sizeof(struct dlistint_s)), *qtr;
unsigned int len = 0;
size_t a = 0;
a = dlistint_len(*h);
while (--a)
len++;
if (idx > len)
return (NULL);
if (temp == NULL)
return (NULL);
if (idx == 0)
{
temp = add_dnodeint(h, new);
return (temp);
}
else
{
temp->n = new;
temp->prev = NULL;
temp->next = NULL;
qtr = (*h);
while (--idx)
{
qtr = qtr->next;
}
temp->next = qtr->next;
temp->prev = qtr;
if (qtr->next != NULL)
qtr->next->prev = temp;
qtr->next = temp;
return (temp);
}
}
