#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * printMessage - prints a message before the main function is executed
 *
 * Description: This function prints the required message.
 * Return: void
 */
void printMessage(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

