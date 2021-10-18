#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include<fcntl.h>

/**
 *read_textfile -  a function that reads a text file and
 *prints it to the POSIX standard output.
 *@filename: const char
 *@letters: size_t
 *Return: ctual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, red, writ;
char *buf = malloc(sizeof(char) * (letters+1));
fd = open(filename, O_RDONLY);
buf[letters] = '\0';
red = read(fd, buf, letters);
writ = write(STDOUT_FILENO, buf, red);
if (fd == -1 || filename == NULL || buf == NULL || red == -1 || writ == -1)
{
close(fd);
free(buf);
return (0);
}
else
{
close(fd);
free(buf);
return (writ);
}
}
