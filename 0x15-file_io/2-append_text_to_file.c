#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */


int append_text_to_file(const char *filename, char *text_content)
{
int fd, ret = 1;


if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

if (text_content)
{
ssize_t len = write(fd, text_content, strlen(text_content));
if (len == -1 || (size_t)len != strlen(text_content))
ret = -1;
}

if (close(fd) == -1)
ret = -1;

return (ret);
}
