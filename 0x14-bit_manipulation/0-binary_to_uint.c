#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 *@b: const char
 *Return: the converted number or 0 if (0 or 1) or NULL given
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int sum = 0;
  long unsigned int i = 0, n = sizeof(b) - 1;
  int base = 1;
    while(n != 0)
      {
	int temp = b[i];
	int last_digit = temp % 10;
	temp = temp / 10;
	sum = sum + last_digit * base;
	base = base * 2;
	i++;
	n--;
      }
  return (sum);
}
