#include "main.h"

/**
 *create_file -  a function that created a file
 *@filename: const char
 *@text_content: char
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int writ;
int i = 0;
int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (text_content)
{
while (text_content[i])
i++;
writ = write(fd, text_content, i);
if (writ != i)
return (-1);
}
if (fd == -1 || filename == NULL)
return (-1);
close(fd);
return (1);
}
