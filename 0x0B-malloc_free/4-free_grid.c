#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid:pointer to grid
 * @height:height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
/*{*/
/*free(grid[height]);*/
/*}*/
