#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * length - to calculate the length of the list
 * since we canot use the question number 1's their problem not mine
 * @head: the head of list
 *
 * Return: the length of list
 */

int length(dlistint_t *head)
{
struct dlistint_s *temp = head;
unsigned int count = 0;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}

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
len = length(*h);
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
