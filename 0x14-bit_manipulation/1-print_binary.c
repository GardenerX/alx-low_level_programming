#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */
void print_binary(unsigned long int n)
{
int a, counter = 0;
unsigned long int first;
for (a = 63; a >= 0; a--)
{
first = n >> a;
if (first & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
