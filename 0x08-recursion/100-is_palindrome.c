#include <stdbool.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome_recursive - checks if a string is a palindrome
 * @s: pointer to the string to check
 * @start: the index of the first character to check
 * @end: the index of the last character to check
 * Return: true if the string is a palindrome, false otherwise
 */
bool is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (true);
}
else
{
bool is_match = s[start] == s[end];
return (is_match && is_palindrome_recursive(s, start + 1, end - 1));
}
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to the string to check
 *
 * Return: true if the string is a palindrome, false otherwise
 */

int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_recursive(s, 0, len - 1));
}
