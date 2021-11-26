#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a fun that delete node at index of l.list
 * @head: head of linked list
 * @index: index deletion performed
 *
 * Return: 1 on success or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
struct dlistint_s *current;
unsigned int i;
current = (*head);
for (i = 0; i < index && current != NULL; i++)
current = current->next;
if (current != NULL)
{
current->prev->next = current->next;
current->next->prev = current->prev;
return (1);
}
else
return (-1);
}
