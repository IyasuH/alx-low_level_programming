#include "main.h"

/**
 *main - a function that will copy f1 to f2
 *@argc: the number of argument
 *@argv: argument chararter
 *Return: number
 */
int main(int argc, char *argv[])
{
int f1 = open(argv[1], O_RDONLY, 0);
int f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
char buf[1024];
int red = read(f1, buf, 1024);
int writ = write(f2, buf, red);
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (f1 == -1 || red == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (f2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while (red > 0)
{
if (writ != red)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (close(f1) != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1);
exit(100);
}
if (close(f2) != 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2);
exit(100);
}
return (0);
}
