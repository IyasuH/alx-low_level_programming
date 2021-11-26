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
struct dlistint_s *add = malloc(sizeof(struct dlistint_s));
add->n = new;
add->prev = NULL;
add->next = NULL;

if (*head == NULL)
(*head) = add;
else
{
(*head)->prev = add;
add->next = (*head);
(*head) = add;
}
return (add);
}
