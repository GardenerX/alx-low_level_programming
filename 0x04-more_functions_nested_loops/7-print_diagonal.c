#include "main.h"

/**
 * print_diagonal - print special character diagonally
 * @n:input
 *
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int m, i;

for (m = 0; m < n; m++)
{
for (i = 0; i < n; i++)
{
if (i == m)
_putchar('\\');
else if (i < m)
_putchar(' ');
}
_putchar('\n');
}
}
}
