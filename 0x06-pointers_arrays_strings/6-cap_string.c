#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *cap_string - function
 *
 *@ch1
 *Return: char type
 */
char *cap_string(char *ch1)
{
int i;
int x = strlen(ch1);

for (i = 1; i < x; i++)
{
if (isalpha(ch1[i]) && ch1[i-1] == ' ')
ch1[i]= toupper(ch1[i]);
}
return (ch1);
}
