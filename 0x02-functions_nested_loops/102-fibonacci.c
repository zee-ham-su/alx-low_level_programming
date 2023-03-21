#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, separated by commas and spaces
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
long long int fib[50];

    /* initialize first two numbers of the sequence */
    fib[0] = 1;
    fib[1] = 2;

    /* generate the rest of the sequence */
    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    /* print the sequence */
    for (i = 0; i < 49; i++)
    {
printf("%lld, ", fib[i]);
    }
printf("%lld\n", fib[49]);

return (0);
}
