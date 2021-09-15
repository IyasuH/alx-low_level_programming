#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *is_prime_number - function
 *
 *@n: int
 *Return: int type 
 */
int is_prime_number(int n)
{
if (n == 1 || n == -1)
return(0);
else if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
return(1);
else
return(0);
}
