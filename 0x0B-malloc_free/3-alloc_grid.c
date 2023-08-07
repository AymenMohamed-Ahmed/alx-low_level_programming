#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - creates a 2-dimensional array of integers
* @width: the width of the grid
* @height: the height of the grid
*
* Return: pointer to the created 2-dimensional array
*         NULL on failure or if width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
int **grid;
int h, w;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(width * sizeof(int));
if (grid[h] == NULL)
{
for (; h >= 0; h--)
free(grid[h]);
free(grid);
return (NULL);
}
for (w = 0; w < width; w++)
grid[h][w] = 0;
}

return (grid);
}
