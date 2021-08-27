#include<stdio.h>
/**
 *main - putchar
 *Description: pritn alphabet in lowercase using putchar
 *Return: return null
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
