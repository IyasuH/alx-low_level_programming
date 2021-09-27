2#include <stdio.h>
/**
 *fileName - function
 *
 */
void fileName(void)
{
printf("%s\n", __FILE__);
}
/**
 *main - function
 *
 *Return: null
 */
int main(void)
{
fileName();
return (0);
}
