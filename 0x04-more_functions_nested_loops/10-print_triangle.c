#include "main.h"

/**
 * print_triangle - print a triangle
 * @size:input
 *
 */
void print_triangle(int size)
{
int i, q, w;

if
(size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (q = 1; q <= (size - i); q++)
{
_putchar(' ');
}
for (w = 1; w <= i; w++)
_putchar('#');
_putchar('\n');
}
}
}
