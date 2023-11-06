#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int x;
unsigned int c;
x = 1;
for (c = 1; c <= power; c++)
x *= base;
return (x);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
unsigned long int div, x;
char f;

f = 0;
div = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (div != 0)
{
x = n & div;
if (x == div)
{
f = 1;
_putchar('1');
}
else if (f == 1 || div == 1)
{
_putchar('0');
}
div >>= 1;
}
}
