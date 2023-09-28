#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * to get from one number to another
 * @n:first integer input
 * @m:second integer input
 * Return:the number of bits you would need
 * to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, counter = 0;
unsigned long int d;
unsigned long int result = n ^ m;
for (a = 63; a >= 0; a--)
{
d = result >> a;
if (d & 1)
counter++;
}
return (counter);
}
