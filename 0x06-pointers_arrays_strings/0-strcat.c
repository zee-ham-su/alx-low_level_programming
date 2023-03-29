#include "main.h"
#include <stdio.h>

/**
 * main - to concatenate two strings together
 * @src: pointer to a char 
 * @dest: pointer to char
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

 while (dest[i] != '\0'){
    i++;
  }

  while (src[j] != '\0'){
    dest[i] = src[j];
    i++;
    j++;
  }

  dest[i] = '\0';

return (dest);



}
