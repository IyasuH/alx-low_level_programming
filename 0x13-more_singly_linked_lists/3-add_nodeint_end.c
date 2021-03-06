#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 *@head: listint_t
 *@n: const int
 *Return: address of the new element or NULL ifi it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
struct listint_s *newnode = malloc(sizeof(struct listint_s));
struct listint_s *last = *head;
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return ((*head));
}
while (last->next != NULL)
last = last->next;
last->next = newnode;
return ((*head));
}
