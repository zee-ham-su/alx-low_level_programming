#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

int main(int argc, char *argv[])
{
    int fd1, fd2;
    ssize_t rcount, wcount;
    char buffer[BUFSIZE];

    if (argc != 3)
    {
        printf("Usage: %s file_from file_to\n", argv[0]);
        return (1);
    }

    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1)
    {
        printf("Error: Can't read from file %s\n", argv[1]);
        return (1);
    }

    fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd2 == -1)
    {
        printf("Error: Can't write to file %s\n", argv[2]);
        close(fd1);
        return (1);
    }

    printf("1. Copy file using read() and write() functions.\n");
    while ((rcount = read(fd1, buffer, BUFSIZE)) > 0)
    {
        wcount = write(fd2, buffer, rcount);
        if (wcount == -1)
        {
            printf("Error: Can't write to file %s\n", argv[2]);
            close(fd1);
            close(fd2);
            return (1);
        }
    }

    printf("Number of bytes copied: %ld\n", (long)wcount);

    lseek(fd1, 0, SEEK_SET);
    lseek(fd2, 0, SEEK_SET);

    printf("2. Copy file using read() and write() functions and ");
    printf("print the number of bytes copied.\n");

    while ((rcount = read(fd1, buffer, BUFSIZE)) > 0)
    {
        wcount = write(fd2, buffer, rcount);
        if (wcount == -1)
        {
            printf("Error: Can't write to file %s\n", argv[2]);
            close(fd1);
            close(fd2);
            return (1);
        }
    }

    printf("Number of bytes copied: %ld\n", (long)wcount);

    lseek(fd1, 0, SEEK_SET);
    lseek(fd2, 0, SEEK_SET);

    printf("3. Copy file using read() and write() functions and ");
    printf("print the contents of the file.\n");

    while ((rcount = read(fd1, buffer, BUFSIZE)) > 0)
    {
        wcount = write(fd2, buffer, rcount);
        if (wcount == -1)
        {
            printf("Error: Can't write to file %s\n", argv[2]);
            close(fd1);
            close(fd2);
            return (1);
        }
        printf("%.*s", (int)rcount, buffer);
    }

    close(fd1);
    close(fd2);

    return (0);
}
