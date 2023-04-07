#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line.
 * @argc: The number of command line arguments passed to the program.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: Always 0 to indicate successful completion.
 */


int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
