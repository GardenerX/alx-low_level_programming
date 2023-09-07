#include "main.h"

/**
 * array_range - creates an array of integers
 * @min:minimum range
 * @max:maximum range
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *t;
int c, b;
if (min > max)
return (NULL);
c = max - min + 1;
t = malloc(sizeof(int) * c);
if (t == NULL)
return (NULL);
else
for (b = 0; min <= max; b++)
{
t[b] = min++;
}
return (t);
}
