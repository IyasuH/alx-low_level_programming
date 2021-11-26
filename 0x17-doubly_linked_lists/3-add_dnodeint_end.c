#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - a function adds a new node at the end of list
 * @head: the head of the list
 * @new: the value that will be add
 *
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t  **head, const int new)
{
struct dlistint_s *add = malloc(sizeof(struct dlistint_s)), *ptr;
if (add == NULL)
return (NULL);
add->n = new;
add->prev = NULL;
add->next = NULL;
if (*head == NULL)
{
(*head) = add;
}
else
{
ptr = (*head);
while (ptr->next != NULL)
ptr = ptr->next;
add->prev = ptr;
ptr->next = add;
}
return (add);
}
