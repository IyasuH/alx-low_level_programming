#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_list - a function that frees a list_t list
 *@head: list_t
 *Return: nothing
 */

void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
