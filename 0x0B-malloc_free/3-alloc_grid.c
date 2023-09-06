#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width:width of grid
 * @height:height of grid
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **a;
int c, f;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (c = 0; c < height; c++)
{
a[c] = malloc(sizeof(int) * width);
if (a[c] == NULL)
{
for (; c >= 0; c--)
free(a[c]);
free(a);
return (NULL);
}
}
for (c = 0; c < height; c++)
{
for (f = 0; f < width; f++)
a[c][f] = 0;
}
return (a);
}
