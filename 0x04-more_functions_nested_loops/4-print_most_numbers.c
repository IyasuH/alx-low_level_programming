#include "main.h"
/**
 *print_most_numbers - execpt 2 and 4
 *
 *Return: null
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a == 2 || a == 4)
continue;
_putchar(a + 48);
_putchar('\n');
}
}
