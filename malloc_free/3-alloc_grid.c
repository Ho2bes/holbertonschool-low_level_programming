#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**alloc_grid - grid
*@width: tab 1
*@height: tab 2
*Return: Success
*/

int **alloc_grid(int width, int height)
{
int i;
int j;
int **tab;

if (height <= 0 || width <= 0)
return (NULL);
tab = malloc(height * sizeof(int *));
if (tab == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
tab[i] = malloc(width * sizeof(int));
if (tab[i] == NULL)
{
for (j = i - 1; j >= 0; j--)
free(tab[j]);
free(tab);
return (NULL);
}
for (j = 0; j < width; j++)
tab[i][j] = 0;
}
return (tab);
}
