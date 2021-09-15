#include <unistd.h>

/**
 *_putchar - func
 *@c : char
 *
 *Return: int type
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
