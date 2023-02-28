#include "main.h"

/**
 * reset_to_98 - Entry Point
 *
 * description: reset value to 98
 * 'n' -is an int variable
 * @n:input
 * @n:output
 * Return: n
 */

void reset_to_98(int *n)
{
int i = 402;
n = &i;

printf("n = %d\n", *n);
reset_to_98(&i);
printf("n = %d\n", *n);
}
