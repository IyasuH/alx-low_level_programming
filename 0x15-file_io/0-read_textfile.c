
0;136;0c#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include<fcntl.h>

/**
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd, red, writ;
  char *buf = malloc(sizeof(char) * letters + 1);
  fd = open(filename, O_RDONLY);
  red = read(fd, buf, letters);
  writ = write(STDOUT_FILENO, buf, red);
    close(fd);
    free(buf);
    if (fd == -1 || filename == NULL || buf == NULL || red == -1 || writ == -1)
      return (0);
    else
      return (writ);
     }
