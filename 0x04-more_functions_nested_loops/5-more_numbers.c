#include "main.h"

/**
 *more_numbers - numbers
 *
 *Return: null
 */
void more_numbers(void)
{
int a;
int b;
int i;
char *c = "1011121314";
for (a = 0; a < 9; a++)
{
for (b = 0; b <= 9; b++)
_putchar(b + 48);
for (i = 0; i < 11; i++)
_putchar(c[i]);
_putchar('\n');
}
}
