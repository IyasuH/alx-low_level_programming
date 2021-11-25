#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - a function adds a new node at the end of list
 * @head: the head of the list
 * @new: the value that will be add
 *
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t  **head, const int new)
{
struct dlistint_s *temp = malloc(sizeof(struct dlistint_s));
temp->n = new;
temp->prev = NULL;
temp->next = NULL;
if (*head == NULL)
{
(*head) = temp;
}
else
{
struct dlistint_s *ptr;
ptr = (*head);
while (ptr->next != NULL)
ptr = ptr->next;
temp->prev = ptr;
ptr->next = temp;
}
return (temp);
}
