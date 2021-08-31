#include "main.h"
/**
 *main - print
 *Description: prints Holberton
 *Return: null
 */
int main(void)
{
int i;
char c[10] = "Holberton";
for(i = 0; i < 10; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
