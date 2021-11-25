#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a list
 * @head: the head of the list
 *
 * Return: the sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head->next == NULL && head->prev == NULL)
return (0);
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
