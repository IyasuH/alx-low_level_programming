#include "main.h"
#include <stddef.h>
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: const char
 *@text_content: char
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i = 0, writ;
fd = open(filename, O_WRONLY | O_APPEND);

if (text_content)
{
while (text_content[i])
i++;
writ = write(fd, text_content, i);
if (writ != i)
{
close(fd);
return (-1);
}
}
if (fd == -1 || filename == NULL)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
