#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
