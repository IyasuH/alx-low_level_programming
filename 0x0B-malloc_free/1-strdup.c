#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "holberton.h"
/**
 *_strdup - function that returns a pointer to a newly allocated space in memory 
 *which contains copy of the string given as a parameter
 *@str: char
 *return: pointer or NULL
 */
char *_strdup(char *str)
{
size_t len = strlen(str) + 1;
void *new = malloc(len);
if(new == NULL)
return NULL;
return (char *) memcpy (new, str, len);
free(new);
}
