#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index
 * Return: 1 on success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setting;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
setting = 1 << index;
*n = *n | setting;
return (1);
}
