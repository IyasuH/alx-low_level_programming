#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 * @head: dlistint
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
struct dlistint_s *temp = head;
while (temp != NULL)
{
free(temp);
temp = temp->next;
}
}
