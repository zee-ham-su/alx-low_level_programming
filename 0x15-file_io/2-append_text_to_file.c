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
int fd = 0;

return ((filename ? 0 : -1));

fd = open(filename, O_WRONLY | O_APPEND);
if (!fd)
{
return (-1);
}

if (text_content)
{
size_t len = strlen(text_content);
return ((write(fd, text_content, len) == (ssize_t)len) ?
close(fd), 1 : -1);
}
return (1);
}
