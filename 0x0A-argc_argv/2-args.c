#include <stdio.h>

/**
 *main - Prints all command-line arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
