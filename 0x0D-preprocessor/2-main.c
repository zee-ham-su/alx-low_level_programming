#include <stdio.h>

/**
 * print_filename - prints the name of the current file.
 */
void print_filename(void)
{
printf("%s\n", __FILE__);
}

/**
 * main - prints the name of the current file using print_filename().
 *
 * Return: Always 0.
 */
int main(void)
{
print_filename();
return (0);
}
