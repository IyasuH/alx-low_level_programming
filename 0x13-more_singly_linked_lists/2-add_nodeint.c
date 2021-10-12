#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 *@head: listint_t
 *@n: const int
 *Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *newnode = malloc(sizeof(struct listint_s));
if (newnode != NULL)
{
newnode->n = n;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}
else
return (NULL);
}
