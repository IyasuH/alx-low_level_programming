#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - a function that create an array of chars and
 * initializes it with a specific char
 *@size: the size
 *@c: the char
 *Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i = 0;
if (size != 0)
{
ar = malloc(sizeof(char) * size);
while (i < size)
{
ar[i] = c;
i++;
}
ar[i] = '\0';
if (ar != NULL)
return (ar);
else
return (NULL);
}
else
return (NULL);
}
