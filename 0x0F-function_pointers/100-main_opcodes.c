#include <stdio.h>
#include <stdlib.h>



/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: 0 on success, 1 on failure
 */


int main(int argc, char **argv)
{
int i, bytes;
char *func_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}

func_ptr = (char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02hhx", func_ptr[i]);

if (i < bytes - 1)
printf(" ");
else
printf("\n");
}

return (0);
}
