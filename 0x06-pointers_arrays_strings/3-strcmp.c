#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strcmp - comparing function simlar to strcmp
 *@s1 : character one to be compared
 *@s2 : character two to be compared
 *
 *Return: int data type
 */
int _strcmp(char *s1, char *s2)
{
int i;
if (s1 == s2)
i = 0;
else if (s1 > s2)
i = 15;
else
i = -15;
return (i);
}
