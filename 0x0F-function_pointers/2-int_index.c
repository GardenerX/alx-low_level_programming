#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array:array
 * @size:number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
