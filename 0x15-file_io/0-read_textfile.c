#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file to read from
 * @letters: amount of letters it will read and print output
 * Return: amount of printed letters, returns 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t nread = 0;
FILE *fp;
char *buffer;

if (filename == NULL)
return (0);

fp = fopen(filename, "r");
if (fp == NULL)
return (0);

buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(fp);
return (0);
}

for (; (size_t) nread < (size_t)letters; )

{
if (fgets(buffer, letters - nread + 1, fp) != NULL)
{
 nread += fprintf(stdout, "%s", buffer);
}
else
{
break;
}
}

free(buffer);
fclose(fp);
return (nread);
}

