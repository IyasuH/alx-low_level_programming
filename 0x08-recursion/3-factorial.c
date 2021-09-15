#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *factorial - function
 *
 *@n: int 1
 *Return: int type
 */
int factorial(int n)
{
if(n == 0)
{
return(1);
}
return(n * factorial(n - 1));
}
