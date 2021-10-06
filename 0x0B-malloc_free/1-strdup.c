#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "holberton.h"
/**
 *_strdup - function that returns a pointer to a newly
 * allocated space in memory
 *which contains copy of the string given as a parameter
 *@str: char
 *Return: pointer or NULL
 */
char *_strdup(char *str)
{
size_t len = strlen(str) + 1;
void *new = malloc(len);
if (str != NULL && new != NULL)
return ((char *) memcpy(new, str, len));
else if (str != NULL && new == NULL)
return (NULL);
else
return (NULL);
free(new);
}
