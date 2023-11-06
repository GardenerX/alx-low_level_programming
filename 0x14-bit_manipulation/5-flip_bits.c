#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int c, counter = 0;
unsigned long int num;
unsigned long int res = n ^ m;

for (c = 63; c >= 0; c--)
{
num = res >> c;
if (num & 1)
counter++;
}
return (counter);
}
