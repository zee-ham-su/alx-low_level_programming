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
int cents;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int total_coins = 0;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < num_coins; i++)
{
int num = cents / coins[i];
cents %= coins[i];
total_coins += num;
}
printf("%d\n", total_coins);
return (0);
}
