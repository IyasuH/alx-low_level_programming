#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_chessboard - function
 *@a: char type
 *
 *Return: char type
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i <= 7; i++)
{
for (j = 0; j <= 7; j++)
{
if (a[i][j] != 0)
_putchar(a[i][j]);
}
_putchar('\n');
}
}
