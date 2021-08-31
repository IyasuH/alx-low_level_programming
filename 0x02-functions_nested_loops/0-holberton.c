#include "main.h"
/**
 *main - print
 *Description: prints Holberton
 *Return: null
 */
int main(void)
{
int i;
char *c = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
