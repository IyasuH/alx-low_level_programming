#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - a function that frees a listint_t list.
 *@head: listint_t
 *Return: nothing
 */
void free_listint(listint_t *head)
{
if (head->next)
free_listint(head->next);
free(head);
}
