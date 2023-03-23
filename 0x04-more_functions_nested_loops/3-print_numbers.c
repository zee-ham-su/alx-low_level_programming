#include <stdio.h>

int _putchar(char c);

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_numbers();
    return (0);
}

int _putchar(char c)
{
    return (putchar(c));
}
