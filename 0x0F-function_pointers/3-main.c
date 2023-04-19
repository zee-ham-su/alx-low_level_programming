#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char **argv)
{
int nu1, nu2, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

nu1 = atoi(argv[1]);
nu2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && nu2 == 0)
{
printf("Error\n");
exit(100);
}

result = op_func(nu1, nu2);

printf("%d\n", result);

return (0);
}
