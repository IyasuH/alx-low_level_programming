#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - function that adds anew node at the beginning of a list_t list
 *@head: list_t
 *@str1: const char
 *Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, char *str1)
{
struct list_s *newnode = malloc(sizeof(struct list_s));
if (newnode != NULL)
{

newnode->str = strdup(str1);
newnode->next = *head;
newnode->len = strlen(str1);
*head = newnode;
return (*head);
}
else
return (NULL);
}
