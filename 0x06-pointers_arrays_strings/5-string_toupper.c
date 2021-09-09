#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *string_toupper - function
 *@ch: char to upper
 *Return: char type
 */
char *string_toupper(char *ch)
{
int i;
for (i = 0; ch[i] != '\0'; i++)
ch[i] = toupper(ch[i]);
return (ch);
}
