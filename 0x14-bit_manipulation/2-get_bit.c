#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 * Return: value of the bit at a given index, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, x;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
x = n & div;
if (x == div)
return (1);
return (0);
}
