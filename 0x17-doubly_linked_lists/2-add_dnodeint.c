#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - a function adds a new node at the begining of a list
 * @head: dlistint
 * @new: const int
 *
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, int new)
{
struct dlistint_s *temp = malloc(sizeof(struct dlistint_s));
temp->n = new;
temp->prev = NULL;
temp->next = NULL;
if (*head == NULL)
(*head) = temp;
else
{
(*head)->prev = temp;
temp->next = (*head);
(*head) = temp;
}
return (temp);
}
