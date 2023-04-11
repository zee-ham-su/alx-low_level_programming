#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * alloc_grid -returns 2D array of integers with each element initialized to 0.
 *@width:the width of the 2D array
 *@height:the height of the 2D array
 *Returns: returns pointer that points to an array containing integers.
 */


int **alloc_grid(int width, int height)
{
int **gridnme;
int i;

if (width <= 0 || height <= 0)
return (NULL);

gridnme = malloc(height * sizeof(int *) + height * width * sizeof(int));
if (gridnme == NULL)
return (NULL);

for (i = 0; i < height; i++)
gridnme[i] = (int *)(gridnme + height) + i * width;

memset(gridnme + height, 0, height * width * sizeof(int));

return (gridnme);
}
