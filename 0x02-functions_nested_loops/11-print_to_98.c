#include "main.h"
#include <stdio.h>

/**
 * print_to_98
 * @n:input
 *
 */
extern void print_to_98(int n);
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar(n + '0');
if (n < 97)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');

