#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - function that adds anew node at the beginning of a list_t list
 *@head: list_t
 *@str2: const char
 *Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, char *str2)
{
struct list_s *newnode1 = malloc(sizeof(struct list_s));
struct list_s *last = *head;
if (newnode1 != NULL)
{
newnode1->str = strdup(str2);
newnode1->next = NULL;
if (*head == NULL)
{
*head = newnode1;
return (*head);
}
while (last->next != NULL)
last = last->next;
last->next = newnode1;
newnode1->len = strlen(str2);
return (*head);
}
else
return (NULL);
}
