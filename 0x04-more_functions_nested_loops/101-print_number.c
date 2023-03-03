#include "main.h"

/**
 * print_number - print integers
 * @n:input
 *
 */
void print_number(int n)
{
unsigned int w;

if (n < 0)
{
w = -n;
_putchar('-');
}
else
{
w = n;
}
if (w / 10)
{
print_number(w / 10);
}
_putchar((w % 10) + '0');
}
